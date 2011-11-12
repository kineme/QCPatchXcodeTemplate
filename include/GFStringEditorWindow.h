@interface GFStringEditorWindow : NSWindow
- (id)init;
- (NSSize)size;
- (void)setSize:(NSSize)size;
- (BOOL)canBecomeKeyWindow;
- (void)sendEvent:(NSEvent*)event;
@end
