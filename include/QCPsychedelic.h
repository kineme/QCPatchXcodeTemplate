@interface QCPsychedelic : QCPatch
{
	QCOpenGLPort_Image *inputImage;	// 156 = 0x9c
	QCOpenGLPort_Color *inputColor;	// 160 = 0xa0
	QCNumberPort *inputSpeed;	// 164 = 0xa4
	QCNumberPort *inputScale;	// 168 = 0xa8
	QCOpenGLPort_Blending *inputBlending;	// 172 = 0xac
	BOOL _clearDepthBuffer;	// 176 = 0xb0
}

+ (BOOL)isSafe;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (int)timeModeWithIdentifier:(id)fp8;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)setClearsDepthBuffer:(BOOL)fp8;
- (BOOL)clearsDepthBuffer;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end

@interface QCPsychedelic (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
