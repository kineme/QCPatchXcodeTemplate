@interface QCThreadPatch : QCPatch
{
	pthread_mutex_t _parameterMutex;	// 156 = 0x9c
	id _result;	// 200 = 0xc8
	id _argument;	// 204 = 0xcc
	SEL _threadSelector;	// 208 = 0xd0
	pthread_mutex_t _threadMutex;	// 212 = 0xd4
	pthread_cond_t _threadCondition;	// 256 = 0x100
	BOOL _threadRunning;	// 284 = 0x11c
	void *_unused4[4];	// 288 = 0x120
}

+ (id)allocWithZone:(NSZone *)zone;
- (id)initWithIdentifier:(id)fp8;
- (void)_finalize_QCThreadPatch;
- (void)finalize;
- (void)dealloc;
- (void)_thread:(id)argument;
- (BOOL)runThreadWithSelector:(SEL)threadSelector argument:(id)argument;
- (BOOL)isThreadRunning;
- (void)waitUntilThreadDone;
- (void)setThreadResult:(id)fp8;
- (id)getThreadResult;
- (void)setThreadArgument:(id)argument;
- (id)getThreadArgument;
- (double)nextExecutionTime:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
