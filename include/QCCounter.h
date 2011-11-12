@interface QCCounter : QCPatch
{
	QCBooleanPort *inputSignal;	// 156 = 0x9c
	QCBooleanPort *inputSignalDown;	// 160 = 0xa0
	QCBooleanPort *inputSignalReset;	// 164 = 0xa4
	QCIndexPort *outputCount;	// 168 = 0xa8
	QCArray *_lastSignal;	// 172 = 0xac
	QCArray *_lastSignalDown;	// 176 = 0xb0
	QCArray *_lastSignalReset;	// 180 = 0xb4
	QCArray *_value;	// 184 = 0xb8
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (int)timeModeWithIdentifier:(id)fp8;
+ (id)stateArrays;
- (id)initWithIdentifier:(id)fp8;
- (void)dealloc;
- (BOOL)setup:(QCOpenGLContext *)context;
- (void)enable:(QCOpenGLContext*)context;
- (double)nextExecutionTime:(id)fp8 time:(double)fp12 arguments:(id)fp20;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
