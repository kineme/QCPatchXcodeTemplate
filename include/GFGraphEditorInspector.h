

@class GFGraphEditorView, GFGraphView, GFInspectorWindow, GFList, GFNode;

@interface GFGraphEditorInspector : NSObject
{
	GFInspectorWindow *_window;	// 4 = 0x4
	NSPopUpButton *_menu;	// 8 = 0x8
	NSTextField *_text;	// 12 = 0xc
	GFList *_views;	// 16 = 0x10
	GFList *_viewSizes;	// 20 = 0x14
	NSView *_currentView;	// 24 = 0x18
	GFGraphEditorView *_graphEditor;	// 28 = 0x1c
	GFNode *_targetNode;	// 32 = 0x20
	GFGraphView *_targetGraphView;	// 36 = 0x24
	CFDictionaryRef _savedDimensions;	// 40 = 0x28
	void *_unused[2];	// 44 = 0x2c
}

+ (id)sharedInspector;
- (id)init;
- (void)dealloc;
- (void)cancelOperation:(id)fp8;
- (void)windowWillClose:(id)fp8;
- (void)show;
- (void)hide;
- (BOOL)isVisible;
- (void)__invalidateInspector:(id)fp8;
- (void)setGraphEditor:(id)fp8;
- (id)graphEditor;

@end

@interface GFGraphEditorInspector (Private)
- (id)_window;
- (void)_menuSelect:(id)fp8;
- (void)_previousPanel:(id)fp8;
- (void)_nextPanel:(id)fp8;
- (void)_loadViews:(id)fp8 clearUndoManager:(BOOL)fp12;
- (void)_reloadInspector;
@end
