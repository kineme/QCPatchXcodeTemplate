@interface QCTablet : QCPatch
{
	QCNumberPort *outputX;	// 156 = 0x9c
	QCNumberPort *outputY;	// 160 = 0xa0
	QCNumberPort *outputTiltX;	// 164 = 0xa4
	QCNumberPort *outputTiltY;	// 168 = 0xa8
	QCNumberPort *outputPressure;	// 172 = 0xac
	QCBooleanPort *outputTipButton;	// 176 = 0xb0
	QCBooleanPort *outputLowerButton;	// 180 = 0xb4
	QCBooleanPort *outputUpperButton;	// 184 = 0xb8
	NSRect _bounds;	// 188 = 0xbc
}

+ (BOOL)isSafe;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (int)timeModeWithIdentifier:(id)fp8;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;
- (void)receiveMessage:(id)fp8 name:(id)fp12 attributes:(id)fp16;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
