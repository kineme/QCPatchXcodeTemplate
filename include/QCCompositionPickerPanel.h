extern NSString * const QCCompositionPickerPanelDidSelectCompositionNotification;
extern NSString * const QCCompositionPickerPanelWillSelectCompositionNotification;

@interface QCCompositionPickerPanel : NSPanel
{
	void *_private;	// 132 = 0x84
}

+ (id)allocWithZone:(NSZone *)zone;
+ (id)sharedCompositionPickerPanel;
- (id)compositionPickerView;
- (void)_willSelectComposition:(id)fp8;
- (void)_didSelectComposition:(id)fp8;
- (id)initWithContentRect:(NSRect)fp8;
- (BOOL)canBecomeKeyWindow;

@end
