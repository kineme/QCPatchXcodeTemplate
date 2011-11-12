#import <GFGraph.h>
#import <GFNode.h>
#import <GFList.h>
#import <GFConnection.h>

@interface GFGraphView : NSView
{
    GFGraph *_graph;
    GFNode *_firstResponder;
    BOOL _drawsBackground;
    BOOL _drawsShadows;
    unsigned int _gridStep;
    NSColor *_backgroundColor;
    NSColor *_gridColor;
    double _tooltipDelay;
    BOOL _spaceDown;
    NSRect _selectionBounds;
    NSPoint _connectionStart;
    NSPoint _connectionEnd;
    GFConnection *_connection;
    struct __CFRunLoopTimer *_tooltipTimer;
    BOOL _tooltipPending;
    NSRect _tooltipBounds;
    GFNode *_tooltipNode;
    GFList *_nodeActorCache;
    GFGraphEditorView *_graphEditor;
    NSUndoManager *_undoManager;
    BOOL _disableValidation;
    NSPoint _cachedCenter;
    float _cachedZoomFactor;
    void *_unused[3];
}

- (id)initWithFrame:(NSRect)fp8;
- (void)finalize;
- (void)dealloc;
- (BOOL)isOpaque;
- (BOOL)isFlipped;
- (BOOL)acceptsFirstMouse:(id)fp8;
- (BOOL)acceptsFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (BOOL)performKeyEquivalent:(id)fp8;
- (void)keyDown:(id)fp8;
- (void)keyUp:(id)fp8;
- (id)menuForEvent:(id)fp8;
- (void)mouseMoved:(id)fp8;
- (void)mouseDown:(id)fp8;
- (void)rightMouseDown:(id)fp8;
- (void)otherMouseDown:(id)fp8;
- (void)scrollWheel:(id)fp8;
- (void)undo:(id)fp8;
- (void)redo:(id)fp8;
- (BOOL)validateMenuItem:(id)fp8;
- (void)copy:(id)fp8;
- (void)paste:(id)fp8;
- (void)cut:(id)fp8;
- (void)duplicate:(id)fp8;
- (void)selectAll:(id)fp8;
- (unsigned int)draggingEntered:(id)fp8;
- (unsigned int)draggingUpdated:(id)fp8;
- (BOOL)performDragOperation:(id)fp8;
- (void)drawRect:(NSRect)fp8;
- (NSRect)adjustScroll:(NSRect)fp8;
- (BOOL)autoscroll:(id)fp8;
- (void)print:(id)fp8;
- (BOOL)knowsPageRange:(NSRange *)fp8;
- (NSRect)rectForPage:(int)fp8;
- (void)setBoundsOrigin:(NSPoint)fp8;
- (void)setBoundsSize:(NSSize)fp8;
- (void)viewWillMoveToWindow:(id)fp8;
- (void)viewDidMoveToWindow;

@end

@interface GFGraphView (LocalNodeActor)
- (NSSize)_sizeForNode:(id)fp8;
- (NSPoint)_pointForPort:(id)fp8 inNode:(id)fp12 bounds:(NSRect)fp16;
- (id)_portForPoint:(NSPoint)fp8 inNode:(id)fp16 bounds:(NSRect)fp20;
- (void)_drawNode:(id)fp8 bounds:(NSRect)fp12;
- (void)_drawSelectionRingWithColor:(id)fp8 width:(float)fp12 forNode:(id)fp16 bounds:(NSRect)fp20;
- (BOOL)_trackMouse:(id)fp8 inNode:(id)fp12 bounds:(NSRect)fp16;
- (id)_menuForNode:(id)fp8;
- (BOOL)_nodeAcceptsFirstResponder:(id)fp8;
- (BOOL)_nodeBecomesFirstResponder:(id)fp8;
- (BOOL)_nodeResignsFirstResponder:(id)fp8;
- (BOOL)_handleKeyUp:(id)fp8 inNode:(id)fp12;
- (BOOL)_handleKeyDown:(id)fp8 inNode:(id)fp12;
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

@interface GFGraphView (Actions)
- (id)_createSubgraphFromSelection:(id)fp8;
- (void)_editParentGraph:(id)fp8;
- (void)_addNote:(id)fp8;
- (void)_editNote:(id)fp8;
- (void)_setNoteColor:(id)fp8;
- (void)_deleteNote:(id)fp8;
@end

