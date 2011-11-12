
#import "QCInspector.h"

@interface QCPsychedelicUI : QCInspector
{
	IBOutlet NSButton *depthButton;	// 28 = 0x1c
}

+ (id)viewNibName;
- (void)setupViewForPatch:(id)fp8;
- (void)update:(id)fp8;

@end
