@interface QCColorToComponents : QCPatch
{
	QCColorPort *inputColor;	// 156 = 0x9c
	QCNumberPort *output1;	// 160 = 0xa0
	QCNumberPort *output2;	// 164 = 0xa4
	QCNumberPort *output3;	// 168 = 0xa8
	QCNumberPort *outputAlpha;	// 172 = 0xac
	int _mode;	// 176 = 0xb0
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;

@end
