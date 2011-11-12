
#import "QCNetworkPatchUI.h"

@interface QCOSCPatchUI : QCNetworkPatchUI
{
	IBOutlet NSTextField *portName;	// 52 = 0x34
	IBOutlet NSPopUpButton *portType;	// 56 = 0x38
	IBOutlet NSTableView *tableView;	// 60 = 0x3c
}

- (void)_updateUI:(id)fp8;
- (void)setupViewForPatch:(id)fp8;
- (void)removePort:(id)fp8;
- (void)addPort:(id)fp8;
- (NSInteger)numberOfRowsInTableView:(NSTableView*)fp8;
- (id)tableView:(NSTableView*)fp8 objectValueForTableColumn:(NSTableView*)fp12 row:(NSInteger)fp16;

@end
