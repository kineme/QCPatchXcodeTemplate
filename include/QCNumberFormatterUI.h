
#import "QCInspector.h"

@interface QCNumberFormatterUI : QCInspector
{
	IBOutlet NSPopUpButton *styleMenu;	// 28 = 0x1c
	IBOutlet NSTextField *formatField;	// 32 = 0x20
}

+ (id)viewNibName;
- (void)_configureFormatEditor;
- (void)setupViewForPatch:(id)fp8;
- (void)update:(id)fp8;

@end
