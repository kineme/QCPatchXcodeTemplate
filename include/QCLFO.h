@interface QCLFO : QCPatch
{
	QCIndexPort *inputType;	// 156 = 0x9c
	QCNumberPort *inputPeriod;	// 160 = 0xa0
	QCNumberPort *inputPhase;	// 164 = 0xa4
	QCNumberPort *inputAmplitude;	// 168 = 0xa8
	QCNumberPort *inputOffset;	// 172 = 0xac
	QCNumberPort *inputPWMRatio;	// 176 = 0xb0
	QCNumberPort *outputValue;	// 180 = 0xb4
	double _randomTime;	// 184 = 0xb8
	double _randomValue;	// 192 = 0xc0
	NSInteger _seed;	// 200 = 0xc8
}

+ (BOOL)isSafe;
+ (int)timeModeWithIdentifier:(id)fp8;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (BOOL)setup:(QCOpenGLContext *)context;
- (double)nextExecutionTime:(id)fp8 time:(double)fp12 arguments:(id)fp20;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
