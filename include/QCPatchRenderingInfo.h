@class QCContext;

@interface QCPatchRenderingInfo : NSObject
{
	QCContext *_context;	// 4 = 0x4
	double _profilingStats[9];	// 8 = 0x8
	int flags;	// 80 = 0x50
	NSUInteger pausedRendering;	// 84 = 0x54
	NSUInteger frameID;	// 88 = 0x58
	NSUInteger lastRenderedFrameID;	// 92 = 0x5c
	double frameTime;	// 96 = 0x60
	double executionDuration;	// 104 = 0x68
	double nextExecutionTime;	// 112 = 0x70
	NSUInteger patchTotalCount;	// 120 = 0x78
	NSUInteger patchActiveCount;	// 124 = 0x7c
	NSUInteger patchTraversedCount;	// 128 = 0x80
	NSUInteger patchExecutedCount;	// 132 = 0x84
	BOOL abortExecution;	// 136 = 0x88
	BOOL suspendExecution;	// 137 = 0x89
	pthread_mutex_t suspendMutex;	// 140 = 0x8c
}

- (id)initWithContext:(QCContext*)context;
- (void)finalize;
- (void)dealloc;
- (QCContext*)context;

@end
