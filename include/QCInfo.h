@interface QCInfo : QCPatch
{
	QCNumberPort *outputVersion;	// 156 = 0x9c
	QCBooleanPort *outputSafeMode;	// 160 = 0xa0
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;

@end
