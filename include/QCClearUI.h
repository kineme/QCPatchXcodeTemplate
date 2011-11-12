#import "QCInspector.h"

@interface QCClearUI : QCInspector
{
	IBOutlet NSButton *colorButton;	// 28 = 0x1c
	IBOutlet NSButton *depthButton;	// 32 = 0x20
}

+ (NSString*)viewNibName;
- (void)setupViewForPatch:(QCPatch*)patch;
- (void)update:(id)sender;

@end
