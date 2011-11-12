#import <QCGraphicsContext.h>
#import <QCCGLContext.h>

@interface QCOpenGLContext : QCGraphicsContext
{
    QCCGLContext *_glContext;
    float _fieldOfView;
    BOOL _resetMatrices;
    BOOL _flipped;
    BOOL _mainThread;
    NSString *_outputImageKey;
    QCCGLContext *_ignoredContext;
    void *_unused3[4];
}

+ (Class)renderStateClass;
+ (BOOL)isMultiThreaded;
+ (void)updateMultiThreaded;
+ (id)_providerTransformationForImage:(id)fp8 inBounds:(NSRect)fp12 toTextureWithTarget:(unsigned int)fp28 maxSize:(unsigned int)fp32 outBounds:(NSRect *)fp36;
- (id)initWithOptions:(id)fp8;
- (void)_finishInitialization;
- (id)initWithOptions:(id)fp8 contextAttributes:(const int *)fp12;
- (id)initWithCGLContext:(struct _CGLContextObject *)fp8 pixelFormat:(struct _CGLPixelFormatObject *)fp12 options:(id)fp16;
- (id)initWithOpenGLContext:(id)fp8 options:(id)fp12;
- (id)initWithImageManager:(id)fp8 openGLContext:(id)fp12 options:(id)fp16;
- (id)initWithImageManager:(id)fp8 options:(id)fp12;
- (void)dealloc;
- (BOOL)_mainThread;
- (void)setOpenGLContext:(id)fp8;
- (id)openGLContext;
- (struct _CGLContextObject *)CGLContextObj;
- (struct _CGLPixelFormatObject *)CGLPixelFormatObj;
- (id)CIContext;
- (id)initWithCGLContextObj:(struct _CGLContextObject *)fp8 pixelFormat:(struct _CGLPixelFormatObject *)fp12 options:(id)fp16;
- (void)willDestroyCGLContext;
- (void)setOutputImageKey:(id)fp8;
- (id)outputImageKey;
- (void)setFlipped:(BOOL)fp8;
- (BOOL)isFlipped;
- (void)setResetMatrices:(BOOL)fp8;
- (BOOL)resetMatrices;
- (void)setFieldOfView:(float)fp8;
- (float)fieldOfView;
- (void)invalidate;
- (void)setColorSpace:(struct CGColorSpace *)fp8;
- (void)setFrame:(NSRect)fp8;
- (BOOL)startRenderingPatch:(id)fp8 options:(id)fp12;
- (void)pauseRenderingPatch:(id)fp8;
- (BOOL)renderPatch:(id)fp8 time:(double)fp12 arguments:(id)fp20;
- (void)resumeRenderingPatch:(id)fp8;
- (void)stopRenderingPatch:(id)fp8;
- (BOOL)willPushRenderState:(id)fp8;
- (void)didPushRenderState:(id)fp8;
- (void)didPopRenderState:(id)fp8;

@end

@interface QCOpenGLContext (NSOpenGLContext)
- (id)initWithNSOpenGLContext:(id)fp8 format:(id)fp12 options:(id)fp16;
@end

@interface QCOpenGLContext (FCPImageExtensions)
+ (Class)imagePortClass;
- (id)createPixelImageWithFormat:(int)fp8 baseAddress:(const void *)fp12 bytesPerRow:(unsigned int)fp16 releaseCallback:(void *)fp20 userInfo:
(void *)fp24 pixelsWide:(unsigned int)fp28 pixelsHigh:(unsigned int)fp32 flipped:(BOOL)fp36;
- (id)createRenderTextureImageWithFormat:(int)fp8 target:(unsigned int)fp12 pixelsWide:(unsigned int)fp16 pixelsHigh:(unsigned int)fp20 flipped:(BOOL)fp24;
- (struct _CGLContextObject *)beginRenderTextureImage:(id)fp8;
- (BOOL)endRenderTextureImage:(id)fp8;
- (id)recycleRenderTextureImage:(id)fp8;
- (int)formatFromImage:(id)fp8;
- (unsigned int)pixelsWideFromImage:(id)fp8;
- (unsigned int)pixelsHighFromImage:(id)fp8;
- (BOOL)copyPixelsFromImage:(id)fp8 toBaseAddress:(void *)fp12 withBytesPerRow:(unsigned int)fp16;
- (BOOL)getPixelsFromImage:(id)fp8 outBaseAddress:(const void **)fp12 outBytesPerRow:(unsigned int *)fp16;
- (BOOL)textureFromImage:(id)fp8 outName:(unsigned int *)fp12 outFlipped:(char *)fp16;
@end

