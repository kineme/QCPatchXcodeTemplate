#import "QCImageProvider.h"

@class QCRegion;

@interface QCProvider_MeshKit : QCImageProvider
{
	struct __C3DImage *_image;	// 24 = 0x18
	struct __C3DTextureSampler *_sampler;	// 28 = 0x1c
	CGColorSpaceRef _colorSpace;	// 32 = 0x20
	CGSize _size;	// 36 = 0x24
	QCRegion *_domainOfDefinition;	// 44 = 0x2c
	NSArray *_pixelFormats;	// 48 = 0x30
	NSArray *_targets;	// 52 = 0x34
}

+ (BOOL)isCompatibleWithSource:(id)fp8 sourceMD5:(QCMD5Sum *)fp12;
+ (id)createProviderWithSource:(id)fp8 options:(id)fp12;
- (id)initWithC3DImage:(struct __C3DImage *)fp8 options:(id)fp12;
- (void)finalize;
- (void)dealloc;
- (NSString *)sourceRepresentationType;
- (id)sourceRepresentation;
- (id)domainOfDefinition;
- (CGColorSpaceRef)colorSpace;
- (id)nativePixelFormat;
- (BOOL)hasAlpha;
- (id)supportedPixelBufferFormatsForManager:(id)fp8;
- (id)createPixelBufferForManager:(id)fp8 withFormat:(id)fp12 transformation:(id)fp16 bounds:(NSRect)fp20 colorSpace:(CGColorSpaceRef)fp36 options:(id)fp40;
- (GLuint)nativeTextureTarget;
- (id)supportedTextureBufferTargetsForManager:(id)fp8;
- (id)supportedTextureBufferFormatsForManager:(id)fp8;
- (id)createTextureBufferForManager:(id)fp8 withFormat:(id)fp12 target:(GLuint)fp16 transformation:(id)fp20 bounds:(NSRect)fp24 colorSpace:(CGColorSpaceRef)fp40 options:(id)fp44;

@end
