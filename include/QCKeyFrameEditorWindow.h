

@interface QCKeyFrameEditorWindow : NSWindow
- (id)initWithContentRect:(NSRect)fp8 styleMask:(NSUInteger)fp24 backing:(NSUInteger)fp28 defer:(BOOL)fp32;
- (void)setHidesOnDeactivate:(BOOL)fp8;
- (NSSize)size;
- (void)setSize:(NSSize)fp8;
- (BOOL)canBecomeKeyWindow;
- (void)sendEvent:(id)fp8;
@end
