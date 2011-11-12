/* compabibilities:
 *   * QCPixelFormatCompatibility_CGImage
 *   * QCPixelFormatCompatibility_CGBitmapContext
 *   * QCPixelFormatCompatibility_CIImage
 *   * QCPixelFormatCompatibility_OpenGL
 *   * QCPixelFormatCompatibility_QuickTime
 *   * QCPixelFormatCompatibility_CoreVideo
 */

@interface QCPixelFormat_IndexedGray8 : QCPixelFormat
{
	NSArray *_compatibilities;	// 20 = 0x14
}

- (NSString*)name;	// @"IndexedGray8"
- (NSArray*)compatibilities; // see above
- (NSString*)description;	// @"Internal_Indexed_Gray8"
- (void)dealloc;
- (int)pixelColorModel;	// 1
- (int)pixelType;	// 1
- (int)pixelAlpha;	// 1
- (NSUInteger)pixelBlockWidth;	// 1
- (NSUInteger)pixelBlockHeight;	// 1
- (NSUInteger)bitsPerBlock;	// 0x8 = 8
- (BOOL)isSupportedOnContext:(id)fp8;
- (unsigned int)QTPixelFormat;	// 0x28 = 40 (? not a 4-char constant?)
- (GLuint)openGLInternalFormat;	// 0x804b = GL_INTENSITY8
- (GLuint)openGLPixelFormat;	// 0x1909 = GL_LUMINANCE
- (GLuint)openGLPixelType;	// 0x1401 = GL_UNSIGNED_BYTE
- (CIFormat)CIFormat;	// non-nil (eip relative, need to trace)
#if MAC_OS_X_VERSION_MAX_ALLOWED >= 1060
- (cl_image_format)CLFormat;
#endif
- (NSUInteger)CGBitsPerComponent;	// 8
- (NSUInteger)CGBitsPerPixel;	// 8
- (CGBitmapInfo)CGBitmapInfo;	// 0
@end
