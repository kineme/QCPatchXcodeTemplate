
#import "QCCompositionLayer.h"

@interface QCCompositionCellLayer : QCCompositionLayer
{
	double _pausedTime;	// 56 = 0x38
	double _delayTime;	// 64 = 0x40
	BOOL _paused;	// 72 = 0x48
	BOOL _wasAsynchronous;	// 73 = 0x49
	id _controller;	// 76 = 0x4c
	NSMutableSet *_updatedKeys;	// 80 = 0x50
	NSMutableDictionary *_cachedDefaultInputParameters;	// 84 = 0x54
	NSMutableDictionary *_updatedCompositionValues;	// 88 = 0x58
	float _expectedFrameRate;	// 92 = 0x5c
}

+ (BOOL)automaticRedisplay;
+ (BOOL)implicitParameterAnimations;
+ (BOOL)shouldRenderOnBackgroundThread;
+ (id)defaultRenderingOptions;
- (void)wakeup;
- (void)sleep;
- (void)invalidate;
- (BOOL)_needsDisplay;
- (void)addKeyToBeUpdated:(id)fp8;
- (void)addKeysToBeUpdated:(id)fp8;
- (void)observeValueForKeyPath:(id)fp8 ofObject:(id)fp12 change:(id)fp16 context:(void *)fp20;
- (id)initWithComposition:(id)fp8 controller:(id)fp12;
- (void)pauseAnimation;
- (void)resumeAnimation;
- (void)_setValue:(id)fp8 forInputkey:(id)fp12 forPort:(id)fp16;
- (void)updatePatchWithDefaultValues;
- (void)setUpdatedCompositionValue:(id)fp8 forKey:(id)fp12;
- (double)_timeForTime:(double)fp8;
- (BOOL)needsRender:(double)fp8 arguments:(id)fp16;
- (BOOL)renderAtTime:(double)fp8 arguments:(id)fp16;
- (void)setMaximumFrameRate:(float)fp8;

@end
