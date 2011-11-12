@interface QCSmooth : QCPatch
{
	QCNumberPort *inputValue;	// 156 = 0x9c
	QCNumberPort *inputIncreasingDuration;	// 160 = 0xa0
	QCInterpolationPort *inputIncreasingInterpolation;	// 164 = 0xa4
	QCNumberPort *inputDecreasingDuration;	// 168 = 0xa8
	QCInterpolationPort *inputDecreasingInterpolation;	// 172 = 0xac
	QCNumberPort *outputValue;	// 176 = 0xb0
	BOOL _useTangent;	// 180 = 0xb4
	BOOL _needsRender;	// 181 = 0xb5
	QCArray *_lastValue;	// 184 = 0xb8
	QCArray *_tangent;	// 188 = 0xbc
	QCArray *_startValue;	// 192 = 0xc0
	QCArray *_startTangent;	// 196 = 0xc4
	QCArray *_newValue;	// 200 = 0xc8
	QCArray *_lastTime;	// 204 = 0xcc
	QCArray *_startTime;	// 208 = 0xd0
	QCArray *_iterationUpdate;	// 212 = 0xd4
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (int)timeModeWithIdentifier:(id)fp8;
+ (NSUInteger)stateVersionWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
+ (id)stateArrays;
- (id)initWithIdentifier:(id)fp8;
- (void)dealloc;
- (BOOL)setup:(QCOpenGLContext *)context;
- (double)nextExecutionTime:(id)fp8 time:(double)fp12 arguments:(id)fp20;
- (void)_computeValueForTime:(double)fp8 duration:(double)fp16 interpolation:(id)fp24 iteration:(NSUInteger)fp28;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end

@interface QCSmooth (QCInspector)
+ (id)inspectorNibNameWithIdentifier:(id)fp8;
@end
