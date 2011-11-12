@interface QCSampleHold : QCPatch
{
	QCVirtualPort *inputSampleValue;	// 156 = 0x9c
	QCBooleanPort *inputSampling;	// 160 = 0xa0
	QCBooleanPort *inputResetSignal;	// 164 = 0xa4
	QCVirtualPort *outputValue;	// 168 = 0xa8
	QCArray *_lastResetSignal;	// 172 = 0xac
	QCArray *_value;	// 176 = 0xb0
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (int)timeModeWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)finalize_QCSampleHold;
- (void)finalize;
- (void)dealloc;
- (BOOL)setup:(QCOpenGLContext *)context;
- (double)nextExecutionTime:(id)fp8 time:(double)fp12 arguments:(id)fp20;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
