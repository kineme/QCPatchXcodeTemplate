@interface QCClear : QCRenderingPatch
{
	QCColorPort *inputColor;	// 176 = 0xb0
	BOOL _clearDepthBuffer;	// 180 = 0xb4
	BOOL _clearColorBuffer;	// 181 = 0xb5
}

+ (BOOL)isSafe;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (void)setClearsColorBuffer:(BOOL)fp8;
- (BOOL)clearsColorBuffer;
- (void)setClearsDepthBuffer:(BOOL)fp8;
- (BOOL)clearsDepthBuffer;
- (id)initWithIdentifier:(id)fp8;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)allowsScissors:(id)fp8;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end

@interface QCClear (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
