
#import "QCInspector.h"

@interface QCDirectoryScannerUI : QCInspector
{
	IBOutlet NSButton *recursiveButton;	// 28 = 0x1c
	IBOutlet NSPopUpButton *typeMenu;	// 32 = 0x20
}

+ (id)viewNibName;
- (void)setupViewForPatch:(id)fp8;
- (void)updateRecursive:(id)fp8;
- (void)updateType:(id)fp8;

@end
