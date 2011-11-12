

@class GFGraph, GFGraphEditorView, GFNode;

@interface GFGraphPathView : NSView
{
	GFGraph *_rootGraph;	// 80 = 0x50
	GFGraphEditorView *_graphEditor;	// 84 = 0x54
	GFNode *_currentNode;	// 88 = 0x58
	BOOL _displayNodes;	// 92 = 0x5c
	NSPathControl *_control;	// 96 = 0x60
	void *_unused[4];	// 100 = 0x64
}

- (id)nodes;
- (void)setRootGraph:(id)fp8;
- (id)rootGraph;
- (id)currentNode;
- (void)__graphDidChange:(id)fp8;
- (void)setPath:(id)fp8;
- (void)setCurrentNode:(id)fp8;
- (void)setGraphEditor:(id)fp8;
- (id)graphEditor;
- (id)initWithFrame:(NSRect)fp8;
- (void)dealloc;
- (BOOL)isOpaque;
- (void)drawRect:(NSRect)fp8;

@end

@interface GFGraphPathView (Private)
+ (BOOL)_isGraph:(id)fp8;
- (BOOL)_getPathFromGraph:(id)fp8 toNode:(id)fp12 withBuffer:(id *)fp16;
- (void)_setCurrentNode:(id)fp8;
- (id)_setPathWithBuffer:(id *)fp8;
- (void)_graphUpdated:(id)fp8;
- (void)__hierarchyControlAction:(id)fp8;
- (void)_finishInitialization;
@end
