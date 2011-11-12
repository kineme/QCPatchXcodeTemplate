
#import "QCInspector.h"

@interface QCRenderInImageUI : QCInspector
{
	IBOutlet NSPopUpButton *formatMenu;	// 28 = 0x1c
	IBOutlet NSButton *depthButton;	// 32 = 0x20
	IBOutlet NSButton *feedbackButton;	// 36 = 0x24
}

+ (id)viewNibName;
- (void)setupViewForPatch:(id)fp8;
- (void)updateFormat:(id)fp8;
- (void)updateDepth:(id)fp8;
- (void)updateFeedback:(id)fp8;

@end
