@class QCView;

@interface QCRenderView : NSView
{
	QCView *_view;	// 80 = 0x50
}

- (void)_setQCView:(QCView*)aQCView;
- (QCView*)_QCView;
- (void)drawRect:(NSRect)rect ;
- (BOOL)acceptsFirstResponder;
- (void)keyDown:(NSEvent *)theEvent;
- (void)keyUp:(NSEvent *)theEvent;
- (void)flagsChanged:(NSEvent *)theEvent;
- (void)scrollWheel:(NSEvent *)theEvent;
- (void)mouseDown:(NSEvent *)theEvent;
- (void)mouseMoved:(NSEvent *)theEvent;
- (void)mouseDragged:(NSEvent *)theEvent;
- (void)mouseUp:(NSEvent *)theEvent;
- (void)rightMouseDown:(NSEvent *)theEvent;
- (void)rightMouseDragged:(NSEvent *)theEvent;
- (void)rightMouseUp:(NSEvent *)theEvent;
- (void)otherMouseDown:(NSEvent *)theEvent;
- (void)otherMouseDragged:(NSEvent *)theEvent;
- (void)otherMouseUp:(NSEvent *)theEvent;
- (void)magnifyWithEvent:(NSEvent *)theEvent;
- (void)rotateWithEvent:(NSEvent *)theEvent;
- (void)swipeWithEvent:(NSEvent *)theEvent;
- (void)beginGestureWithEvent:(NSEvent *)theEvent;
- (void)endGestureWithEvent:(NSEvent *)theEvent;
- (void)tabletPoint:(NSEvent *)theEvent;
- (void)tabletProximity:(NSEvent *)theEvent;
- (void)copy:(id)sender;
- (void)selectAll:(id)sender;
@end
