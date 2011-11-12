@interface QCTime : QCPatch
{
	QCNumberPort *outputTime;	// 156 = 0x9c
}

+ (BOOL)isSafe;
+ (int)timeModeWithIdentifier:(id)fp8;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
