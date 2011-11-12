extern NSString * const QCCompositionPickerViewDidSelectCompositionNotification;
extern NSString * const QCCompositionPickerViewWillSelectCompositionNotification;

@interface QCCompositionPickerView : NSView
{
	void *_QCCompositionPickerViewPrivate;	// 80 = 0x50
}

- (void)updateState:(int)fp8;
- (void)_windowDidOrderOffScreen:(id)fp8;
- (void)_windowDidOrderOnScreen:(id)fp8;
- (void)_appActive:(id)fp8;
- (void)_appInactive:(id)fp8;
- (void)_windowWillClose:(id)fp8;
- (void)viewDidMoveToWindow;
- (BOOL)acceptsFirstMouse:(NSEvent*)theEvent;
- (BOOL)acceptsFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)mouseDown:(NSEvent*)theEvent;
- (void)keyDown:(NSEvent*)theEvent;
- (void)swipeWithEvent:(NSEvent*)theEvent;
- (void)setCompositionsFromRepositoryWithProtocol:(id)fp8 andAttributes:(id)fp12;
- (void)setCompositionsFromRepositoryWithProtocol:(id)fp8 andAttributes:(id)fp12 sortedBy:(id)fp16;
- (void)drawRect:(NSRect)fp8;
- (void)_finishInitialization;
- (id)initWithFrame:(NSRect)fp8 options:(id)fp24;
- (id)initWithCoder:(NSCoder *)aDecoder;
- (void)encodeWithCoder:(NSCoder *)aCoder;
- (void)finalize;
- (void)dealloc;
- (void)setFillsPicker:(BOOL)fp8;
- (BOOL)fillsPicker;
- (void)setAllowsLayoutAnimations:(BOOL)fp8;
- (BOOL)allowsLayoutAnimations;
- (void)setSelectionZoomRect:(NSRect)fp8;
- (NSRect)selectionZoomRect;
- (void)setCellBackgroundColor:(id)fp8;
- (id)cellBackgroundColor;
- (NSSize)cellSize;
- (id)initWithFrame:(NSRect)fp8;
- (id)compositions;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setDefaultValue:(id)fp8 forInputKey:(id)fp12;
- (void)resetDefaultInputValues;
- (void)setShowsCompositionNames:(BOOL)fp8;
- (BOOL)showsCompositionNames;
- (void)setCompositionAspectRatio:(NSSize)fp8;
- (NSSize)compositionAspectRatio;
- (void)setAllowsEmptySelection:(BOOL)fp8;
- (BOOL)allowsEmptySelection;
- (void)setSelectedComposition:(id)fp8;
- (id)selectedComposition;
- (void)startAnimation:(id)fp8;
- (void)stopAnimation:(id)fp8;
- (BOOL)isAnimating;
- (void)setMaxAnimationFrameRate:(float)fp8;
- (float)maxAnimationFrameRate;
- (void)setBackgroundColor:(id)fp8;
- (id)backgroundColor;
- (void)setDrawsBackground:(BOOL)fp8;
- (BOOL)drawsBackground;
- (void)setBorderType:(NSBorderType)fp8;
- (NSBorderType)borderType;
- (void)setZoomsOnSelection:(BOOL)fp8;
- (BOOL)zoomsOnSelection;
- (void)setAllowsIdentitySelection:(BOOL)fp8;
- (BOOL)allowsIdentitySelection;
- (NSUInteger)numberOfColumns;
- (void)setNumberOfColumns:(NSUInteger)fp8;
- (NSUInteger)numberOfRows;
- (void)setNumberOfRows:(NSUInteger)fp8;
- (BOOL)setValue:(id)fp8 forInputKey:(id)fp12 composition:(id)fp16;
- (void)setFlipCellsHorizontally:(BOOL)fp8;
- (BOOL)flipCellsHorizontally;
- (void)setOptimizesParameters:(BOOL)fp8;
- (BOOL)optimizesParameters;
@end

@interface QCCompositionPickerView (InternalPickerViewControllerDelegate)
- (void)fireDidStartAnimating;
- (void)fireWillStopAnimating;
- (void)fireWillSelectComposition:(id)fp8;
- (void)fireDidSelectComposition;
- (void)fireDidLoadComposition:(id)fp8;
- (BOOL)fireKeyDown:(id)fp8;
@end

@interface QCCompositionPickerView (DragNDrop)
- (BOOL)prepareForDragOperation:(id <NSDraggingInfo>)sender;
- (NSDragOperation)draggingUpdated:(id <NSDraggingInfo>)sender;
- (NSDragOperation)draggingEntered:(id <NSDraggingInfo>)sender;
- (BOOL)performDragOperation:(id <NSDraggingInfo>)sender;
@end
