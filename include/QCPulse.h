@interface QCPulse : QCPatch
{
	QCBooleanPort *inputSignal;	// 156 = 0x9c
	QCIndexPort *inputMode;	// 160 = 0xa0
	QCBooleanPort *outputSignal;	// 164 = 0xa4
	QCArray *_lastSignal;	// 168 = 0xa8
	QCArray *_inputSignal;	// 172 = 0xac
}

+ (BOOL)isSafe;
+ (int)timeModeWithIdentifier:(id)fp8;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (id)stateArrays;
- (id)initWithIdentifier:(id)fp8;
- (void)dealloc;
- (void)enable:(QCOpenGLContext*)context;
- (double)nextExecutionTime:(id)fp8 time:(double)fp12 arguments:(id)fp20;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
