@interface QCStringTruncate : QCPatch
{
	QCStringPort *inputString;	// 156 = 0x9c
	QCIndexPort *inputDirection;	// 160 = 0xa0
	QCIndexPort *inputMode;	// 164 = 0xa4
	QCIndexPort *inputMax;	// 168 = 0xa8
	QCStringPort *inputToken;	// 172 = 0xac
	QCStringPort *outputString;	// 176 = 0xb0
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
