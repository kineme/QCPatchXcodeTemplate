

#import "QCInspector.h"

@interface QCBonjourServicesUI : QCInspector
{
	IBOutlet NSComboBox *typeComboBox;	// 28 = 0x1c
}

+ (id)viewNibName;
- (void)setupViewForPatch:(id)fp8;
- (void)updateType:(id)fp8;
@end
