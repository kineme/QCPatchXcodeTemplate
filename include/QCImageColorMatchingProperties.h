@interface QCImageColorMatchingProperties : QCPatch
{
	QCImagePort *inputImage;	// 156 = 0x9c
	QCIndexPort *inputColorMatching;	// 160 = 0xa0
	QCImagePort *outputImage;	// 164 = 0xa4
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
