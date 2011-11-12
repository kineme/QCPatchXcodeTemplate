@interface QCDashboardButton : NSButton
{
	NSInteger _direction;	// 92 = 0x5c
	NSMutableDictionary *_attr;	// 96 = 0x60
	NSInteger _trackingRectTag;	// 100 = 0x64
	BOOL _active;	// 104 = 0x68
	BOOL _displayCapsule;	// 105 = 0x69
	NSRect _activeRect;	// 108 = 0x6c
	NSString *_string;	// 124 = 0x7c
	id _controller;	// 128 = 0x80
}

- (id)initWithFrame:(NSRect)FrameRect andController:(id)fp24;
- (void)dealloc;
- (BOOL)isOpaque;
- (void)drawRect:(NSRect)rect;
- (void)setDirection:(int)fp8;
- (void)setIndex:(NSUInteger)fp8 count:(NSUInteger)fp12;
- (void)mouseUp:(NSEvent*)theEvent;
- (void)mouseDown:(NSEvent*)theEvent;
- (void)viewDidMoveToWindow;
- (void)mouseEntered:(NSEvent*)theEvent;
- (void)mouseExited:(NSEvent*)theEvent;
- (BOOL)mouseDownCanMoveWindow;

@end

@interface QCDashboardButton (Private)
- (id)leftArrowPathInRect:(NSRect)fp8;
- (id)rightArrowPathInRect:(NSRect)fp8;
- (id)capsulePathInRect:(NSRect)fp8;
- (NSSize)sizeForString;
- (void)updateTrackingRect;
- (void)drawHoverTarget;
- (void)drawCapsule;
- (NSRect)capsuleRectForDirection;
- (NSRect)hoverRectForDirection;
- (BOOL)checkPoint:(NSPoint)fp8;
@end
