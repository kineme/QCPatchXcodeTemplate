@interface QCPixelFormat_I16 : QCPixelFormat
{
	NSArray *_compatibilities;	// 20 = 0x14
}

- (NSString*)name;
- (NSArray*)compatibilities;
- (NSString*)description;
- (void)dealloc;
- (int)pixelColorModel;
- (int)pixelType;
- (int)pixelAlpha;
- (NSUInteger)pixelBlockWidth;
- (NSUInteger)pixelBlockHeight;
- (NSUInteger)bitsPerBlock;
- (BOOL)isSupportedOnContext:(id)fp8;
- (unsigned int)QTPixelFormat;
- (GLuint)openGLInternalFormat;
- (GLuint)openGLPixelFormat;
- (GLuint)openGLPixelType;
- (CIFormat)CIFormat;
#if MAC_OS_X_VERSION_MAX_ALLOWED >= 1060
- (cl_image_format)CLFormat;
#endif
- (NSUInteger)CGBitsPerComponent;
- (NSUInteger)CGBitsPerPixel;
- (CGBitmapInfo)CGBitmapInfo;
@end
