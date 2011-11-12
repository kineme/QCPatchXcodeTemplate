
#import "GFGraphPathView.h"

@interface QCPatchPathView : GFGraphPathView
{
	void *_unused2[4];	// 116 = 0x74
}

+ (void)initialize;
+ (BOOL)_isGraph:(id)fp8;
- (Class)valueClassForBinding:(id)fp8;

@end

@interface QCPatchPathView (Wrappers)
- (void)setRootPatch:(id)fp8;
- (id)rootPatch;
- (id)currentPatch;
- (void)setCurrentPatch:(id)fp8;
- (void)setPatchEditor:(id)fp8;
- (id)patchEditor;
@end
