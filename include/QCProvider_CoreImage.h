#import "QCImageProvider.h"

@class QCRegion;

@interface QCProvider_CoreImage : QCImageProvider
{
	CIImage *_image;	// 24 = 0x18
	QCRegion *_domainOfDefinition;	// 28 = 0x1c
	NSArray *_pixelFormats;	// 32 = 0x20
	NSArray *_textureFormats;	// 36 = 0x24
	pthread_mutex_t _mutex;	// 40 = 0x28
}

+ (BOOL)isCompatibleWithSource:(id)fp8 sourceMD5:(QCMD5Sum *)fp12;
+ (id)createProviderWithSource:(id)fp8 options:(id)fp12;
- (id)initWithCIImage:(id)fp8 options:(id)fp12;
- (void)finalize;
- (void)dealloc;
- (NSString *)sourceRepresentationType;
- (id)sourceRepresentation;
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

@end

@interface QCProvider_CoreImage (QCImage)
- (id)createOptimizedProviderWithTransformation:(id)fp8 cropping:(NSRect)fp12;
@end
