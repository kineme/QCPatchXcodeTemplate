
#import "QCInspector.h"

@class QCProgrammablePatchView;

@interface QCImageKernelUI : QCInspector
{
	IBOutlet QCProgrammablePatchView *sourceView;	// 28 = 0x1c
	IBOutlet QCProgrammablePatchView *advancedViewMain;	// 32 = 0x20
	IBOutlet NSButton *dodButton;	// 36 = 0x24
	IBOutlet NSSplitView *splitView;	// 40 = 0x28
	IBOutlet NSButton *advancedModeButton;	// 44 = 0x2c
}

+ (id)viewNibName;
- (void)setupViewForPatch:(id)fp8;
- (void)resetView;
- (void)changeMode:(id)fp8;
- (CGFloat)splitView:(id)fp8 constrainSplitPosition:(CGFloat)fp12 ofSubviewAt:(NSInteger)fp16;
- (BOOL)splitView:(id)fp8 canCollapseSubview:(id)fp12;
- (CGFloat)splitView:(id)fp8 constrainMinCoordinate:(CGFloat)fp12 ofSubviewAt:(NSInteger)fp16;
- (CGFloat)splitView:(id)fp8 constrainMaxCoordinate:(CGFloat)fp12 ofSubviewAt:(NSInteger)fp16;
- (BOOL)splitView:(id)fp8 shouldCollapseSubview:(id)fp12 forDoubleClickOnDividerAtIndex:(NSInteger)fp16;

@end
