/* compatabilities:
 *   * QCPixelFormatCompatibility_QuickTime
 *   * QCPixelFormatCompatibility_CoreVideo
 *   (NOT OpenGL)
 */
@interface QCPixelFormat_422YpCbCr8_709 : QCPixelFormat
{
	NSArray *_compatibilities;	// 20 = 0x14
}

- (NSString*)name;	// @"422YpCbCr8_709"
- (NSArray*)compatibilities; // see above
- (NSString*)description; // @"Internal_422YpCbCr8_709"
- (void)dealloc;
- (int)pixelColorModel;	// 2
- (int)pixelType;	// 1
- (int)pixelAlpha;	// 1
- (NSUInteger)pixelBlockWidth;	// 2
- (NSUInteger)pixelBlockHeight;	// 1
- (NSUInteger)bitsPerBlock;	// 0x20 = 32
- (BOOL)isSupportedOnContext:(id)fp8;
- (unsigned int)QTPixelFormat; // 0x32767579 = 'yuv2'
- (GLuint)openGLInternalFormat;	// 0
- (GLuint)openGLPixelFormat;	// 0
- (GLuint)openGLPixelType;	// 0
- (CIFormat)CIFormat;	// 0 (none?)
- (NSUInteger)CGBitsPerComponent;	// 0
- (NSUInteger)CGBitsPerPixel;	// 0
- (CGBitmapInfo)CGBitmapInfo;	// 0
#if MAC_OS_X_VERSION_MAX_ALLOWED >= 1060
- (cl_image_format)CLFormat;
#endif

@end
