@interface QCSignal : QCPatch
{
	QCIndexPort *inputMode;	// 156 = 0x9c
	QCNumberPort *inputParam;	// 160 = 0xa0
	QCBooleanPort *outputSignal;	// 164 = 0xa4
	double _fireTime;	// 168 = 0xa8
}

+ (BOOL)isSafe;
+ (int)timeModeWithIdentifier:(id)fp8;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)enable:(QCOpenGLContext*)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
