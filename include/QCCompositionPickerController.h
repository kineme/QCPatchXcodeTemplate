@class QCCompositionPickerInfos;

@interface QCCompositionPickerController : NSObject
{
	NSInteger _currentPage;	// 4 = 0x4
	NSString *_lastUpdatedDefaultKey;	// 8 = 0x8
	NSRect _selectionZoomRect;	// 12 = 0xc
	NSInteger _pickerLayoutState;	// 28 = 0x1c
	NSInteger _orderedState;	// 32 = 0x20
	BOOL _isScrolling;	// 36 = 0x24
	QCCompositionPickerInfos *_infos;	// 40 = 0x28
	CFDictionaryRef _views;	// 44 = 0x2c
	NSInteger _pendingSelection;	// 48 = 0x30
	NSRect _expandedGridFrame;	// 52 = 0x34
	id _delegate;	// 68 = 0x44
	NSArray *_originalCompositions;	// 72 = 0x48
	NSMutableDictionary *_optimizedDefaultValues;	// 76 = 0x4c
	BOOL _disableOptimizations;	// 80 = 0x50
}
@property (readwrite,assign) NSInteger orderedState;
@property (readwrite,assign) NSInteger pickerLayoutState;
@property (readwrite,assign) NSRect selectionZoomRect;
@property (readwrite,retain) NSString *lastUpdatedDefaultKey;
@property (readwrite,assign) NSInteger currentPage;

- (BOOL)isScrolling;
- (NSInteger)gridCapacity;
- (NSUInteger)_pagesCountforCompositionsCount:(NSUInteger)fp8;
- (NSUInteger)_pagesCountForCompositions:(id)fp8;
- (NSUInteger)pagesCount;
- (id)viewForName:(id)fp8;
- (void)registerView:(id)fp8 name:(id)fp12;
- (id)cells;
- (NSInteger)cellsCount;
- (id)cellAtIndex:(NSInteger)fp8;
- (NSSize)cellSize;
- (id)initWithInfos:(id)fp8;
- (void)finalize;
- (void)wakeup;
- (void)sleep;
- (void)dealloc;
- (void)setNumberOfRows:(NSUInteger)fp8;
- (void)setNumberOfColumns:(NSUInteger)fp8;
- (id)_compositionsWithIdentity:(id)fp8;
- (void)_forceUpdateCompositions;
- (void)setAllowsIdentitySelection:(BOOL)fp8 relayout:(BOOL)fp12;
- (void)setAllowsIdentitySelection:(BOOL)fp8;
- (void)setFillsPicker:(BOOL)fp8;
- (void)setZoomsOnSelection:(BOOL)fp8;
- (void)setDrawsBackground:(BOOL)fp8;
- (void)setBackgroundColor:(id)fp8;
- (void)setMaxAnimationFrameRate:(float)fp8;
- (void)setAllowsEmptySelection:(BOOL)fp8;
- (void)setCompositionAspectRatio:(NSSize)fp8;
- (void)setShowsCompositionNames:(BOOL)fp8;
- (id)_createOptimizedDefaultValue:(id)fp8 forInputKey:(id)fp12 cellSize:(NSSize)fp16;
- (id)defaultValueForInputKey:(id)fp8;
- (void)_updateOptimizedDefaultValues;
- (BOOL)setValue:(id)fp8 forInputKey:(id)fp12 composition:(id)fp16;
- (void)setDefaultValue:(id)fp8 forInputKey:(id)fp12;
- (void)setCellBackgroundColor:(id)fp8;
- (void)setAllowsLayoutAnimations:(BOOL)fp8;
- (void)setSelectionMode:(NSInteger)fp8;
- (id)pickerInfos;
- (id)_setupGridWithCompositions:(id)fp8;
- (void)_resetGrid:(BOOL)fp8;
- (void)_resetGrid;
- (void)_newCompositionsDidLoad:(id)fp8;
- (void)relayoutPicker;
- (NSInteger)orderedState;
- (void)setOrderedState:(NSInteger)fp8;
- (void)setCompositionsFromRepositoryWithProtocol:(id)fp8 andAttributes:(id)fp12 sortedBy:(id)fp16;
- (void)_repositoryDidUpdate:(id)fp8;
- (NSUInteger)compositionIndexForPage:(NSUInteger)fp8;
- (id)compositionsAtPage:(NSInteger)fp8;
- (void)animationDidStart:(id)fp8;
- (BOOL)isAnimating;
- (void)startAnimation;
- (void)stopAnimation;
- (void)pauseAnimation:(BOOL)fp8;
- (void)resumeAnimation:(BOOL)fp8;
- (void)animationDidStop:(id)fp8 finished:(BOOL)fp12;
- (void)_pageChanged:(NSInteger)fp8 direction:(NSInteger)fp12;
- (void)setSelectedComposition:(id)fp8;
- (NSUInteger)gotoPreviousPage;
- (NSUInteger)gotoNextPage;
- (NSUInteger)gotoPreviousPage:(id)fp8;
- (NSUInteger)gotoNextPage:(id)fp8;
- (id)selectedComposition;
- (void)resetDefaultInputValues;
- (void)setExpandedGridFrame:(NSRect)fp8;
- (NSRect)expandedGridFrame;
- (void)_handleSelectionInZoomMode:(NSInteger)fp8;
- (void)_handleSelectionInFocusRingMode:(NSInteger)fp8;
- (void)setSelectedCompositionIndexInsideGrid:(NSInteger)fp8;
- (void)setSelectedCompositionIndex:(NSInteger)fp8 direction:(NSInteger)fp12;
- (void)setSelectedCompositionIndex:(NSInteger)fp8;
- (void)setSelectedCompositionIndexValue:(id)fp8;
- (CGSize)gridSize;
- (BOOL)keyDown:(id)fp8;
- (BOOL)mouseDown:(NSPoint)fp8;
- (id)layerAtLocation:(NSPoint)fp8;
- (void)setDelegate:(id)fp8;
- (void)setFlipCellsHorizontally:(BOOL)fp8;
- (BOOL)flipCellsHorizontally;
- (void)setOptimizesParameters:(BOOL)fp8;
- (BOOL)optimizesParameters;
- (NSInteger)pickerLayoutState;
- (void)setPickerLayoutState:(NSInteger)fp8;
- (NSRect)selectionZoomRect;
- (void)setSelectionZoomRect:(NSRect)fp8;
- (NSString*)lastUpdatedDefaultKey;
- (void)setLastUpdatedDefaultKey:(NSString*)fp8;
- (NSInteger)currentPage;
- (void)setCurrentPage:(NSInteger)fp8;

@end
