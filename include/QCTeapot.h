@interface QCTeapot : QCPatch
{
	QCNumberPort *inputX;	// 156 = 0x9c
	QCNumberPort *inputY;	// 160 = 0xa0
	QCNumberPort *inputZ;	// 164 = 0xa4
	QCNumberPort *inputRX;	// 168 = 0xa8
	QCNumberPort *inputRY;	// 172 = 0xac
	QCNumberPort *inputRZ;	// 176 = 0xb0
	QCNumberPort *inputScale;	// 180 = 0xb4
	QCOpenGLPort_Color *inputColor;	// 184 = 0xb8
	QCOpenGLPort_Image *inputImage;	// 188 = 0xbc
	QCOpenGLPort_Blending *inputBlending;	// 192 = 0xc0
	QCOpenGLPort_ZBuffer *inputZBuffer;	// 196 = 0xc4
	QCOpenGLPort_Culling *inputCulling;	// 200 = 0xc8
	GLuint _displayListID;	// 204 = 0xcc
}

+ (BOOL)isSafe;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (void)cleanup:(QCOpenGLContext *)context;
@end
