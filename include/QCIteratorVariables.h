@interface QCIteratorVariables : QCPatch
{
	QCIndexPort *outputIndex;	// 156 = 0x9c
	QCNumberPort *outputPosition;	// 160 = 0xa0
	QCIndexPort *outputCount;	// 164 = 0xa4
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (BOOL)_execute:(double)fp8 arguments:(id)fp16;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
