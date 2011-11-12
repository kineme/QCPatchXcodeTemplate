
#import "QCImageProvider.h"

@class QCRegion, QCTextRenderer;

@interface QCProvider_CoreText : QCImageProvider
{
	QCTextRenderer *_renderer;	// 24 = 0x18
	QCRegion *_domainOfDefinition;	// 28 = 0x1c
	QCMD5Sum _md5;	// 32 = 0x20
	NSArray *_pixelFormats;	// 48 = 0x30
}

+ (BOOL)isCompatibleWithSource:(id)fp8 sourceMD5:(QCMD5Sum *)fp12;
+ (id)createProviderWithSource:(id)fp8 options:(id)fp12;
- (id)initWithTextRenderer:(id)fp8 options:(id)fp12;
- (id)initWithString:(id)fp8 attributes:(id)fp12 layoutSize:(NSSize)fp16 options:(id)fp24;
- (void)dealloc;
- (QCMD5Sum)providerMD5;
- (id)domainOfDefinition;
- (CGColorSpaceRef)colorSpace;
- (BOOL)hasAlpha;
- (BOOL)supportsCropping;
- (BOOL)supportsTransformation;
- (BOOL)supportsColorMatching;
- (id)supportedPixelBufferFormatsForManager:(id)fp8;
- (id)createPixelBufferForManager:(id)fp8 withFormat:(id)fp12 transformation:(id)fp16 bounds:(NSRect)fp20 colorSpace:(CGColorSpaceRef)fp36 options:(id)fp40;

@end

@interface QCProvider_CoreText (QCImage)
- (id)createOptimizedProviderWithTransformation:(id)fp8 cropping:(NSRect)fp12;
@end
