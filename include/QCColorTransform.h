@interface QCColorTransform : QCPatch
{
	QCColorPort *inputColor;	// 156 = 0x9c
	QCNumberPort *inputHue;	// 160 = 0xa0
	QCNumberPort *inputSaturation;	// 164 = 0xa4
	QCNumberPort *inputLuminosity;	// 168 = 0xa8
	QCNumberPort *inputAlpha;	// 172 = 0xac
	QCColorPort *outputColor;	// 176 = 0xb0
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
