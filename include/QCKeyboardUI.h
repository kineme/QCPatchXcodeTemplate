
#import "QCInspector.h"

@class QCKeyboardTableView;

@interface QCKeyboardUI : QCInspector
{
	IBOutlet QCKeyboardTableView *tableView;	// 28 = 0x1c
}

+ (id)viewNibName;
- (void)setupViewForPatch:(id)fp8;
- (void)addKey:(id)fp8;
- (void)removeKey:(id)fp8;
- (NSInteger)numberOfRowsInTableView:(NSTableView*)fp8;
- (id)tableView:(NSTableView*)fp8 objectValueForTableColumn:(NSTableColumn*)fp12 row:(NSInteger)fp16;
- (void)tableView:(NSTableView*)fp8 setObjectValue:(id)fp12 forTableColumn:(NSTableColumn*)fp16 row:(NSInteger)fp20;

@end
