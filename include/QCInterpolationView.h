@class QCInterpolation;

@interface QCInterpolationView : NSView
{
	NSTextField *timeField;	// 80 = 0x50
	NSTextField *valueField;	// 84 = 0x54
	QCInterpolation *_spline;	// 88 = 0x58
	int _selectedIndex;	// 92 = 0x5c
}

- (id)initWithFrame:(NSRect)frameRect;
- (void)dealloc;
- (void)__stateUpdated:(id)fp8;
- (void)setPatch:(id)fp8;
- (BOOL)acceptsFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)isOpaque;
- (BOOL)acceptsFirstMouse:(NSEvent*)theEvent;
- (BOOL)canBecomeKeyView;
- (void)drawRect:(NSRect)rect;
- (void)updateControls;
- (void)updateControlPoint:(id)fp8;
- (void)deleteBackward:(id)sender;
- (void)moveLeft:(id)sender;
- (void)moveRight:(id)sender;
- (void)moveUp:(id)sender;
- (void)moveDown:(id)sender;
- (void)keyDown:(NSEvent*)theEvent;
- (void)mouseDown:(NSEvent*)theEvent;
- (void)cut:(id)sender;
- (void)copy:(id)sender;
- (void)delete:(id)sender;
- (void)paste:(id)sender;
- (void)selectAll:(id)sender;
- (void)duplicate:(id)sender;
- (BOOL)validateMenuItem:(NSMenuItem*)menuItem;
@end
