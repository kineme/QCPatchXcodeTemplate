
#import "QCInspector.h"

@class QCTableView;

@interface QCSplitterUI : QCInspector
{
	IBOutlet NSPopUpButton *classMenu;	// 28 = 0x1c
	IBOutlet NSTextField *minField;	// 32 = 0x20
	IBOutlet NSTextField *maxField;	// 36 = 0x24
	IBOutlet NSTabView *propertiesView;	// 40 = 0x28
	IBOutlet NSMatrix *indexRadioMatrix;	// 44 = 0x2c
	IBOutlet NSTabView *indexPropertiesView;	// 48 = 0x30
	IBOutlet QCTableView *tableView;	// 52 = 0x34
	IBOutlet NSButton *removeButton;	// 56 = 0x38
	IBOutlet NSButton *addButton;	// 60 = 0x3c
	IBOutlet NSTextField *maxIndices;	// 64 = 0x40
}

+ (id)viewNibName;
- (void)_setupUI:(id)fp8;
- (void)_updateUI:(id)fp8;
- (void)setupViewForPatch:(id)fp8;
- (void)setProperty:(id)fp8;
- (NSInteger)numberOfRowsInTableView:(NSTableView*)fp8;
- (id)tableView:(NSTabView*)fp8 objectValueForTableColumn:(NSTableColumn*)fp12 row:(NSInteger)fp16;
- (void)tableView:(NSTabView*)fp8 setObjectValue:(id)fp12 forTableColumn:(NSTableColumn*)fp16 row:(NSInteger)fp20;

@end
