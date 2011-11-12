
#import "QCInspector.h"

@interface QCDateFormatterUI : QCInspector
{
	IBOutlet NSButton *zoneButton;	// 28 = 0x1c
	IBOutlet NSPopUpButton *zoneMenu;	// 32 = 0x20
	IBOutlet NSPopUpButton *dateMenu;	// 36 = 0x24
	IBOutlet NSPopUpButton *timeMenu;	// 40 = 0x28
	IBOutlet NSTextField *formatField;	// 44 = 0x2c
}

+ (id)viewNibName;
- (void)didLoadNib;
- (void)_configureFormatEditor;
- (void)setupViewForPatch:(id)fp8;
- (void)update:(id)fp8;

@end
