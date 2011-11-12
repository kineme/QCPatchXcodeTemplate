@interface QCImageInfo : QCPatch
{
	QCImagePort *inputImage;	// 156 = 0x9c
	QCStringPort *outputSourceRepresentation;	// 160 = 0xa0
	QCNumberPort *outputPixelsOriginX;	// 164 = 0xa4
	QCNumberPort *outputPixelsOriginY;	// 168 = 0xa8
	QCNumberPort *outputPixelsSizeH;	// 172 = 0xac
	QCNumberPort *outputPixelsSizeV;	// 176 = 0xb0
	QCImagePort *outputDomainOfDefinition;	// 180 = 0xb4
	QCStringPort *outputColorSpace;	// 184 = 0xb8
	QCBooleanPort *outputHasAlpha;	// 188 = 0xbc
	QCStringPort *outputTransformation;	// 192 = 0xc0
	QCStructurePort *outputStaticMetadata;	// 196 = 0xc4
	QCStructurePort *outputForwardMetadata;	// 200 = 0xc8
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