@interface GFGraphView (Private)
+ (id)_noteAttributes;
- (void)_editNoteAtIndex:(unsigned int)fp8;
- (id)_menuForNote:(unsigned int)fp8;
- (void)_setUndoManager:(id)fp8;
- (struct _NSPoint)_centerPoint;
- (void)_setCenterPoint:(struct _NSPoint)fp8;
- (void)_startTooltips;
- (void)_showTooltip;
- (void)_hideTooltip;
- (void)_updateTooltipsForMouseLocation:(struct _NSPoint)fp8;
- (void)_stopTooltips;
- (void)_drawGraph:(struct _NSRect)fp8 selectionRingColor:(id)fp24 selectionRingWidth:(float)fp28 nodeCount:(unsigned int)fp32 nodeList:(id *)fp36 connectionCount:(unsigned int)fp40 connectionList:(id *)fp44;
- (BOOL)_editNode:(id)fp8;
- (void)_printWithInfo:(id)fp8 showingPrintPanel:(BOOL)fp12;
- (BOOL)_setFirstResponderNode:(id)fp8;
- (void)removeFromSuperview;
- (void)_setGraphEditor:(id)fp8;
- (id)_graphEditor;
- (float)_zoomFactor;
- (void)_setZoomFactor:(float)fp8;
- (void)_zoomToFitSelection;
- (void)_zoomToFitAll;
- (void)_cacheZoomState;
- (void)_restoreZoomState;
- (void)_setZoomFactor:(float)fp8 centerPoint:(struct _NSPoint)fp12;
- (void)_zoomWithSpeedFactor:(float)fp8;
- (void)_zoomToFitRect:(struct _NSRect)fp8;
- (void)_adjustFrame;
- (void)_validateNodePosition:(id)fp8;
- (void)_validateNodePositions;
- (BOOL)_addNode:(id)fp8 atPosition:(struct _NSPoint)fp12;
- (void)__stateUpdated:(id)fp8;
- (void)__layoutUpdated:(id)fp8;
- (void)__windowKey:(id)fp8;
- (void)__frameChanged:(id)fp8;
- (void)_finishInitialization;
- (id)_nodeAtPosition:(struct _NSPoint)fp8 outBounds:(struct _NSRect *)fp16;
- (unsigned int)_performActionOnNodes:(SEL)fp8 context:(void *)fp12 selectedOnly:(BOOL)fp16;
- (unsigned int)_performActionOnSelectedNodes:(SEL)fp8 context:(void *)fp12;
- (unsigned int)_performActionOnAllNodes:(SEL)fp8 context:(void *)fp12;
- (struct _NSRect)_boundsForSelection;
- (BOOL)_deselectAll;
- (BOOL)__selectionFilter:(id)fp8;
- (void)_writeSelectionToState:(id)fp8 fromPoint:(struct _NSPoint)fp12;
- (void)_writeSelectionToArchiver:(id)fp8 fromPoint:(struct _NSPoint)fp12;
- (void)_writeSelectionToPasteboard:(id)fp8 fromPoint:(struct _NSPoint)fp12;
- (BOOL)_readSelectionFromState:(id)fp8 toPoint:(struct _NSPoint)fp12;
- (BOOL)_readSelectionFromUnarchiver:(id)fp8 toPoint:(struct _NSPoint)fp12;
- (void)_readSelectionFromPasteboard:(id)fp8 toPoint:(struct _NSPoint)fp12;
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
- (void)setGridStep:(unsigned int)fp8;
- (unsigned int)gridStep;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)fp8;
- (id)gridColor;
- (void)setGridColor:(id)fp8;
- (void)setTooltipDelay:(double)fp8;
- (double)tooltipDelay;
- (id)nodeActorForNode:(id)fp8;
- (NSRect)boundsForConnection:(id)fp8;
- (NSRect)boundsForNode:(id)fp8;
- (NSRect)maxBounds;
- (NSRect)boundsForConnection:(id)fp8 fromPoint:(NSPoint)fp12 toPoint:(NSPoint)fp20;
- (void)drawConnection:(id)fp8 fromPoint:(NSPoint)fp12 toPoint:(NSPoint)fp20;
- (void)drawBackground:(NSRect)fp8;
- (void)drawSelectionArea:(NSRect)fp8;
- (NSRect)titlebarBoundsForNote:(id)fp8 inBounds:(NSRect)fp12;
- (NSRect)resizeBoundsForNote:(id)fp8 inBounds:(NSRect)fp12;
- (void)drawNote:(id)fp8 inBounds:(NSRect)fp12 withColor:(id)fp28;
- (void)setNeedsDisplayForNode:(id)fp8;
@end

