@class GFConnection, GFGraph, GFGraphEditorView, GFList, GFNode, GFPort;

extern NSString * const GFGraphViewContentDidChangeNotification;
extern NSString * const GFGraphViewNodeDoubleClickedWithModifiersNotification;
extern NSString * const GFGraphViewSelectionDidChangeNotification;
extern NSString * const GFGraphViewZoomDidChangeNotification;

@interface GFGraphView : NSView
{
	GFGraph *_graph;	// 80 = 0x50
	GFNode *_firstResponder;	// 84 = 0x54
	BOOL _drawsBackground;	// 88 = 0x58
	BOOL _drawsShadows;	// 89 = 0x59
	NSUInteger _gridStep;	// 92 = 0x5c
	NSColor *_backgroundColor;	// 96 = 0x60
	NSColor *_gridColor;	// 100 = 0x64
	double _tooltipDelay;	// 104 = 0x68
	BOOL _spaceDown;	// 112 = 0x70
	NSRect _selectionBounds;	// 116 = 0x74
	GFPort *_connectionPort;	// 132 = 0x84
	NSPoint _connectionStart;	// 136 = 0x88
	NSPoint _connectionEnd;	// 144 = 0x90
	GFConnection *_connection;	// 152 = 0x98
	CFRunLoopTimerRef _tooltipTimer;	// 156 = 0x9c
	BOOL _tooltipPending;	// 160 = 0xa0
	NSRect _tooltipBounds;	// 164 = 0xa4
	GFNode *_tooltipNode;	// 180 = 0xb4
	NSMutableDictionary *_alignment;	// 184 = 0xb8
	GFList *_nodeActorCache;	// 188 = 0xbc
	GFGraphEditorView *_graphEditor;	// 192 = 0xc0
	NSUndoManager *_undoManager;	// 196 = 0xc4
	BOOL _disableValidation;	// 200 = 0xc8
	NSPoint _cachedCenter;	// 204 = 0xcc
	float _cachedZoomFactor;	// 212 = 0xd4
	void *_unused[2];	// 216 = 0xd8
}

- (id)initWithFrame:(NSRect)frameRect;
- (void)finalize;
- (void)dealloc;
- (BOOL)isOpaque;
- (BOOL)isFlipped;
- (BOOL)acceptsFirstMouse:(NSEvent *)theEvent;
- (BOOL)acceptsFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)encodeWithCoder:(NSCoder *)aCoder;
- (id)initWithCoder:(NSCoder *)aDecoder;
- (BOOL)performKeyEquivalent:(NSEvent *)theEvent;
- (void)keyDown:(NSEvent *)theEvent;
- (void)keyUp:(NSEvent *)theEvent;
- (id)menuForEvent:(NSEvent *)theEvent;
- (void)mouseMoved:(NSEvent *)theEvent;
- (void)mouseDown:(NSEvent *)theEvent;
- (void)rightMouseDown:(NSEvent *)theEvent;
- (void)otherMouseDown:(NSEvent *)theEvent;
- (void)scrollWheel:(NSEvent *)theEvent;
- (void)undo:(id)sender;
- (void)redo:(id)sender;
- (BOOL)validateMenuItem:(NSMenuItem*)menuItem;
- (void)copy:(id)sender;
- (void)paste:(id)sender;
- (void)cut:(id)sender;
- (void)duplicate:(id)sender;
- (void)selectAll:(id)sender;
- (NSDragOperation)draggingEntered:(id <NSDraggingInfo>)sender;
- (NSDragOperation)draggingUpdated:(id <NSDraggingInfo>)sender;
- (BOOL)performDragOperation:(id <NSDraggingInfo>)sender;
- (void)drawRect:(NSRect)rect;
- (NSRect)adjustScroll:(NSRect)newVisible;
- (BOOL)autoscroll:(NSEvent *)theEvent;
- (void)print:(id)sender;
- (BOOL)knowsPageRange:(NSRange *)range;
- (NSRect)rectForPage:(NSInteger)page;
- (void)setBoundsOrigin:(NSPoint)fp8;
- (void)setBoundsSize:(NSSize)fp8;
- (void)viewWillMoveToWindow:(id)fp8;
- (void)viewDidMoveToWindow;

@end

