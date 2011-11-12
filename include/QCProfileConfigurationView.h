


@class QCAgeProfileView, QCProfileView;

@interface QCProfileConfigurationView : NSView
{
	NSView *_insideView;	// 80 = 0x50
	QCProfileView *_profileView;	// 84 = 0x54
	QCAgeProfileView *_ageProfileView;	// 88 = 0x58
	NSScrollView *_scrollView;	// 92 = 0x5c
	NSComboBox *_comboBox;	// 96 = 0x60
	NSTableView *_tableView;	// 100 = 0x64
	NSMutableArray *_colors;	// 104 = 0x68
	NSString *_autosaveName;	// 108 = 0x6c
	int _colorRow;	// 112 = 0x70
	void *_unused[4];	// 116 = 0x74
}

- (void)_save;
- (void)_restore;
- (void)_finishInitialization;
- (id)initWithFrame:(NSRect)fp8;
- (void)dealloc;
- (void)encodeWithCoder:(NSCoder *)aCoder;
- (id)initWithCoder:(NSCoder *)aDecoder;
- (void)setProfileView:(id)fp8;
- (id)profileView;
- (void)setAgeProfileView:(id)fp8;
- (id)ageProfileView;
- (void)setAutosaveName:(id)fp8;
- (id)autosaveName;
- (NSInteger)numberOfRowsInTableView:(NSTableView*)fp8;
- (id)tableView:(NSTableView*)fp8 objectValueForTableColumn:(NSTableColumn*)fp12 row:(NSInteger)fp16;
- (void)tableView:(NSTableView*)fp8 setObjectValue:(id)fp12 forTableColumn:(NSTableColumn*)fp16 row:(NSInteger)fp20;
- (void)_colorSelected:(id)fp8;
- (BOOL)tableView:(NSTableView*)fp8 shouldEditTableColumn:(NSTableColumn*)fp12 row:(NSInteger)fp16;
- (void)setSelectedCache:(id)fp8;
- (id)selectedCache;
- (void)setVirtualScreen:(id)fp8;
- (id)virtualScreen;
- (void)setShowPurgeable:(id)fp8;
- (id)showPurgeable;
- (void)setShowDirtyRect:(BOOL)fp8;
- (BOOL)showDirtyRect;
- (void)setShowCacheMisses:(BOOL)fp8;
- (BOOL)showCacheMisses;
- (void)setShowPoolMisses:(BOOL)fp8;
- (BOOL)showPoolMisses;
- (NSInteger)numberOfItemsInComboBox:(NSComboBox*)fp8;
- (id)comboBox:(NSComboBox*)fp8 objectValueForItemAtIndex:(NSInteger)fp12;

@end
