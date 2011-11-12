@interface QCTimeLoop : QCPatch
{
	QCIndexPort *inputCount;	// 156 = 0x9c
	QCInterpolationPort *inputInterpolation;	// 160 = 0xa0
	QCNumberPort *inputStart;	// 164 = 0xa4
	QCNumberPort *inputEnd;	// 168 = 0xa8
}

+ (BOOL)isSafe;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
