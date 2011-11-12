@interface QCInterpolation : QCPatch
{
	QCNumberPort *inputValue1;	// 156 = 0x9c
	QCNumberPort *inputValue2;	// 160 = 0xa0
	QCNumberPort *inputDuration;	// 164 = 0xa4
	QCNumberPort *inputTension;	// 168 = 0xa8
	QCIndexPort *inputRepeat;	// 172 = 0xac
	QCNumberPort *outputValue;	// 176 = 0xb0
	BOOL _compatibilityMode;	// 180 = 0xb4
	QCInterpolationPort *_interpolationPort;	// 184 = 0xb8
	NSUInteger _pointCount;	// 188 = 0xbc
	NSUInteger _pointMax;	// 192 = 0xc0
	double *_pointTimeBuffer;	// 196 = 0xc4
	double *_pointValueBuffer;	// 200 = 0xc8
	struct __Spline *_splineRef;	// 204 = 0xcc
}

+ (BOOL)isSafe;
+ (int)timeModeWithIdentifier:(id)fp8;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (NSUInteger)stateVersionWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
+ (id)serializedStateKeysWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)_finalize_QCInterpolation;
- (void)finalize;
- (void)dealloc;
- (void)_updateSpline;
- (double)valueAtTime:(double)fp8;
- (void)setCustomInterpolation:(BOOL)fp8;
- (BOOL)customInterpolation;
- (NSUInteger)controlPointsCount;
- (double)timeForControlPoint:(NSUInteger)fp8;
- (double)valueForControlPoint:(NSUInteger)fp8;
- (NSUInteger)addControlPointAtTime:(double)fp8 withValue:(double)fp16;
- (BOOL)setControlPoint:(NSUInteger)fp8 time:(double)fp12 value:(double)fp20;
- (void)removeControlPoint:(NSUInteger)fp8;
- (int)nearestControlPointAtTime:(double)fp8 andValue:(double)fp16 withTolerance:(double)fp24;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (double)nextExecutionTime:(id)fp8 time:(double)fp12 arguments:(id)fp20;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end

@interface QCInterpolation (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
