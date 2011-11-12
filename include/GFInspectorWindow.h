

@interface GFInspectorWindow : NSPanel
{
	NSUndoManager *_undoManager;	// 132 = 0x84
}

- (void)dealloc;
- (void)setUndoManager:(NSUndoManager*)undoManager;
- (id)undoManager;
- (BOOL)validateMenuItem:(NSMenuItem*)menuItem;
- (void)undo:(id)fp8;
- (void)redo:(id)fp8;

@end