@interface GFGraphView (Actions)
- (id)_createSubgraphFromSelection:(id)fp8;
- (void)_editParentGraph:(id)fp8;
- (void)_addNote:(id)fp8;
- (void)_editNote:(id)fp8;
- (void)_setNoteColor:(id)fp8;
- (void)_deleteNote:(id)fp8;
@end

@interface GFGraphView (ItemActions)
- (void)__validatePosition:(id)fp8 context:(void *)fp12;
- (void)__savePosition:(id)fp8 context:(void *)fp12;
- (void)__restorePosition:(id)fp8 context:(void *)fp12;
- (void)__saveSelection:(id)fp8 context:(void *)fp12;
- (void)__restoreSelection:(id)fp8 context:(void *)fp12;
- (void)__addToSelection:(id)fp8 context:(void *)fp12;
- (void)__removeFromSelection:(id)fp8 context:(void *)fp12;
- (void)__unionRect:(id)fp8 context:(void *)fp12;
- (void)__select:(id)fp8 context:(void *)fp12;
- (void)__deselect:(id)fp8 context:(void *)fp12;
- (void)__delete:(id)fp8 context:(void *)fp12;
- (void)__move:(id)fp8 context:(void *)fp12;
- (void)__undoableMove:(id)fp8 context:(void *)fp12;
@end

@interface GFGraphView (LocalNodeActor)
- (NSSize)_sizeForNode:(id)fp8;
- (NSPoint)_pointForPort:(id)fp8 inNode:(id)fp12 bounds:(NSRect)fp16;
- (id)_portForPoint:(NSPoint)fp8 inNode:(id)fp16 bounds:(NSRect)fp20;
- (void)_drawNode:(id)fp8 bounds:(NSRect)fp12;
- (void)_drawSelectionRingWithColor:(id)fp8 width:(CGFloat)fp12 forNode:(id)fp16 bounds:(NSRect)fp20;
- (BOOL)_trackMouse:(id)fp8 inNode:(id)fp12 bounds:(NSRect)fp16;
- (id)_menuForNode:(id)fp8;
- (BOOL)_nodeAcceptsFirstResponder:(id)fp8;
- (BOOL)_nodeBecomesFirstResponder:(id)fp8;
- (BOOL)_nodeResignsFirstResponder:(id)fp8;
- (BOOL)_handleKeyUp:(id)fp8 inNode:(id)fp12;
- (BOOL)_handleKeyDown:(id)fp8 inNode:(id)fp12;
@end

@interface GFGraphView (Private)
+ (id)_noteAttributes;
- (void)_editNoteAtIndex:(NSUInteger)fp8;
- (id)_menuForNote:(NSUInteger)fp8;
- (void)_setUndoManager:(NSUndoManager*)undoManager;
- (NSPoint)_centerPoint;
- (void)_setCenterPoint:(NSPoint)fp8;
- (NSPoint)_pastePoint;
- (void)_startTooltips;
- (void)_showTooltip;
- (void)_hideTooltip;
- (void)_updateTooltipsForMouseLocation:(NSPoint)fp8;
- (void)_stopTooltips;
- (void)_drawGraph:(NSRect)fp8 selectionRingColor:(id)fp24 selectionRingWidth:(CGFloat)fp28 nodeCount:(NSUInteger)fp32 nodeList:(id *)fp36 connectionCount:(NSUInteger)fp40 connectionList:(id *)fp44;
- (BOOL)_editNode:(id)fp8;
- (void)_printWithInfo:(id)fp8 showingPrintPanel:(BOOL)fp12;
- (BOOL)_setFirstResponderNode:(id)fp8;
- (void)removeFromSuperview;
- (void)_setGraphEditor:(GFGraphEditorView*)graphEditor;
- (GFGraphEditorView*)_graphEditor;
- (float)_zoomFactor;
- (void)_setZoomFactor:(float)fp8;
- (void)_zoomToFitSelection;
- (void)_zoomToFitAll;
- (void)_cacheZoomState;
- (void)_restoreZoomState;
- (void)_setZoomFactor:(float)fp8 centerPoint:(NSPoint)fp12;
- (void)_zoomWithSpeedFactor:(float)fp8;
- (void)_zoomToFitRect:(NSRect)fp8;
- (void)_adjustFrame;
- (void)_validateNodePosition:(id)fp8;
- (void)_validateNodePositions;
- (BOOL)_addNode:(id)fp8 atPosition:(NSPoint)fp12;
- (void)__stateUpdated:(id)fp8;
- (void)__layoutUpdated:(id)fp8;
- (void)__windowKey:(id)fp8;
- (void)__frameChanged:(id)fp8;
- (void)_finishInitialization;
- (id)_nodeAtPosition:(NSPoint)fp8 outBounds:(NSRect *)fp16;
- (NSUInteger)_performActionOnNodes:(SEL)fp8 context:(void *)fp12 selectedOnly:(BOOL)fp16;
- (NSUInteger)_performActionOnSelectedNodes:(SEL)fp8 context:(void *)fp12;
- (NSUInteger)_performActionOnAllNodes:(SEL)fp8 context:(void *)fp12;
- (NSRect)_boundsForSelection;
- (BOOL)_deselectAll;
- (BOOL)__selectionFilter:(id)fp8;
- (void)_writeSelectionToState:(id)fp8 fromPoint:(NSPoint)fp12;
- (void)_writeSelectionToArchiver:(id)fp8 fromPoint:(NSPoint)fp12;
- (void)_writeSelectionToPasteboard:(id)fp8 fromPoint:(NSPoint)fp12;
- (BOOL)_readSelectionFromState:(id)fp8 toPoint:(NSPoint)fp12;
- (BOOL)_readSelectionFromUnarchiver:(id)fp8 toPoint:(NSPoint)fp12;
- (void)_readSelectionFromPasteboard:(id)fp8 toPoint:(NSPoint)fp12;
- (id)_imageForSelection;
- (id)_firstResponderNode;
- (id)_colorForConnection:(id)fp8;
- (id)_trackedConnection;
- (void)delete:(id)fp8;
@end

