@interface QCCompositionPickerInfos : NSObject
{
	float _maxAnimationFrameRate;	// 4 = 0x4
	BOOL _showsCompositionNames;	// 8 = 0x8
	BOOL _animateCompositions;	// 9 = 0x9
	BOOL _allowsEmptySelection;	// 10 = 0xa
	BOOL _allowsLayoutAnimations;	// 11 = 0xb
	BOOL _allowsIdentitySelection;	// 12 = 0xc
	NSSize _compositionAspectRatio;	// 16 = 0x10
	NSInteger _selectionMode;	// 24 = 0x18
	NSInteger _selectedCompositionIndex;	// 28 = 0x1c
	NSBorderType _borderType;	// 32 = 0x20
	NSColor *_backgroundColor;	// 36 = 0x24
	NSColor *_cellBackgroundColor;	// 40 = 0x28
	BOOL _drawsBackground;	// 44 = 0x2c
	BOOL _showsAttributeFilter;	// 45 = 0x2d
	NSUInteger _numberOfColumns;	// 48 = 0x30
	NSUInteger _numberOfRows;	// 52 = 0x34
	BOOL _fillsPicker;	// 56 = 0x38
	NSArray *_compositions;	// 60 = 0x3c
	NSDictionary *_defaultValues;	// 64 = 0x40
	NSDictionary *_options;	// 68 = 0x44
	BOOL _flipCellsHorizontally;	// 72 = 0x48
}
@property (readwrite,retain) NSArray *compositions;
@property (readwrite,assign) BOOL flipCellsHorizontally;
@property (readwrite,retain) NSDictionary *options;
@property (readwrite,retain) NSDictionary *defaultValues;
@property (readwrite,assign) BOOL fillsPicker;
@property (readwrite,assign) NSUInteger numberOfRows;
@property (readwrite,assign) NSUInteger numberOfColumns;
@property (readwrite,assign) BOOL showsAttributeFilter;
@property (readwrite,assign) BOOL drawsBackground;
@property (readwrite,retain) NSColor *cellBackgroundColor;
@property (readwrite,retain) NSColor *backgroundColor;
@property (readwrite,assign) NSBorderType borderType;
@property (readwrite,assign) NSInteger selectedCompositionIndex;
@property (readwrite,assign) NSInteger selectionMode;
@property (readwrite,assign) NSSize compositionAspectRatio;
@property (readwrite,assign) BOOL allowsIdentitySelection;
@property (readwrite,assign) BOOL allowsLayoutAnimations;
@property (readwrite,assign) BOOL allowsEmptySelection;
@property (readwrite,assign) BOOL animateCompositions;
@property (readwrite,assign) BOOL showsCompositionNames;
@property (readwrite,assign) float maxAnimationFrameRate;

- (id)initWithPickerOptions:(id)fp8;
- (void)dealloc;
- (BOOL)useHUDStyle;
- (void)setCompositions:(NSArray*)fp8;
- (NSArray*)compositions;
- (BOOL)flipCellsHorizontally;
- (void)setFlipCellsHorizontally:(BOOL)fp8;
- (NSDictionary*)options;
- (void)setOptions:(NSDictionary*)fp8;
- (NSDictionary*)defaultValues;
- (void)setDefaultValues:(NSDictionary*)fp8;
- (BOOL)fillsPicker;
- (void)setFillsPicker:(BOOL)fp8;
- (NSUInteger)numberOfRows;
- (void)setNumberOfRows:(NSUInteger)fp8;
- (NSUInteger)numberOfColumns;
- (void)setNumberOfColumns:(NSUInteger)fp8;
- (BOOL)showsAttributeFilter;
- (void)setShowsAttributeFilter:(BOOL)fp8;
- (BOOL)drawsBackground;
- (void)setDrawsBackground:(BOOL)fp8;
- (NSColor*)cellBackgroundColor;
- (void)setCellBackgroundColor:(NSColor*)fp8;
- (NSColor*)backgroundColor;
- (void)setBackgroundColor:(NSColor*)fp8;
- (NSBorderType)borderType;
- (void)setBorderType:(NSBorderType)fp8;
- (NSInteger)selectedCompositionIndex;
- (void)setSelectedCompositionIndex:(NSInteger)fp8;
- (NSInteger)selectionMode;
- (void)setSelectionMode:(NSInteger)fp8;
- (NSSize)compositionAspectRatio;
- (void)setCompositionAspectRatio:(NSSize)fp8;
- (BOOL)allowsIdentitySelection;
- (void)setAllowsIdentitySelection:(BOOL)fp8;
- (BOOL)allowsLayoutAnimations;
- (void)setAllowsLayoutAnimations:(BOOL)fp8;
- (BOOL)allowsEmptySelection;
- (void)setAllowsEmptySelection:(BOOL)fp8;
- (BOOL)animateCompositions;
- (void)setAnimateCompositions:(BOOL)fp8;
- (BOOL)showsCompositionNames;
- (void)setShowsCompositionNames:(BOOL)fp8;
- (float)maxAnimationFrameRate;
- (void)setMaxAnimationFrameRate:(float)fp8;
@end
