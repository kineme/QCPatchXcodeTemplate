
#import "QCInspector.h"

@interface QCPlasmaImageUI : QCInspector
{
	IBOutlet NSTextField *widthField;	// 28 = 0x1c
	IBOutlet NSTextField *heightField;	// 32 = 0x20
}

+ (id)viewNibName;
- (void)setupViewForPatch:(id)fp8;
- (void)updateSize:(id)fp8;

@end
