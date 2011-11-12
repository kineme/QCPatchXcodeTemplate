@interface QCDifferentialValue : QCPatch
{
	QCNumberPort *inputValue;	// 156 = 0x9c
	QCBooleanPort *inputResetSignal;	// 160 = 0xa0
	QCNumberPort *outputValue;	// 164 = 0xa4
	BOOL _lastResetSignal;	// 168 = 0xa8
	BOOL _integrate;	// 169 = 0xa9
	double _lastTime;	// 172 = 0xac
	double _lastValue;	// 180 = 0xb4
}

+ (BOOL)isSafe;
+ (int)timeModeWithIdentifier:(id)fp8;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
