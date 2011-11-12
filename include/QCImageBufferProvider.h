
#import "QCImageProvider.h"

@class QCImageBuffer, QCRegion;

@interface QCImageBufferProvider : QCImageProvider
{
	QCImageBuffer *_buffer;	// 24 = 0x18
	QCRegion *_domainOfDefinition;	// 28 = 0x1c
	void *_unused2[4];	// 32 = 0x20
}

+ (BOOL)isCompatibleWithSource:(id)fp8 sourceMD5:(QCMD5Sum *)fp12;
+ (id)createProviderWithSource:(id)fp8 options:(id)fp12;
- (id)initWithQCImageBuffer:(id)fp8 options:(id)fp12;
- (void)dealloc;
- (id)imageBuffer;
- (id)sourceRepresentationType;
- (id)sourceRepresentation;
- (id)domainOfDefinition;
- (CGColorSpaceRef)colorSpace;
- (BOOL)hasAlpha;
- (id)nativePixelFormat;
- (GLuint)nativeTextureTarget;
- (BOOL)supportsCropping;
- (id)supportedPixelBufferFormatsForManager:(id)fp8;
- (id)createPixelBufferForManager:(id)fp8 withFormat:(id)fp12 transformation:(id)fp16 bounds:(NSRect)fp20 colorSpace:(CGColorSpaceRef)fp36 options:(id)fp40;
- (id)supportedTextureBufferTargetsForManager:(id)fp8;
- (id)supportedTextureBufferFormatsForManager:(id)fp8;
- (id)createTextureBufferForManager:(id)fp8 withFormat:(id)fp12 target:(GLuint)fp16 transformation:(id)fp20 bounds:(NSRect)fp24 colorSpace:(CGColorSpaceRef)fp40 options:(id)fp44;

@end
