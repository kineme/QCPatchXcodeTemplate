#import <QCContext.h>

@class QCPatch;

@interface QCRenderState : NSObject
{
    QCPatch *_patch;
    QCContext *_context;
    void *_unused[4];
}

- (id)initWithContext:(id)fp8 patch:(id)fp12;
- (void)dealloc;
- (id)patch;
- (id)context;

@end

