

@class QCKeyFrameEditor, QCTimeLineView;

@interface QCTimeLineEditorView : NSView
{
	QCKeyFrameEditor *keyFrameEditor;	// 80 = 0x50
	IBOutlet NSButton *createNewTimeLine;	// 84 = 0x54
	IBOutlet NSButton *removeSelectedTimeLine;	// 88 = 0x58
	IBOutlet NSButton *curveHullsButton;	// 92 = 0x5c
	IBOutlet NSButton *legendVisibleButton;	// 96 = 0x60
	IBOutlet NSButton *controlPointsButton;	// 100 = 0x64
	IBOutlet NSButton *fitSelectedButton;	// 104 = 0x68
	IBOutlet NSButton *fitAllButton;	// 108 = 0x6c
	IBOutlet NSScrollView *_scrollView;	// 112 = 0x70
	QCTimeLineView *_timeLineView;	// 116 = 0x74
}

- (id)initWithFrame:(NSRect)fp8;
- (void)awakeFromNib;
- (BOOL)isOpaque;
- (void)resizeSubviewsWithOldSize:(NSSize)fp8;
- (void)dealloc;
- (void)updateUI:(id)fp8;
- (void)setPatch:(id)fp8;
- (void)createNewTimeLine:(id)fp8;
- (void)removeSelectedTimeLine:(id)fp8;
- (void)toggleCurveHulls:(id)fp8;
- (void)toggleLegendVisible:(id)fp8;
- (void)tlZoomToFitAll:(id)fp8;
- (void)tlZoomToFitSelection:(id)fp8;
- (void)tlZoomIn:(id)fp8;
- (void)tlZoomOut:(id)fp8;
@end
