
#import "QCInspector.h"

@interface QCImageAccumulatorUI : QCInspector
{
	IBOutlet NSPopUpButton *formatMenu;	// 28 = 0x1c
	IBOutlet NSButton *continuousButton;	// 32 = 0x20
}

+ (id)viewNibName;
- (void)setupViewForPatch:(id)fp8;
- (void)updateFormat:(id)fp8;
- (void)updateContinuous:(id)fp8;

@end
