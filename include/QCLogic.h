@interface QCLogic : QCPatch
{
	QCBooleanPort *inputValue1;	// 156 = 0x9c
	QCIndexPort *inputOperation;	// 160 = 0xa0
	QCBooleanPort *inputValue2;	// 164 = 0xa4
	QCBooleanPort *outputResult;	// 168 = 0xa8
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)nodeActorForView:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
