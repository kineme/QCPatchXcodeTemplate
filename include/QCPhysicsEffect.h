@interface QCPhysicsEffect : QCPatch
{
	QCBooleanPort *inputSampling;	// 156 = 0x9c
	NSMutableArray *_inputValues;	// 160 = 0xa0
	NSMutableArray *_outputValues;	// 164 = 0xa4
	QCArray *_times;	// 168 = 0xa8
	QCArray *_value;	// 172 = 0xac
	QCArray *_savedOutputValues;	// 176 = 0xb0
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (int)timeModeWithIdentifier:(id)fp8;
+ (NSUInteger)stateVersionWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
+ (id)stateArrays;
- (NSUInteger)numberOfInputs;
- (void)setNumberOfInputs:(NSUInteger)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)dealloc;
- (BOOL)setState:(NSDictionary*)state;
- (NSDictionary*)state;
- (BOOL)setup:(QCOpenGLContext *)context;
- (double)nextExecutionTime:(id)fp8 time:(double)fp12 arguments:(id)fp20;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end

@interface QCPhysicsEffect (QCInspector)
+ (id)inspectorNibNameWithIdentifier:(id)fp8;
@end
