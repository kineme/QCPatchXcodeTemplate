@interface QCRandom : QCPatch
{
	QCNumberPort *inputMin;	// 156 = 0x9c
	QCNumberPort *inputMax;	// 160 = 0xa0
	QCNumberPort *outputValue;	// 164 = 0xa4
	double _variability;	// 168 = 0xa8
	BOOL _usePerlinNoise;	// 176 = 0xb0
	double _lastTime;	// 180 = 0xb4
	double _lastSampleTime;	// 188 = 0xbc
	char *_perm;	// 196 = 0xc4
	double *_grad;	// 200 = 0xc8
	NSInteger _seed;	// 204 = 0xcc
}

+ (BOOL)isSafe;
+ (int)timeModeWithIdentifier:(id)fp8;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
+ (NSUInteger)stateVersionWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)_finalize_Noise;
- (void)dealloc;
- (void)finalize;
- (BOOL)setup:(QCOpenGLContext *)context;
- (double)_noise2d:(double)fp8 y:(double)fp16 min:(double)fp24 max:(double)fp32;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (BOOL)validateValue:(id *)fp8 forKey:(id)fp12 error:(NSError**)fp16;
@end

@interface QCRandom (QCInspector)
+ (id)inspectorNibNameWithIdentifier:(id)fp8;
@end
