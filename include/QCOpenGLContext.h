
#import "QCGraphicsContext.h"

@class QCCGLContext;

@interface QCOpenGLContext : QCGraphicsContext
{
	QCCGLContext *_glContext;	// 152 = 0x98
	float _fieldOfView;	// 156 = 0x9c
	BOOL _resetMatrices;	// 160 = 0xa0
	BOOL _flipped;	// 161 = 0xa1
	BOOL _mainThread;	// 162 = 0xa2
	NSString *_outputImageKey;	// 164 = 0xa4
	QCCGLContext *_ignoredContext;	// 168 = 0xa8
	struct _BackgroundInfo *_backgroundInfo;	// 172 = 0xac
	struct _GLMatrices *_matrices;	// 176 = 0xb0
	NSUInteger _flags;	// 180 = 0xb4
	void *_unused3[1];	// 184 = 0xb8
}

+ (Class)renderStateClass;
+ (CGColorSpaceRef)defaultColorSpace;
+ (BOOL)isMultiThreaded;
+ (void)updateMultiThreaded;
+ (id)_providerTransformationForImage:(id)fp8 inBounds:(NSRect)fp12 toTextureWithTarget:(GLuint)fp28 maxSize:(NSUInteger)fp32 outBounds:(NSRect *)fp36;
- (id)initWithOptions:(id)fp8;
- (void)_finishInitialization;
- (id)initWithOptions:(id)fp8 contextAttributes:(const int *)fp12;
- (id)initWithCGLContext:(CGLContextObj)fp8 pixelFormat:(CGLPixelFormatObj)fp12 options:(id)fp16;
- (id)initWithOpenGLContext:(id)fp8 options:(id)fp12;
- (id)initWithImageManager:(id)fp8 openGLContext:(id)fp12 options:(id)fp16;
- (id)initWithImageManager:(id)fp8 options:(id)fp12;
- (void)finalize;
- (void)dealloc;
- (void)setOpenGLContext:(QCCGLContext *)context;
- (QCCGLContext *)openGLContext;
- (BOOL)_mainThread;
- (CGLContextObj)CGLContextObj;
- (CGLPixelFormatObj)CGLPixelFormatObj;
- (CIContext*)CIContext;
- (struct __C3DEngineContext *)C3DContext;
- (id)initWithCGLContextObj:(CGLContextObj)fp8 pixelFormat:(CGLPixelFormatObj)fp12 options:(id)fp16;
- (void)willDestroyCGLContext;
- (void)setOutputImageKey:(NSString*)outputImageKey;
- (NSString*)outputImageKey;
- (void)setFlipped:(BOOL)flipped;
- (BOOL)isFlipped;
- (void)setResetMatrices:(BOOL)resetMatrices;
- (BOOL)resetMatrices;
- (void)setFieldOfView:(float)fov;
- (float)fieldOfView;
- (BOOL)scissorTest;
- (void)setScissorTest:(BOOL)scissorTest;
- (void)setEraseBackground:(int)fp8;
- (int)eraseBackground;
- (void)setBackgroundColor:(NSColor*)color checkerboardSize:(NSUInteger)size checkerboardWidth:(float)width height:(float)height inLiveResize:(BOOL)inLiveResize;
- (void)invalidate;
- (void)setColorSpace:(CGColorSpaceRef)fp8;
- (BOOL)startRenderingPatch:(id)fp8 options:(id)fp12;
- (void)pauseRenderingPatch:(id)fp8;
- (void)_renderMesh:(id)fp8 arguments:(id)fp12;
- (double)nextExecutionTimeForPatch:(id)fp8 time:(double)time arguments:(NSDictionary*)args;
- (BOOL)renderPatch:(id)fp8 time:(double)time arguments:(NSDictionary*)args;
- (void)resumeRenderingPatch:(id)fp8;
- (void)stopRenderingPatch:(id)fp8;
- (void)_clearGLContext;
- (void)clearGLContext;
- (void)renderBackground:(id)fp8;
- (void)_drawDirtyRect:(id)fp8;
- (BOOL)willPushRenderState:(id)fp8;
- (void)didPushRenderState:(id)fp8;
- (void)willPopRenderState:(id)fp8;
- (void)didPopRenderState:(id)fp8;
@end

@interface QCOpenGLContext (NSOpenGLContext)
- (id)initWithNSOpenGLContext:(id)fp8 format:(id)fp12 options:(id)fp16;
@end
// XXX These methods don't appear in objcdump64... weird? (perhaps they're 32bit only because FCP is 32bit only?)
@interface QCOpenGLContext (FCPImageExtensions)
+ (Class)imagePortClass;
- (id)createPixelImageWithFormat:(int)fp8 baseAddress:(const void *)fp12 bytesPerRow:(unsigned int)fp16 releaseCallback:(void *)fp20 userInfo:(void *)fp24 pixelsWide:(unsigned int)fp28 pixelsHigh:(unsigned int)fp32 flipped:(BOOL)fp36;
- (id)createRenderTextureImageWithFormat:(int)fp8 target:(GLuint)fp12 pixelsWide:(unsigned int)fp16 pixelsHigh:(unsigned int)fp20 flipped:(BOOL)fp24;
- (CGLContextObj *)beginRenderTextureImage:(id)fp8;
- (BOOL)endRenderTextureImage:(id)fp8;
- (id)recycleRenderTextureImage:(id)fp8;
- (int)formatFromImage:(id)fp8;
- (unsigned int)pixelsWideFromImage:(id)fp8;
- (unsigned int)pixelsHighFromImage:(id)fp8;
- (BOOL)copyPixelsFromImage:(id)fp8 toBaseAddress:(void *)fp12 withBytesPerRow:(unsigned int)fp16;
- (BOOL)getPixelsFromImage:(id)fp8 outBaseAddress:(const void **)fp12 outBytesPerRow:(unsigned int *)fp16;
- (BOOL)textureFromImage:(id)fp8 outName:(unsigned int *)fp12 outFlipped:(char *)fp16;
@end
