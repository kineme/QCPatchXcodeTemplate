@interface QCFullScreenWindow : NSWindow
{
	CGDirectDisplayID _displayID;	// 132 = 0x84
}

- (id)initWithScreen:(id)fp8;
- (CGDirectDisplayID)displayID;
- (BOOL)canBecomeMainWindow;
- (BOOL)canBecomeKeyWindow;
- (void)sendEvent:(NSEvent*)event;

@end
