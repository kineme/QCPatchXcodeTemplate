@interface QCPhysics : QCPatch
{
	QCBooleanPort *inputSampling;	// 156 = 0x9c
	QCNumberPort *inputFriction;	// 160 = 0xa0
	NSMutableArray *_inputValues;	// 164 = 0xa4
	NSMutableArray *_outputValues;	// 168 = 0xa8
	QCArray *_pos;	// 172 = 0xac
	QCArray *_inputPos;	// 176 = 0xb0
	QCArray *_speed;	// 180 = 0xb4
	QCArray *_needRedraw;	// 184 = 0xb8
	QCArray *_times;	// 188 = 0xbc
	QCArray *_updateTimes;	// 192 = 0xc0
	QCArray *_dts;	// 196 = 0xc4
	QCArray *_savSample;	// 200 = 0xc8
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (int)timeModeWithIdentifier:(id)fp8;
+ (NSUInteger)stateVersionWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
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

@interface QCPhysics (QCInspector)
+ (id)inspectorNibNameWithIdentifier:(id)fp8;
@end
