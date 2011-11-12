

@class GFList;

@interface GFSettingsView : NSView
{
	NSView *_insideView;	// 80 = 0x50
	NSTableView *_tableView;	// 84 = 0x54
	NSCell *_keyCell;	// 88 = 0x58
	NSTextFieldCell *_stringCell;	// 92 = 0x5c
	NSTextFieldCell *_integerCell;	// 96 = 0x60
	NSTextFieldCell *_floatingCell;	// 100 = 0x64
	NSButtonCell *_booleanCell;	// 104 = 0x68
	NSPopUpButtonCell *_menuCell;	// 108 = 0x6c
	GFList *_defaults;	// 112 = 0x70
	id _delegate;	// 116 = 0x74
}

- (void)_finish_initialization;
- (id)initWithFrame:(NSRect)fp8;
- (void)dealloc;
- (void)_updateDefaults;
- (void)setDefaults:(id)fp8;
- (id)defaults;
- (void)setDefault:(id)fp8 forKey:(id)fp12;
- (void)removeDefaultForKey:(id)fp8;
- (id)delegate;
- (void)setDelegate:(id)fp8;
- (void)reloadSettings;
- (void)encodeWithCoder:(NSCoder *)aCoder;
- (id)initWithCoder:(NSCoder *)aDecoder;
- (void)keyDown:(id)fp8;
- (id)_defaults;

@end

@interface GFSettingsView (TableViewSource)
- (NSInteger)numberOfRowsInTableView:(NSTableView*)fp8;
- (id)tableView:(NSTableView*)fp8 objectValueForTableColumn:(NSTableColumn*)fp12 row:(NSInteger)fp16;
- (BOOL)tableView:(NSTableView*)fp8 shouldEditTableColumn:(NSTableColumn*)fp12 row:(NSInteger)fp16;
- (void)tableView:(NSTableView*)fp8 setObjectValue:(id)fp12 forTableColumn:(NSTableColumn*)fp16 row:(NSInteger)fp20;
- (void)tableView:(NSTableView*)fp8 willDisplayCell:(id)fp12 forTableColumn:(NSTableColumn*)fp16 row:(NSInteger)fp20;
- (id)_cellForRow:(NSInteger)fp8;
@end
