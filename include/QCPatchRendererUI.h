
#import "QCInspector.h"

@interface QCPatchRendererUI : QCInspector
{
	IBOutlet NSPopUpButton *executionMenu;	// 28 = 0x1c
	IBOutlet NSTableView *inputTableView;	// 32 = 0x20
	IBOutlet NSTableView *outputTableView;	// 36 = 0x24
	IBOutlet NSBox *outputsBox;	// 40 = 0x28
	IBOutlet NSPopUpButton *inputMenu;	// 44 = 0x2c
	IBOutlet NSTextField *inputField;	// 48 = 0x30
	IBOutlet NSPopUpButton *outputMenu;	// 52 = 0x34
	IBOutlet NSTextField *outputField;	// 56 = 0x38
	IBOutlet NSPopUpButton *protocolMenu;	// 60 = 0x3c
}

+ (id)viewNibName;
- (void)_setup:(id)fp8;
- (void)setupViewForPatch:(id)fp8;
- (void)setExecution:(id)fp8;
- (void)autoconfigureFromComposition:(id)fp8;
- (void)autoconfigureFromProtocol:(id)fp8;
- (void)addInput:(id)fp8;
- (void)removeInput:(id)fp8;
- (void)addOutput:(id)fp8;
- (void)removeOutput:(id)fp8;
- (NSInteger)numberOfRowsInTableView:(NSTableView*)fp8;
- (id)tableView:(NSTableView*)fp8 objectValueForTableColumn:(NSTableColumn*)fp12 row:(NSInteger)fp16;

@end
