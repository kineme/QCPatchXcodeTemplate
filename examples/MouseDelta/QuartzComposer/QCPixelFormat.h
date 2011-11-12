@interface QCPixelFormat : NSObject
{
    void *_unused[4];
}

+ (id)allocWithZone:(NSZone *)fp8;
+ (void)initialize;
- (id)name;
- (id)compatibilities;
- (int)pixelColorModel;
- (int)pixelType;
- (int)pixelAlpha;
- (unsigned int)pixelBlockWidth;
- (unsigned int)pixelBlockHeight;
- (unsigned int)bitsPerBlock;
- (unsigned long)QTPixelFormat;
- (unsigned int)openGLInternalFormat;
- (unsigned int)openGLPixelFormat;
- (unsigned int)openGLPixelType;
- (int)CIFormat;
- (unsigned long)CGBitsPerComponent;
- (unsigned long)CGBitsPerPixel;
- (unsigned int)CGBitmapInfo;
- (struct CGColorSpace *)defaultColorSpace;
- (BOOL)isValidColorSpace:(struct CGColorSpace *)fp8;
- (BOOL)isSupportedOnContext:(id)fp8;
- (id)description;

@end
