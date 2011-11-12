

@class QCCompositionPickerController;

@interface QCCompositionPickerLayer : CALayer
{
	QCCompositionPickerController *_controller;	// 48 = 0x30
}

- (void)_setBackgroundColor:(id)fp8;
- (void)_setDrawsBackground:(BOOL)fp8;
- (id)gridWithCompositions:(id)fp8;
- (void)observeValueForKeyPath:(id)fp8 ofObject:(id)fp12 change:(id)fp16 context:(void *)fp20;
- (void)_finishInitializationWithFrame:(CGRect)fp8 andController:(id)fp24;
- (id)initWithFrame:(NSRect)fp8 andController:(id)fp24;
- (void)wakeup;
- (void)sleep;

@end
