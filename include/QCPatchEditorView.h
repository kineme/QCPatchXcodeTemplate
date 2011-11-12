#import "GFGraphEditorView.h"

@interface QCPatchEditorView : GFGraphEditorView
{
	BOOL _visualDebugging;	// 104 = 0x68
	void *_unused2[4];	// 108 = 0x6c
}

+ (void)initialize;
- (Class)valueClassForBinding:(id)fp8;
- (void)dealloc;
- (void)showInspector:(id)fp8;

@end

@interface QCPatchEditorView (Private)
- (void)__redrawBounds:(id)fp8;
- (void)__patchExecuted:(id)fp8;
- (void)__patchActivated:(id)fp8;
- (void)__patchStarted:(id)fp8;
- (void)setVisualizePatchExecution:(BOOL)fp8;
- (BOOL)visualizePatchExecution;
@end

@interface QCPatchEditorView (Wrappers)
+ (id)drawingCache;
- (void)setPatch:(id)fp8;
- (id)patch;
- (void)setPatchManager:(id)fp8;
- (id)patchManager;
@end
