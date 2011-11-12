@interface QCConditional : QCPatch
{
	QCNumberPort *inputValue1;	// 156 = 0x9c
	QCIndexPort *inputTest;	// 160 = 0xa0
	QCNumberPort *inputValue2;	// 164 = 0xa4
	QCNumberPort *inputTolerance;	// 168 = 0xa8
	QCBooleanPort *outputResult;	// 172 = 0xac
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
