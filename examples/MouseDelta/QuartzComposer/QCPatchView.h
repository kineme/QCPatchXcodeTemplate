#import <GFGraphView.h>

@interface QCPatchView : GFGraphView
{
    BOOL _hasSelectedPatches;
    void *_unused2[4];
}

- (BOOL)_hasSelectedPatches;
- (id)_colorForConnection:(id)fp8;
- (BOOL)_editNode:(id)fp8;
- (void)_addSubgraph:(id)fp8;
- (void)__computeOrder:(id)fp8 context:(void *)fp12;
- (id)_createSubgraphFromSelection:(id)fp8;
- (id)menuForGraph;
- (void)setNeedsDisplayForNode:(id)fp8;
- (void)_selectionUpdated:(id)fp8;
- (void)setGraph:(id)fp8;
- (void)_finishInitialization;
- (void)dealloc;
- (BOOL)acceptDroppedFile:(id)fp8;
- (unsigned int)draggingEntered:(id)fp8;
- (BOOL)performDroppedFile:(id)fp8 atPosition:(NSPoint)fp12;
- (BOOL)performDragOperation:(id)fp8;
- (void)_writeSelectionToArchiver:(id)fp8 fromPoint:(NSPoint)fp12;
- (BOOL)_readSelectionFromUnarchiver:(id)fp8 toPoint:(NSPoint)fp12;

@end

@interface QCPatchView (Wrappers)
- (void)setPatch:(id)fp8;
- (id)patch;
@end
