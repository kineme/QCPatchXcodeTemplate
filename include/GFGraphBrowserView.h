@class GFGraph, GFGraphEditorView, GFNode;

extern NSString * const GFGraphBrowserViewNodeDidSelectNotification;

@interface GFGraphBrowserView : NSView
{
	NSView *_insideView;	// 80 = 0x50
	GFGraph *_rootGraph;	// 84 = 0x54
	GFGraphEditorView *_graphEditor;	// 88 = 0x58
	NSBrowser *_browser;	// 92 = 0x5c
	GFNode *_currentNode;	// 96 = 0x60
	BOOL _displayNodes;	// 100 = 0x64
	void *_unused[4];	// 104 = 0x68
}

- (void)setCurrentNode:(id)fp8;
- (id)initWithFrame:(NSRect)frameRect;
- (void)encodeWithCoder:(NSCoder *)aCoder;
- (id)initWithCoder:(NSCoder *)aDecoder;
- (void)dealloc;
- (BOOL)isOpaque;
- (int)browser:(id)fp8 numberOfRowsInColumn:(int)fp12;
- (void)browser:(id)fp8 willDisplayCell:(id)fp12 atRow:(int)fp16 column:(int)fp20;
- (void)setRootGraph:(GFGraph*)graph;
- (GFGraph*)rootGraph;
- (id)currentNode;
- (void)__graphDidChange:(id)fp8;
- (void)setGraphEditor:(id)fp8;
- (id)graphEditor;
- (void)delete:(id)fp8;
- (void)keyDown:(NSEvent*)theEvent;
- (void)copy:(id)fp8;
- (void)cut:(id)fp8;
- (BOOL)validateMenuItem:(NSMenuItem*)menuItem;

@end

@interface GFGraphBrowserView (Private)
+ (BOOL)_isGraph:(id)fp8;
- (void)_graphUpdated:(id)fp8;
- (NSUInteger)_indexForNode:(id)fp8 inGraph:(id)fp12;
- (id)_nodeFromGraph:(id)fp8 atIndex:(NSUInteger)fp12;
- (NSUInteger)_nodesCountInGraph:(id)fp8;
- (id)_selectedNodeAtColumn:(NSUInteger)fp8;
- (void)_setCurrentNode:(id)fp8;
- (void)_selectItem:(id)fp8;
- (BOOL)_getPathFromGraph:(id)fp8 toNode:(id)fp12 withBuffer:(id *)fp16;
- (id)_setPathWithBuffer:(id *)fp8;
- (void)_setDisplayNodes:(BOOL)fp8;
- (BOOL)_displayNodes;
- (void)_finishInitialization;
@end
