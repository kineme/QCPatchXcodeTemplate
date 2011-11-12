@interface QCOpenGLPort_Image : QCImagePort <QCOpenGLPort>
{
	QCImagePort_Cache *_texturePort;	// 160 = 0xa0
	void *_unused6[4];	// 164 = 0xa4
}

- (id)initWithNode:(GFNode*)node arguments:(NSDictionary*)args;
- (void)dealloc;
- (void)setRawValue:(id)fp8;
- (void)setOnOpenGLContext:(QCOpenGLContext*)context;	// defaults to GL_TEXTURE0
- (void)setOnOpenGLContext:(QCOpenGLContext*)context unit:(GLuint)textureUnit;
- (void)setOnOpenGLContext:(QCOpenGLContext*)context unit:(GLuint)textureUnit fromBounds:(NSRect)bounds withTarget:(GLuint)textureTarget mipmappingLevels:(NSUInteger)mipLevels matrix:(CGFloat *)matrix;
- (void)setOnOpenGLContext:(QCOpenGLContext*)context unit:(GLuint)textureUnit withBounds:(NSRect)bounds transformation:(id)transformation target:(GLuint)textureTarget mipmappingLevels:(NSUInteger)mipLevels matrix:(CGFloat *)matrix;
- (void)unsetOnOpenGLContext:(QCOpenGLContext*)context;	// defaults to GL_TEXTURE0
- (void)unsetOnOpenGLContext:(QCOpenGLContext*)context unit:(GLuint)textureUnit;
- (void)_clearTexture;
@end

@interface QCOpenGLPort_Image (Tooltip)
- (NSString*)tooltipString;
@end
