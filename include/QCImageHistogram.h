@interface QCImageHistogram : QCPatch
{
	QCImagePort *inputImage;	// 156 = 0x9c
	QCStructurePort *outputRedHistogram;	// 160 = 0xa0
	QCStructurePort *outputGreenHistogram;	// 164 = 0xa4
	QCStructurePort *outputBlueHistogram;	// 168 = 0xa8
	QCStructurePort *outputAlphaHistogram;	// 172 = 0xac
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
