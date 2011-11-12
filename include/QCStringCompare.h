@interface QCStringCompare : QCPatch
{
	QCStringPort *inputString1;	// 156 = 0x9c
	QCStringPort *inputString2;	// 160 = 0xa0
	QCIndexPort *outputResult;	// 164 = 0xa4
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
