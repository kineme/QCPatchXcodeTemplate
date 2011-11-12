@interface QCImageResize : QCPatch
{
	QCImagePort *inputImage;	// 156 = 0x9c
	QCIndexPort *inputMode;	// 160 = 0xa0
	QCIndexPort *inputCondition;	// 164 = 0xa4
	QCIndexPort *inputWidth;	// 168 = 0xa8
	QCIndexPort *inputHeight;	// 172 = 0xac
	QCImagePort *outputImage;	// 176 = 0xb0
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)_forwardRenderingFlag;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
