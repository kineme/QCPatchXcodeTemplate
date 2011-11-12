@interface QCQuadric : QCRenderingPatch
{
	QCNumberPort *inputX;	// 176 = 0xb0
	QCNumberPort *inputY;	// 180 = 0xb4
	QCNumberPort *inputZ;	// 184 = 0xb8
	QCNumberPort *inputRX;	// 188 = 0xbc
	QCNumberPort *inputRY;	// 192 = 0xc0
	QCNumberPort *inputRZ;	// 196 = 0xc4
	QCOpenGLPort_Color *inputColor;	// 200 = 0xc8
	QCOpenGLPort_Image *inputImage;	// 204 = 0xcc
	QCOpenGLPort_Blending *inputBlending;	// 208 = 0xd0
	QCOpenGLPort_ZBuffer *inputZBuffer;	// 212 = 0xd4
	QCOpenGLPort_Culling *inputCulling;	// 216 = 0xd8
	QCNumberPort *_scalePort;	// 220 = 0xdc
	QCNumberPort *_heightPort;	// 224 = 0xe0
	QCNumberPort *_basePort;	// 228 = 0xe4
	QCNumberPort *_topPort;	// 232 = 0xe8
	NSUInteger _numSlices;	// 236 = 0xec
	NSUInteger _numStacks;	// 240 = 0xf0
	struct GLUquadric *_quadric;	// 244 = 0xf4
	CGLContextObj _quadricCtx;	// 248 = 0xf8
}

+ (BOOL)isSafe;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (BOOL)allowsScissors:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (NSUInteger)numSlices;
- (void)setNumSlices:(NSUInteger)fp8;
- (NSUInteger)numStacks;
- (void)setNumStacks:(NSUInteger)fp8;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (void)cleanup:(QCOpenGLContext *)context;
@end

@interface QCQuadric (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
