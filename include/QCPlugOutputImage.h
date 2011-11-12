
#import "QCImageProvider.h"

@class QCRegion;

@interface QCPlugOutputImage : QCImageProvider
{
	id <QCPlugInOutputImageProvider> _image;	// 24 = 0x18
	QCRegion *_region;	// 28 = 0x1c
	CGColorSpaceRef _colorspace;	// 32 = 0x20
	NSMutableArray *_bufferFormats;	// 36 = 0x24
	NSMutableArray *_textureFormats;	// 40 = 0x28
}

+ (BOOL)isCompatibleWithSource:(id)fp8 sourceMD5:(QCMD5Sum *)fp12;
+ (id)createProviderWithSource:(id)fp8 options:(id)fp12;
- (id)initWithImage:(id)fp8;
- (void)finalize;
- (void)dealloc;
- (id)domainOfDefinition;
- (CGColorSpaceRef)colorSpace;
- (BOOL)hasAlpha;
- (BOOL)supportsCropping;
- (id)supportedPixelBufferFormatsForManager:(id)fp8;
- (id)createPixelBufferForManager:(id)fp8 withFormat:(id)fp12 transformation:(id)fp16 bounds:(NSRect)fp20 colorSpace:(CGColorSpaceRef)fp36 options:(id)fp40;
- (id)supportedTextureBufferTargetsForManager:(id)fp8;
- (id)supportedTextureBufferFormatsForManager:(id)fp8;
- (id)createTextureBufferForManager:(id)fp8 withFormat:(id)fp12 target:(GLuint)fp16 transformation:(id)fp20 bounds:(NSRect)fp24 colorSpace:(CGColorSpaceRef)fp40 options:(id)fp44;

@end
