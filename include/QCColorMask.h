@interface QCColorMask : QCPatch
{
	QCBooleanPort *inputRed;	// 156 = 0x9c
	QCBooleanPort *inputGreen;	// 160 = 0xa0
	QCBooleanPort *inputBlue;	// 164 = 0xa4
	QCBooleanPort *inputAlpha;	// 168 = 0xa8
}

+ (BOOL)isSafe;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
