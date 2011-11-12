


@class QCPatchEditorView, QCPatchManagerView;

@interface QCCompositionEditor : NSObject
{
	NSWindow *window;	// 4 = 0x4
	QCPatchEditorView *editorView;	// 8 = 0x8
	QCPatchManagerView *managerView;	// 12 = 0xc
}

+ (void)setup;
+ (NSInteger)numberOfRowsInTableView:(NSTableView*)fp8;
+ (id)tableView:(NSTableView*)fp8 objectValueForTableColumn:(NSTableColumn*)fp12 row:(NSInteger)fp16;
+ (void)doubleClick:(id)fp8;
+ (void)addPatch:(id)fp8;
+ (void)removePatch:(id)fp8;
+ (void)didUpdatePatchRendering:(id)fp8;
- (id)initWithPatch:(id)fp8;
- (void)windowWillClose:(id)fp8;

@end
