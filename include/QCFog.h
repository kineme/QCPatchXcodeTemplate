@interface QCFog : QCPatch
{
	QCIndexPort *inputType;	// 156 = 0x9c
	QCColorPort *inputColor;	// 160 = 0xa0
	QCNumberPort *inputDensity;	// 164 = 0xa4
	QCNumberPort *inputStart;	// 168 = 0xa8
	QCNumberPort *inputEnd;	// 172 = 0xac
	QCIndexPort *inputQuality;	// 176 = 0xb0
	QCIndexPort *inputMode;	// 180 = 0xb4
	BOOL _modeSupported;	// 184 = 0xb8
}

+ (BOOL)isSafe;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
