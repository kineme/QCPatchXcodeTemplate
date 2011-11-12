@interface GFTooltipWindow : NSPanel
+ (id)sharedWindow;
- (id)init;
- (void)setContentView:(NSView*)theView;
- (void)showAtPoint:(NSPoint)point;
- (void)hide;
@end
