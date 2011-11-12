@interface QCHotZone : QCPatch
{
	QCNumberPort *inputHitX;	// 156 = 0x9c
	QCNumberPort *inputHitY;	// 160 = 0xa0
	QCNumberPort *inputX;	// 164 = 0xa4
	QCNumberPort *inputY;	// 168 = 0xa8
	QCNumberPort *inputZ;	// 172 = 0xac
	QCNumberPort *inputRX;	// 176 = 0xb0
	QCNumberPort *inputRY;	// 180 = 0xb4
	QCNumberPort *inputRZ;	// 184 = 0xb8
	QCNumberPort *inputWidth;	// 188 = 0xbc
	QCNumberPort *inputHeight;	// 192 = 0xc0
	QCImagePort *inputMask;	// 196 = 0xc4
	QCNumberPort *outputHit;	// 200 = 0xc8
	QCNumberPort *outputZoneX;	// 204 = 0xcc
	QCNumberPort *outputZoneY;	// 208 = 0xd0
	QCNumberPort *outputMaskX;	// 212 = 0xd4
	QCNumberPort *outputMaskY;	// 216 = 0xd8
	QCNumberPort *outputTopLeftX;	// 220 = 0xdc
	QCNumberPort *outputTopLeftY;	// 224 = 0xe0
	QCNumberPort *outputTopRightX;	// 228 = 0xe4
	QCNumberPort *outputTopRightY;	// 232 = 0xe8
	QCNumberPort *outputBottomLeftX;	// 236 = 0xec
	QCNumberPort *outputBottomLeftY;	// 240 = 0xf0
	QCNumberPort *outputBottomRightX;	// 244 = 0xf4
	QCNumberPort *outputBottomRightY;	// 248 = 0xf8
	QCImagePixelBuffer *_pixelBuffer;	// 252 = 0xfc
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (void)cleanup:(QCOpenGLContext *)context;
@end
