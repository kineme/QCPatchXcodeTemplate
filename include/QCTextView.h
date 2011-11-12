@interface QCTextView : NSTextView
+ (id)sharedInstance;
- (void)_windowDidResignKeyNotification:(NSNotification*)notification;
- (void)keyDown:(NSEvent*)event;
- (BOOL)validateMenuItem:(NSMenuItem*)menuItem;
- (BOOL)performKeyEquivalent:(NSEvent*)key;
@end
