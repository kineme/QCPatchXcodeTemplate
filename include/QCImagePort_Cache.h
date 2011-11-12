

@class QCImage, QCImageTextureBuffer, QCPatch;

@interface QCImagePort_Cache : NSObject
{
	QCImage *_image;	// 4 = 0x4
	QCImageTextureBuffer *_texture;	// 8 = 0x8
	QCMD5Sum _textureProviderMD5;	// 12 = 0xc
	NSRect _textureBounds;	// 28 = 0x1c
	NSAffineTransform *_textureTransformation;	// 44 = 0x2c
	CDAnonymousStruct12 _savedState;	// 48 = 0x30
	QCPatch *_patch;	// 72 = 0x48
}

- (id)initWithPatch:(id)fp8;
- (void)updateWithImage:(id)fp8;
- (id)image;
- (void)clearTexture;
- (void)setOnOpenGLContext:(id)fp8 unit:(GLuint)fp12 withBounds:(NSRect)fp16 transformation:(id)fp32 target:(GLuint)fp36 mipmappingLevels:(NSUInteger)fp40 matrix:(CGFloat *)fp44;
- (void)unsetOnOpenGLContext:(id)fp8 unit:(GLuint)fp12;

@end

@interface QCImagePort_Cache (Private)
- (id)_texture;
@end
