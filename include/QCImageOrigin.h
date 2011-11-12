@interface QCImageOrigin : QCPatch
{
	QCImagePort *inputImage;	// 156 = 0x9c
	QCNumberPort *outputPixelsOriginX;	// 160 = 0xa0
	QCNumberPort *outputPixelsOriginY;	// 164 = 0xa4
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
