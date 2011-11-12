#import <QCContext.h>

@interface QCPatchRenderingInfo : NSObject
{
    QCContext *_context;
    double _profilingStats[9];
    int flags;
    unsigned int pausedRendering;
    unsigned int frameID;
    double frameTime;
    unsigned int patchTotalCount;
    unsigned int patchActiveCount;
    unsigned int patchTraversedCount;
    unsigned int patchExecutedCount;
    BOOL abortExecution;
    BOOL suspendExecution;
    pthread_mutex_t suspendMutex;
}

- (id)initWithContext:(id)fp8;
- (void)finalize;
- (void)dealloc;
- (id)context;

@end


