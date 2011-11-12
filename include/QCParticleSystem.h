@interface QCParticleSystem : QCPatch
{
	QCIndexPort *inputCount;	// 156 = 0x9c
	QCNumberPort *inputPositionX;	// 160 = 0xa0
	QCNumberPort *inputPositionY;	// 164 = 0xa4
	QCNumberPort *inputPositionZ;	// 168 = 0xa8
	QCColorPort *inputColor;	// 172 = 0xac
	QCNumberPort *inputVelocityMinX;	// 176 = 0xb0
	QCNumberPort *inputVelocityMaxX;	// 180 = 0xb4
	QCNumberPort *inputVelocityMinY;	// 184 = 0xb8
	QCNumberPort *inputVelocityMaxY;	// 188 = 0xbc
	QCNumberPort *inputVelocityMinZ;	// 192 = 0xc0
	QCNumberPort *inputVelocityMaxZ;	// 196 = 0xc4
	QCNumberPort *inputMinSize;	// 200 = 0xc8
	QCNumberPort *inputMaxSize;	// 204 = 0xcc
	QCNumberPort *inputLifeTime;	// 208 = 0xd0
	QCNumberPort *inputAttraction;	// 212 = 0xd4
	QCNumberPort *inputGravity;	// 216 = 0xd8
	QCOpenGLPort_Image *inputImage;	// 220 = 0xdc
	QCOpenGLPort_Blending *inputBlending;	// 224 = 0xe0
	QCNumberPort *_inputSizeDelta;	// 228 = 0xe4
	QCNumberPort *_inputRedDelta;	// 232 = 0xe8
	QCNumberPort *_inputGreenDelta;	// 236 = 0xec
	QCNumberPort *_inputBlueDelta;	// 240 = 0xf0
	QCNumberPort *_inputOpacityDelta;	// 244 = 0xf4
	QCNumberPort *_inputFinalSize;	// 248 = 0xf8
	QCColorPort *_inputFinalColor;	// 252 = 0xfc
	QCInterpolationPort *_inputSizeInterpolation;	// 256 = 0x100
	QCInterpolationPort *_inputRedInterpolation;	// 260 = 0x104
	QCInterpolationPort *_inputGreenInterpolation;	// 264 = 0x108
	QCInterpolationPort *_inputBlueInterpolation;	// 268 = 0x10c
	QCInterpolationPort *_inputOpacityInterpolation;	// 272 = 0x110
	double _startUpDelay;	// 276 = 0x114
	BOOL _interpolateSizeAndColor;	// 284 = 0x11c
	NSInteger _seed;	// 288 = 0x120
	NSUInteger _particleCount;	// 292 = 0x124
	NSUInteger _maxParticleCount;	// 296 = 0x128
	NSUInteger _activeParticleCount;	// 300 = 0x12c
	void *_particleBuffer;	// 304 = 0x130
}

+ (BOOL)isSafe;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (int)timeModeWithIdentifier:(id)fp8;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (NSUInteger)stateVersionWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)_initParticle:(CDAnonymousStruct7 *)fp8 atTime:(double)fp12;
- (BOOL)setup:(QCOpenGLContext *)context;
- (double)nextExecutionTime:(id)fp8 time:(double)fp12 arguments:(id)fp20;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (void)cleanup:(QCOpenGLContext *)context;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (double)startUpDelay;
- (void)setStartUpDelay:(double)fp8;
- (BOOL)interpolateSizeAndColor;
- (void)setInterpolateSizeAndColor:(BOOL)fp8;
@end

@interface QCParticleSystem (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
