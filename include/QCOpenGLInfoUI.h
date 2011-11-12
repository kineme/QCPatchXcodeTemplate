
#import "QCInspector.h"

@class QCTableView;

@interface QCOpenGLInfoUI : QCInspector
{
	IBOutlet QCTableView *tableView;	// 28 = 0x1c
}

+ (id)viewNibName;
- (void)setupViewForPatch:(id)fp8;
- (void)addExtension:(id)fp8;
- (void)removeExtension:(id)fp8;
- (NSInteger)numberOfRowsInTableView:(NSTableView*)fp8;
- (id)tableView:(NSTableView*)fp8 objectValueForTableColumn:(NSTableColumn*)fp12 row:(NSInteger)fp16;
- (void)tableView:(NSTableView*)fp8 setObjectValue:(id)fp12 forTableColumn:(NSTableColumn*)fp16 row:(NSInteger)fp20;

@end
