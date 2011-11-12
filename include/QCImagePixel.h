@interface QCImagePixel : QCPatch
{
	QCImagePort *inputImage;	// 156 = 0x9c
	QCNumberPort *inputPixelX;	// 160 = 0xa0
	QCNumberPort *inputPixelY;	// 164 = 0xa4
	QCIndexPort *inputColorSpace;	// 168 = 0xa8
	QCNumberPort *outputRed;	// 172 = 0xac
	QCNumberPort *outputGreen;	// 176 = 0xb0
	QCNumberPort *outputBlue;	// 180 = 0xb4
	QCNumberPort *outputAlpha;	// 184 = 0xb8
	QCImagePixelBuffer *_tileBuffer;	// 188 = 0xbc
	NSRect _tileBounds;	// 192 = 0xc0
	NSDictionary *_options;	// 208 = 0xd0
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;
- (void)receiveMessage:(id)fp8 name:(id)fp12 attributes:(id)fp16;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (void)cleanup:(QCOpenGLContext *)context;
@end
