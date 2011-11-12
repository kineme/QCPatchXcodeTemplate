@class GFNodeManagerView;

extern NSString * const GFGraphEditorViewCenterDidChangeNotification;
extern NSString * const GFGraphEditorViewContentDidChangeNotification;
extern NSString * const GFGraphEditorViewGraphDidChangeNotification;
extern NSString * const GFGraphEditorViewSelectionDidChangeNotification;

@interface GFGraphEditorView : NSView
{
	NSScrollView *_scrollView;	// 80 = 0x50
	GFNodeManagerView *_nodeManager;	// 84 = 0x54
	void *_unused[4];	// 88 = 0x58
}

- (id)initWithFrame:(NSRect)fp8;
- (void)dealloc;
- (BOOL)isOpaque;
- (void)resizeSubviewsWithOldSize:(NSSize)fp8;
- (void)showGraphEditorInspector:(id)fp8;
- (void)printWithInfo:(id)fp8 showingPrintPanel:(BOOL)fp12;
- (void)setGraph:(id)fp8;
- (id)graph;
- (NSPoint)editorCenter;
- (void)setEditorCenter:(NSPoint)fp8;
- (NSSize)editorSize;
- (void)setEditorSize:(NSSize)fp8;
- (void)encodeWithCoder:(NSCoder *)aCoder;
- (id)initWithCoder:(NSCoder *)aDecoder;
- (void)setGridStep:(NSUInteger)fp8;
- (NSUInteger)gridStep;
- (BOOL)drawsShadows;
- (void)setDrawsShadows:(BOOL)fp8;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)fp8;
- (id)gridColor;
- (void)setGridColor:(id)fp8;
- (BOOL)alignNodes;
- (void)setAlignNodes:(BOOL)fp8;
- (float)zoomFactor;
- (void)setZoomFactor:(float)fp8;
- (void)zoomToFitSelection;
- (void)zoomToFitAll;
- (void)setTooltipDelay:(double)fp8;
- (double)tooltipDelay;
- (void)setNodeManager:(id)fp8;
- (id)nodeManager;
- (id)graphView;

@end

@interface GFGraphEditorView (Private)
- (void)__instantiateNode:(id)fp8;
- (void)_finishInitialization;
- (void)__contentUpdated:(id)fp8;
- (void)__selectionUpdated:(id)fp8;
- (void)_setGraphView:(id)fp8;
@end
