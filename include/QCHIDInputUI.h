

#import <IOKit/IOKitLib.h>

#import "QCInspector.h"

@class GFList;

@interface QCHIDInputUI : QCInspector
{
	IBOutlet NSPopUpButton *deviceMenu;	// 28 = 0x1c
	IBOutlet NSTableView *elementsTableView;	// 32 = 0x20
	GFList *_allElements;	// 36 = 0x24
	IBOutlet NSMutableArray *_elements;	// 40 = 0x28
	unsigned int _addNotification;	// 44 = 0x2c
	unsigned int _removeNotification;	// 48 = 0x30
	IONotificationPortRef _notificationPort;	// 52 = 0x34
	CFRunLoopSourceRef _runLoopSource;	// 56 = 0x38
}

+ (id)viewNibName;
- (void)_updateUI;
- (void)_setupUI;
- (void)setupViewForPatch:(id)fp8;
- (void)resetView;
- (void)updateDevice:(id)fp8;
- (NSInteger)numberOfRowsInTableView:(NSTableView*)fp8;
- (id)tableView:(NSTableView*)fp8 objectValueForTableColumn:(NSTableColumn*)fp12 row:(NSInteger)fp16;
- (void)tableView:(NSTableView*)fp8 setObjectValue:(id)fp12 forTableColumn:(NSTableColumn*)fp16 row:(NSInteger)fp20;

@end
