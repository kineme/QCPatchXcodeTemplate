@interface QCColorMixer : QCPatch
{
	QCColorPort *inputColor1;	// 156 = 0x9c
	QCColorPort *inputColor2;	// 160 = 0xa0
	QCNumberPort *inputMix;	// 164 = 0xa4
	QCInterpolationPort *inputInterpolation;	// 168 = 0xa8
	QCColorPort *outputColor;	// 172 = 0xac
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
