@interface QCTimeLineView : QCZoomView
{
	QCTimeLineEditorView *_editorView;	// 120 = 0x78
	QCKeyFrameEditor *_keyFrameEditor;	// 124 = 0x7c
	NSRect _selectionBounds;	// 128 = 0x80
	QCTimeLine *_timeLine;	// 144 = 0x90
	BOOL _trackMouseCoordinates;	// 148 = 0x94
	BOOL _drawDragBoundries;	// 149 = 0x95
	NSMutableArray *_legendComponents;	// 152 = 0x98
	NSColor *_backgroundColor;	// 156 = 0x9c
	NSColor *_disabledAreaColor;	// 160 = 0xa0
	NSColor *_disabledAreaGridLineColor;	// 164 = 0xa4
	NSColor *_curveHullColor;	// 168 = 0xa8
	NSColor *_axisColor;	// 172 = 0xac
	NSColor *_gridLineColor;	// 176 = 0xb0
	NSColor *_gridRulerColor;	// 180 = 0xb4
	NSMutableDictionary *_gridLabelAttributes;	// 184 = 0xb8
	NSMutableDictionary *_mouseCoordsAttributes;	// 188 = 0xbc
	NSNumberFormatter *_mouseCoordsXFormatter;	// 192 = 0xc0
	NSNumberFormatter *_mouseCoordsYFormatter;	// 196 = 0xc4
	NSInteger _newTimeLineIndex;	// 200 = 0xc8
	NSInteger _dragIndex;	// 204 = 0xcc
	NSInteger _dragTimeLineIndex;	// 208 = 0xd0
	int _dragType;	// 212 = 0xd4
}

- (id)initWithFrame:(NSRect)fp8 editorView:(id)fp24;
- (void)dealloc;
- (BOOL)acceptsFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)isOpaque;
- (BOOL)acceptsFirstMouse:(NSEvent*)theEvent;
- (BOOL)canBecomeKeyView;
- (void)drawRect:(NSRect)rect;
- (void)setPatch:(id)fp8;
- (id)patch;
- (BOOL)trackMouseCoordinates;
- (void)setTrackMouseCoordinates:(BOOL)fp8;
- (BOOL)drawDragBoundries;
- (void)setDrawDragBoundries:(BOOL)fp8;
- (BOOL)performKeyEquivalent:(NSEvent*)theEvent;
- (void)keyDown:(NSEvent*)theEvent;
- (void)keyUp:(NSEvent*)theEvent;
- (void)mouseDown:(NSEvent*)theEvent;
- (NSRect)maxBounds;
- (NSRect)selectionBounds;
- (BOOL)allowsNonSquareZooming;
- (CGFloat)minX;
@end

@interface QCTimeLineView (Private)
- (void)_patchStateChanged:(id)fp8;
- (void)_drawTimeLineAtIndex:(NSInteger)fp8 rect:(NSRect)fp12;
- (void)_drawBackground:(NSRect)fp8;
- (void)_drawSelectionArea:(NSRect)fp8;
- (void)_drawLegend;
- (void)_drawMouseCoordinates;
- (void)_drawRulers:(NSRect)fp8;
- (void)_drawDragBoundries;
- (void)_setTimelineColor:(id)fp8;
- (void)_activateTimeLineFromLegend:(id)fp8;
- (void)_setTimelineIdentifier:(id)fp8;
- (void)_setTimelineVisibility:(id)fp8;
- (void)_handleMouseEvent:(id)fp8;
- (void)_setKeyFrameEditor:(id)fp8;
- (CGFloat)_gridStepForAxis:(int)fp8;
- (NSUInteger)_digitsForAxis:(int)fp8 gridStep:(CGFloat)fp12;
- (NSSize)_maxLabelSizeForAxis:(int)fp8 gridStep:(CGFloat)fp12 digits:(NSInteger)fp16 inRect:(NSRect)fp20;
- (NSRect)_boundsWithAllKeyFrames:(BOOL)fp8;
- (NSInteger)_nearestKeyFrameAtX:(double)fp8 andY:(double)fp16 controlType:(int *)fp24 timeLineIndex:(NSInteger *)fp28;
- (void)__zoomToFitAll:(id)fp8;
- (void)__zoomToFitSelection:(id)fp8;
- (BOOL)curveHullsEnabled;
- (void)setCurveHullsEnabled:(BOOL)enableCurveHulls;
- (void)setLegendVisible:(BOOL)legendVisible;
- (BOOL)legendVisible;
- (NSInteger)_offsetSelectedKeyFramesByOffset:(NSPoint)fp8 primaryKeyFrameIndex:(NSInteger)fp16 primaryTimeLineIndex:(NSInteger)fp20;
- (void)_offsetControlPointOfType:(int)fp8 withOffset:(NSPoint)fp12 forKeyFrame:(NSInteger)fp20 inTimeLine:(NSInteger)fp24;
- (id)__deleteKeyFrame:(NSInteger)fp8 timeLine:(NSInteger)fp12 context:(void *)fp16;
- (id)__selectKeyFrame:(NSInteger)fp8 timeLine:(NSInteger)fp12 context:(void *)fp16;
- (id)__unionRect:(NSInteger)fp8 timeLine:(NSInteger)fp12 context:(void *)fp16;
- (void)createNewTimeLine:(id)fp8;
- (void)removeSelectedTimeLine:(id)fp8;
- (BOOL)_keyFramesSelected;
@end
