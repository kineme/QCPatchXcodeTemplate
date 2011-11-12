
#import "QCImageProvider.h"

@class QCRegion;

@interface QCCroppedImageProvider : QCImageProvider
{
	id <QCImageProvider> _originalProvider;	// 24 = 0x18
	NSAffineTransform *_transformation;	// 28 = 0x1c
	NSRect _croppingRect;	// 32 = 0x20
	QCRegion *_domainOfDefinition;	// 48 = 0x30
	void *_unused2[4];	// 52 = 0x34
}

- (id)initWithProvider:(id)fp8 transformation:(id)fp12 croppingRect:(NSRect)fp16;
- (void)dealloc;
- (id)originalProvider;
- (id)transformation;
- (NSRect)croppingRect;
- (id)domainOfDefinition;
- (CGColorSpaceRef)colorSpace;
- (BOOL)hasAlpha;
- (BOOL)supportsCropping;
- (BOOL)supportsTransformation;
- (BOOL)supportsColorMatching;
- (id)supportedPixelBufferFormatsForManager:(id)fp8;
- (id)createPixelBufferForManager:(id)fp8 withFormat:(id)fp12 transformation:(id)fp16 bounds:(NSRect)fp20 colorSpace:(CGColorSpaceRef)fp36 options:(id)fp40;
- (id)supportedTextureBufferTargetsForManager:(id)fp8;
- (id)supportedTextureBufferFormatsForManager:(id)fp8;
- (id)createTextureBufferForManager:(id)fp8 withFormat:(id)fp12 target:(GLuint)fp16 transformation:(id)fp20 bounds:(NSRect)fp24 colorSpace:(CGColorSpaceRef)fp40 options:(id)fp44;
- (id)createOptimizedProviderWithTransformation:(id)fp8 cropping:(NSRect)fp12;

@end
