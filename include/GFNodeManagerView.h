extern NSString * const GFNodeManagerViewInstantiateNodeNotification;

@interface GFNodeManagerView : NSView
{
	NSView *_insideView;	// 80 = 0x50
	NSString *_namespace;	// 84 = 0x54
	NSString *_filterString;	// 88 = 0x58
	NSMutableArray *_nodeNames;	// 92 = 0x5c
	NSTableView *_tableView;	// 96 = 0x60
	NSTextView *_textView;	// 100 = 0x64
	NSCell *_defaultDataCell;	// 104 = 0x68
	void *_unused[4];	// 108 = 0x6c
}

- (id)initWithFrame:(NSRect)fp8;
- (void)encodeWithCoder:(NSCoder *)aCoder;
- (id)initWithCoder:(NSCoder *)aDecoder;
- (void)dealloc;
- (void)setNodeNamespace:(id)fp8;
- (id)nodeNamespace;
- (void)setFilterString:(id)fp8;
- (id)filterString;
@end

@interface GFNodeManagerView (TableViewSource)
- (NSInteger)numberOfRowsInTableView:(NSTableView*)fp8;
- (id)tableView:(NSTableView*)fp8 objectValueForTableColumn:(NSTableColumn*)fp12 row:(NSInteger)fp16;
- (void)tableView:(NSTableView*)fp8 sortDescriptorsDidChange:(NSArray*)fp12;
- (BOOL)tableView:(NSTableView*)fp8 writeRows:(NSArray*)fp12 toPasteboard:(NSPasteboard*)fp16;
- (void)tableViewSelectionDidChange:(id)fp8;
@end

@interface GFNodeManagerView (Private)
- (void)_finishInitialization;
- (id)_descriptionForNode:(id)fp8;
- (id)_cellContentForNode:(id)fp8 columnIdentifier:(id)fp12;
- (int)_compareNode:(id)fp8 withNode:(id)fp12 usingColumnIdentifier:(id)fp16 ascending:(BOOL)fp20;
- (id)_filterStringsForNode:(id)fp8;
- (void)_refreshList:(id)fp8;
- (void)_addColumnWithIdentifier:(id)fp8 title:(id)fp12 dataCell:(id)fp16 sortable:(BOOL)fp20;
- (void)_removeColumnWithIdentifier:(id)fp8;
- (void)_removeAllColumns;
- (id)_columns;
- (void)_sortByIdentifiers:(id)fp8;
- (void)_selectRow:(NSUInteger)fp8;
- (void)_tableViewDoubleClick;
@end
