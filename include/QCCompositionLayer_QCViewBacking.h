
#import "QCCompositionLayer.h"

@interface QCCompositionLayer_QCViewBacking : QCCompositionLayer
{
	double _beginTimeOffset;	// 56 = 0x38
	double _pauseTime;	// 64 = 0x40
	CGColorRef _clearColor;	// 72 = 0x48
	struct {
		// FIXME: this struct isn't parsed by objcdump, so we're not sure of 64bit's formation
		unsigned int clearFlag:1;
		unsigned int paused:1;
		unsigned int stopped:1;
	} _renderState;	// 76 = 0x4c
}

- (void)_pauseRendering;
- (void)_resumeRendering;
- (BOOL)_isPausedRendering;
- (void)_stopRendering;
- (BOOL)_startRendering;
- (BOOL)_isRendering;
- (void)_setEraseColor:(CGColorRef)fp8;
- (void)_erase;
- (double)_beginTimeOffset;
- (BOOL)canDrawInCGLContext:(CGLContextObj)fp8 pixelFormat:(CGLPixelFormatObj)fp12 forLayerTime:(double)fp16 displayTime:(const CVTimeStamp *)fp24;
- (void)drawInCGLContext:(CGLContextObj)fp8 pixelFormat:(CGLPixelFormatObj)fp12 forLayerTime:(double)fp16 displayTime:(const CVTimeStamp *)fp24;

@end
