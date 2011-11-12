


@class QCContext, QCPatch;

@interface QCRenderState : NSObject
{
	QCPatch *_patch;	// 4 = 0x4
	QCContext *_context;	// 8 = 0x8
	void *_unused[4];	// 12 = 0xc
}

- (id)initWithContext:(id)fp8 patch:(id)fp12;
- (void)dealloc;
- (id)patch;
- (id)context;

@end
