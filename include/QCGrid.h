@interface QCGrid : QCPatch
{
	QCNumberPort *inputX;	// 156 = 0x9c
	QCNumberPort *inputY;	// 160 = 0xa0
	QCNumberPort *inputZ;	// 164 = 0xa4
	QCNumberPort *inputRX;	// 168 = 0xa8
	QCNumberPort *inputRY;	// 172 = 0xac
	QCNumberPort *inputRZ;	// 176 = 0xb0
	QCNumberPort *inputWidth;	// 180 = 0xb4
	QCNumberPort *inputHeight;	// 184 = 0xb8
	QCIndexPort *inputWidthResolution;	// 188 = 0xbc
	QCIndexPort *inputHeightResolution;	// 192 = 0xc0
	QCOpenGLPort_Blending *inputBlending;	// 196 = 0xc4
	QCOpenGLPort_ZBuffer *inputZBuffer;	// 200 = 0xc8
	QCOpenGLPort_Culling *inputCulling;	// 204 = 0xcc
	float *_gridArray;	// 208 = 0xd0
}

+ (BOOL)isSafe;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;
- (void)_drawGrid:(id)fp8;
- (void)cleanup:(QCOpenGLContext *)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
