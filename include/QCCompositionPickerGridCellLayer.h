

@class QCCompositionCellLayer, QCPickerSelectionLayer;

@interface QCCompositionPickerGridCellLayer : CALayer <CAAction>
{
	QCCompositionCellLayer *_QCLayer;	// 48 = 0x30
	QCPickerSelectionLayer *_selectionLayer;	// 52 = 0x34
	CATextLayer *_textLayer;	// 56 = 0x38
	CGColorRef _cellFocusRingColor;	// 60 = 0x3c
	CGColorRef _cellSelectedTextColor;	// 64 = 0x40
	CGColorRef _cellTextColor;	// 68 = 0x44
	id _controller;	// 72 = 0x48
	BOOL _selected;	// 76 = 0x4c
}

- (id)compositionLayer;
- (id)composition;
- (void)cellBackgroundColorDidChange;
- (void)updateLayout;
- (void)wakeup;
- (void)sleep;
- (void)_finalize_QCCompositionPickerGridCellLayer;
- (void)dealloc;
- (void)finalize;
- (BOOL)selected;
- (void)selectionDidChange;
- (void)setSelected:(BOOL)fp8;
- (void)setCollapsedLayout;
- (void)restoreExpandedLayout;
- (void)selectionModeDidChange;
- (void)animateCompositionsIfNeeded;
- (void)observeValueForKeyPath:(id)fp8 ofObject:(id)fp12 change:(id)fp16 context:(void *)fp20;
- (void)runActionForKey:(id)fp8 object:(id)fp12 arguments:(id)fp16;
- (id)initWithComposition:(id)fp8 controller:(id)fp12;

@end
