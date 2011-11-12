@interface QCClock : QCPatch
{
	QCBooleanPort *inputStartSignal;	// 156 = 0x9c
	QCBooleanPort *inputStopSignal;	// 160 = 0xa0
	QCBooleanPort *inputResetSignal;	// 164 = 0xa4
	QCNumberPort *outputTime;	// 168 = 0xa8
	BOOL _lastStartSignal;	// 172 = 0xac
	BOOL _lastStopSignal;	// 173 = 0xad
	BOOL _lastResetSignal;	// 174 = 0xae
	double _startTime;	// 176 = 0xb0
	double _stopTime;	// 184 = 0xb8
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (int)timeModeWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;
- (double)nextExecutionTime:(id)fp8 time:(double)fp12 arguments:(id)fp20;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;

@end
