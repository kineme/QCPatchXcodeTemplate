@interface QCCube : QCRenderingPatch
{
	QCNumberPort *inputX;	// 176 = 0xb0
	QCNumberPort *inputY;	// 180 = 0xb4
	QCNumberPort *inputZ;	// 184 = 0xb8
	QCNumberPort *inputRX;	// 188 = 0xbc
	QCNumberPort *inputRY;	// 192 = 0xc0
	QCNumberPort *inputRZ;	// 196 = 0xc4
	QCNumberPort *inputWidth;	// 200 = 0xc8
	QCNumberPort *inputHeight;	// 204 = 0xcc
	QCNumberPort *inputDepth;	// 208 = 0xd0
	QCOpenGLPort_Color *inputColorFront;	// 212 = 0xd4
	QCOpenGLPort_Image *inputImageFront;	// 216 = 0xd8
	QCOpenGLPort_Color *inputColorLeft;	// 220 = 0xdc
	QCOpenGLPort_Image *inputImageLeft;	// 224 = 0xe0
	QCOpenGLPort_Color *inputColorRight;	// 228 = 0xe4
	QCOpenGLPort_Image *inputImageRight;	// 232 = 0xe8
	QCOpenGLPort_Color *inputColorBack;	// 236 = 0xec
	QCOpenGLPort_Image *inputImageBack;	// 240 = 0xf0
	QCOpenGLPort_Color *inputColorTop;	// 244 = 0xf4
	QCOpenGLPort_Image *inputImageTop;	// 248 = 0xf8
	QCOpenGLPort_Color *inputColorBottom;	// 252 = 0xfc
	QCOpenGLPort_Image *inputImageBottom;	// 256 = 0x100
	QCOpenGLPort_Blending *inputBlending;	// 260 = 0x104
	QCOpenGLPort_ZBuffer *inputZBuffer;	// 264 = 0x108
	QCOpenGLPort_Culling *inputCulling;	// 268 = 0x10c
}

+ (BOOL)isSafe;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (BOOL)allowsScissors:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
