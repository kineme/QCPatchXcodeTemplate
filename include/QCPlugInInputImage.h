



@class QCImage, QCImageManager, QCImagePixelBuffer, QCImageTextureBuffer, QCPixelFormat;

@interface QCPlugInInputImage : NSObject <QCPlugInInputImageSource>
{
	QCImage *_image;	// 4 = 0x4
	NSDictionary *_defaultOptions;	// 8 = 0x8
	QCImageManager *_imageManager;	// 12 = 0xc
	GLuint _textureTarget;	// 16 = 0x10
	NSUInteger _maxTextureSize;	// 20 = 0x14
	QCPixelFormat *_renderingPixelFormat;	// 24 = 0x18
	pthread_mutex_t _mutex;	// 28 = 0x1c
	QCImagePixelBuffer *_pixelBuffer;	// 72 = 0x48
	QCImagePixelBuffer *_pixelBufferCached;	// 76 = 0x4c
	NSRect _pixelBufferBounds;	// 80 = 0x50
	QCImageTextureBuffer *_textureBuffer;	// 96 = 0x60
	QCImageTextureBuffer *_textureBufferCached;	// 100 = 0x64
	NSRect _textureBufferBounds;	// 104 = 0x68
	CDAnonymousStruct12 _savedState;	// 120 = 0x78
}

- (id)initWithImage:(id)fp8 context:(id)fp12;
- (void)dealloc;
- (id)image;
- (NSRect)imageBounds;
- (CGColorSpaceRef)imageColorSpace;
- (BOOL)shouldColorMatch;
- (BOOL)lockBufferRepresentationWithPixelFormat:(id)fp8 colorSpace:(CGColorSpaceRef)fp12 forBounds:(NSRect)fp16;
- (NSUInteger)bufferPixelsWide;
- (NSUInteger)bufferPixelsHigh;
- (id)bufferPixelFormat;
- (CGColorSpaceRef)bufferColorSpace;
- (const void *)bufferBaseAddress;
- (NSUInteger)bufferBytesPerRow;
- (void)unlockBufferRepresentation;
- (BOOL)lockTextureRepresentationWithColorSpace:(CGColorSpaceRef)fp8 forBounds:(NSRect)fp12;
- (NSUInteger)texturePixelsWide;
- (NSUInteger)texturePixelsHigh;
- (GLuint)textureTarget;
- (GLuint)textureName;
- (CGColorSpaceRef)textureColorSpace;
- (BOOL)textureFlipped;
- (const float *)textureMatrix;
- (void)bindTextureRepresentationToCGLContext:(CGLContextObj)fp8 textureUnit:(GLuint)fp12 normalizeCoordinates:(BOOL)fp16;
- (void)unbindTextureRepresentationFromCGLContext:(CGLContextObj)fp8 textureUnit:(GLuint)fp12;
- (void)unlockTextureRepresentation;
- (NSString*)description;

@end
