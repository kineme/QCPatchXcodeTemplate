@interface QCImageDimensions : QCPatch
{
	QCImagePort *inputImage;	// 156 = 0x9c
	QCNumberPort *outputWidth;	// 160 = 0xa0
	QCNumberPort *outputHeight;	// 164 = 0xa4
	QCIndexPort *outputPixelsWide;	// 168 = 0xa8
	QCIndexPort *outputPixelsHigh;	// 172 = 0xac
	QCNumberPort *outputRatio;	// 176 = 0xb0
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;
- (void)receiveMessage:(id)fp8 name:(id)fp12 attributes:(id)fp16;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
