@interface QCColorFromComponents : QCPatch
{
	QCNumberPort *input1;	// 156 = 0x9c
	QCNumberPort *input2;	// 160 = 0xa0
	QCNumberPort *input3;	// 164 = 0xa4
	QCNumberPort *inputAlpha;	// 168 = 0xa8
	QCColorPort *outputColor;	// 172 = 0xac
	int _mode;	// 176 = 0xb0
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
