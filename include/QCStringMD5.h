@interface QCStringMD5 : QCPatch
{
	QCStringPort *inputString;	// 156 = 0x9c
	QCStringPort *outputString;	// 160 = 0xa0
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
