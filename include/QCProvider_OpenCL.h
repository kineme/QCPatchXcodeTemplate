#import "QCImageProvider.h"

@class QCRegion, QCStream;

@interface QCProvider_OpenCL : QCImageProvider
{
	QCStream *_stream;	// 24 = 0x18
	CGColorSpaceRef _colorSpace;	// 28 = 0x1c
	CGSize _size;	// 32 = 0x20
	QCRegion *_domainOfDefinition;	// 40 = 0x28
	NSArray *_pixelFormats;	// 44 = 0x2c
	BOOL _isImage;	// 48 = 0x30
	BOOL _textureBacking;	// 49 = 0x31
}

+ (BOOL)isCompatibleWithSource:(id)fp8 sourceMD5:(QCMD5Sum *)fp12;
+ (id)createProviderWithSource:(id)fp8 options:(id)fp12;
- (id)initWithQCStream:(id)fp8 options:(id)fp12;
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
- (id)supportedTextureBufferTargetsForManager:(id)fp8;
- (id)supportedTextureBufferFormatsForManager:(id)fp8;
- (id)createTextureBufferForManager:(id)fp8 withFormat:(id)fp12 target:(GLuint)fp16 transformation:(id)fp20 bounds:(NSRect)fp24 colorSpace:(CGColorSpaceRef)fp40 options:(id)fp44;
@end
