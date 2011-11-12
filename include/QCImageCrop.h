@interface QCImageCrop : QCPatch
{
	QCImagePort *inputImage;	// 156 = 0x9c
	QCNumberPort *inputRectangle_X;	// 160 = 0xa0
	QCNumberPort *inputRectangle_Y;	// 164 = 0xa4
	QCNumberPort *inputRectangle_Z;	// 168 = 0xa8
	QCNumberPort *inputRectangle_W;	// 172 = 0xac
	QCImagePort *outputImage;	// 176 = 0xb0
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
