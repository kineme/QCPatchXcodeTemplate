
#import "GFGraphBrowserView.h"

@interface QCPatchBrowserView : GFGraphBrowserView
{
	void *_unused2[4];	// 120 = 0x78
}

+ (void)initialize;
+ (BOOL)_isGraph:(id)fp8;
- (Class)valueClassForBinding:(id)fp8;

@end

@interface QCPatchBrowserView (Wrappers)
- (void)setRootPatch:(id)fp8;
- (id)rootPatch;
- (id)currentPatch;
- (void)setCurrentPatch:(id)fp8;
- (void)setPatchEditor:(id)fp8;
- (id)patchEditor;
@end
