@interface QCRoundValue : QCPatch
{
	QCNumberPort *inputValue;	// 156 = 0x9c
	QCNumberPort *outputRound;	// 160 = 0xa0
	QCNumberPort *outputFloor;	// 164 = 0xa4
	QCNumberPort *outputCeil;	// 168 = 0xa8
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
