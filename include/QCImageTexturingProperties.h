@interface QCImageTexturingProperties : QCPatch
{
	QCImagePort *inputImage;	// 156 = 0x9c
	QCIndexPort *inputTarget;	// 160 = 0xa0
	QCIndexPort *inputMipmaps;	// 164 = 0xa4
	QCNumberPort *inputScaleX;	// 168 = 0xa8
	QCNumberPort *inputScaleY;	// 172 = 0xac
	QCNumberPort *inputRotate;	// 176 = 0xb0
	QCNumberPort *inputTranslateX;	// 180 = 0xb4
	QCNumberPort *inputTranslateY;	// 184 = 0xb8
	QCImagePort *outputImage;	// 188 = 0xbc
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
