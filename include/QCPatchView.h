@class QCPatch;

@interface QCPatchView : GFGraphView
{
	BOOL _hasSelectedPatches;	// 224 = 0xe0
	NSPoint _triggerPatchLinkStart;	// 228 = 0xe4
	NSPoint _triggerPatchLinkEnd;	// 236 = 0xec
	QCPatch *_triggerPatchLinkCandidate;	// 244 = 0xf4
	CGFloat _cascadeDistance;	// 248 = 0xf8
	void *_unused2[4];	// 252 = 0xfc
}

- (NSRect)_boundsForSelection;
- (BOOL)_hasSelectedPatches;
- (int)connectionTypeForConnection:(id)fp8;
- (id)_colorForConnection:(id)fp8;
- (BOOL)_editNode:(id)fp8;
- (void)_addSubgraph:(id)fp8;
- (void)copy:(id)sender;
- (void)cut:(id)sender;
- (void)paste:(id)sender;
- (void)duplicate:(id)sender;
- (NSPoint)_pastePoint;
- (void)__computeOrder:(id)fp8 context:(void *)fp12;
- (BOOL)__filterAll:(id)fp8;
- (void)__explode:(id)fp8 context:(void *)fp12;
- (id)_createSubgraphFromSelection:(id)fp8;
- (void)_explodeSubgraphFromSelection:(id)fp8;
- (id)menuForGraph;
- (void)setNeedsDisplayForNode:(id)fp8;
- (void)_selectionUpdated:(id)fp8;
- (void)setGraph:(id)fp8;
- (void)_finishInitialization;
- (void)dealloc;
- (BOOL)acceptDroppedFile:(id)fp8;
- (NSDragOperation)draggingEntered:(id <NSDraggingInfo>)sender;
- (void)_drawConnection:(id)fp8 fromPort:(id)fp12 point:(NSPoint)fp16 toPoint:(NSPoint)fp24;
- (void)drawTriggerPatchLink;
- (void)drawRect:(NSRect)fp8;
- (BOOL)performDroppedFile:(id)fp8 atPosition:(NSPoint)fp12;
- (BOOL)performDragOperation:(id <NSDraggingInfo>)sender;
- (BOOL)trackTriggerPatch:(id)fp8 fromNode:(id)fp12;
- (void)_writeSelectionToArchiver:(id)fp8 fromPoint:(NSPoint)fp12;
- (BOOL)_readSelectionFromUnarchiver:(id)fp8 toPoint:(NSPoint)fp12;
@end

@interface QCPatchView (Wrappers)
- (void)setPatch:(QCPatch*)thePatch;
- (QCPatch*)patch;
@end
