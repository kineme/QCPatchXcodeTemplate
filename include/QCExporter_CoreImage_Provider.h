

@class QCImageManager, QCPixelFormat;

@interface QCExporter_CoreImage_Provider : NSObject
{
	id <QCImageProvider> _provider;	// 4 = 0x4
	QCImageManager *_manager;	// 8 = 0x8
	QCPixelFormat *_format;	// 12 = 0xc
	NSAffineTransform *_transformation;	// 16 = 0x10
	NSRect _bounds;	// 20 = 0x14
	CGColorSpaceRef _colorSpace;	// 36 = 0x24
	NSDictionary *_options;	// 40 = 0x28
}

- (id)initWithProvider:(id)fp8 imageManager:(id)fp12 pixelFormat:(id)fp16 transformation:(id)fp20 bounds:(NSRect)fp24 colorSpace:(CGColorSpaceRef)fp40 options:(id)fp44;
- (void)finalize;
- (void)dealloc;
- (void)provideImageData:(void *)fp8 bytesPerRow:(NSUInteger)fp12 origin:(NSUInteger)fp16:(NSUInteger)fp20 size:(NSUInteger)fp24:(NSUInteger)fp28 userInfo:(id)fp32;
- (GLuint)provideImageTexture:(const struct CIImageProviderTextureInfoStruct *)fp8 bounds:(CGRect *)fp12 userInfo:(id)fp16;
- (void)deleteImageTexture:(const struct CIImageProviderTextureInfoStruct *)fp8 name:(GLuint)fp12 userInfo:(id)fp16;

@end
