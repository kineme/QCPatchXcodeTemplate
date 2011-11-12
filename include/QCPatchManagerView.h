
#import "GFNodeManagerView.h"

@interface QCPatchManagerView : GFNodeManagerView
{
	void *_unused2[4];	// 124 = 0x7c
}

+ (void)initialize;
- (id)initWithFrame:(NSRect)fp8;
- (id)_filterStringsForNode:(id)fp8;
- (id)_cellContentForNode:(id)fp8 columnIdentifier:(id)fp12;
- (int)_compareNode:(id)fp8 withNode:(id)fp12 usingColumnIdentifier:(id)fp16 ascending:(BOOL)fp20;

@end
