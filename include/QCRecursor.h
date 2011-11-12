@interface QCRecursor : QCPatch
{
	QCBooleanPort *inputInitialize;	// 156 = 0x9c
	BOOL _updating;	// 160 = 0xa0
	BOOL _initialized;	// 161 = 0xa1
	QCArray *_values;	// 164 = 0xa4
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (int)timeModeWithIdentifier:(id)fp8;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (id)stateArrays;
- (id)initWithIdentifier:(id)fp8;
- (void)finalize_QCRecursor;
- (void)finalize;
- (void)dealloc;
- (void)_initNotifications;
- (void)_listenToNotification:(id)fp8;
- (void)_stateUpdated;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (BOOL)setup:(QCOpenGLContext *)context;
- (double)nextExecutionTime:(id)fp8 time:(double)fp12 arguments:(id)fp20;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
