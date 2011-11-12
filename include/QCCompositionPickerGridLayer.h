

@interface QCCompositionPickerGridLayer : CALayer
{
	id _controller;	// 48 = 0x30
}

- (void)layoutStateDidChange;
- (void)selectCompositionIfNeeded;
- (void)observeValueForKeyPath:(id)fp8 ofObject:(id)fp12 change:(id)fp16 context:(void *)fp20;
- (void)wakeup;
- (void)sleep;
- (id)initWithFrame:(NSRect)fp8 compositions:(id)fp24 controller:(id)fp28;
- (void)finalize;
- (void)dealloc;
- (id)compositionAtIndex:(int)fp8;
- (int)indexOfComposition:(id)fp8;
- (id)cellForComposition:(id)fp8;
- (int)compositionCount;
- (void)runActionForKey:(id)fp8 object:(id)fp12 arguments:(id)fp16;
@end
