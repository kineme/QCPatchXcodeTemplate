/* compatabilities:
 *   * QCPixelFormatCompatibility_QuickTime
 *   * QCPixelFormatCompatibility_CoreVideo
 *   * QCPixelFormatCompatibility_OpenGL
 */
@interface QCPixelFormat_422YpCbCr8_601 : QCPixelFormat
{
	NSArray *_compatibilities;	// 20 = 0x14
}

- (NSString*)name;	// @"422YpCbCr8_601"
- (NSArray*)compatibilities; // see above
- (NSString*)description; // @"Internal_422YpCbCr8_601"
- (void)dealloc;
- (int)pixelColorModel;	// 2
- (int)pixelType;	// 1
- (int)pixelAlpha;	// 1
- (NSUInteger)pixelBlockWidth;	// 2
- (NSUInteger)pixelBlockHeight;	// 1
- (NSUInteger)bitsPerBlock;	// 0x20 = 32
- (BOOL)isSupportedOnContext:(id)fp8;
- (unsigned int)QTPixelFormat;	// 0x32767579 = 'yuv2'
- (GLuint)openGLInternalFormat;	// 0x1907 = GL_RGB
- (GLuint)openGLPixelFormat; // 0x85b9 = GL_YCBCR_422_APPLE
- (GLuint)openGLPixelType;	// 0x85ba = GL_UNSIGNED_SHORT_8_8_APPLE
- (CIFormat)CIFormat; // 0 = none (?)
- (NSUInteger)CGBitsPerComponent;	// 0
- (NSUInteger)CGBitsPerPixel;	// 0
- (CGBitmapInfo)CGBitmapInfo;	// 0
#if MAC_OS_X_VERSION_MAX_ALLOWED >= 1060
- (cl_image_format)CLFormat;
#endif

@end