@interface GFGraphView (Specific)
- (BOOL)trackMouse:(id)fp8;
- (BOOL)handleKeyDown:(id)fp8;
- (BOOL)handleKeyUp:(id)fp8;
- (BOOL)trackConnection:(id)fp8 fromPort:(id)fp12 atPoint:(NSPoint)fp16;
- (void)noteContentChanged;
- (id)setupInspectorViews;
- (void)resetInspectorViews;
- (id)tooltipStringForPoint:(NSPoint)fp8 tooltipBounds:(NSRect *)fp16;
- (id)setupTooltipViewForPoint:(NSPoint)fp8 tooltipBounds:(NSRect *)fp16;
- (void)resetTooltipView;
- (id)menuForGraph;
- (void)setGraph:(id)fp8;
- (id)graph;
- (BOOL)drawsBackground;
- (void)setDrawsBackground:(BOOL)fp8;
- (BOOL)drawsShadows;
- (void)setDrawsShadows:(BOOL)fp8;
- (void)setGridStep:(NSUInteger)fp8;
- (NSUInteger)gridStep;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)fp8;
- (id)gridColor;
- (void)setGridColor:(id)fp8;
- (BOOL)alignNodes;
- (void)setAlignNodes:(BOOL)alignNodes;
- (void)setTooltipDelay:(double)tooltipDelay;
- (double)tooltipDelay;
- (id)nodeActorForNode:(id)fp8;
- (NSRect)boundsForConnection:(id)fp8;
- (NSRect)boundsForNode:(id)fp8;
- (NSRect)maxBounds;
- (NSRect)boundsForConnection:(id)fp8 fromPoint:(NSPoint)fp12 toPoint:(NSPoint)fp20;
- (void)_drawConnection:(id)fp8 fromPort:(id)fp12 point:(NSPoint)fp16 toPoint:(NSPoint)fp24;
- (void)drawConnection:(id)fp8 fromPoint:(NSPoint)fp12 toPoint:(NSPoint)fp20;
- (void)drawBackground:(NSRect)fp8;
- (void)drawSelectionArea:(NSRect)fp8;
- (NSRect)titlebarBoundsForNote:(id)fp8 inBounds:(NSRect)fp12;
- (NSRect)resizeBoundsForNote:(id)fp8 inBounds:(NSRect)fp12;
- (void)drawNote:(id)fp8 inBounds:(NSRect)fp12 withColor:(id)fp28;
- (void)setNeedsDisplayForNode:(id)fp8;
@end
