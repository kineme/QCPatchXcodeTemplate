@interface QCImageTransform : QCPatch
{
	QCImagePort *inputImage;	// 156 = 0x9c
	QCNumberPort *inputTransform_OriginX;	// 160 = 0xa0
	QCNumberPort *inputTransform_OriginY;	// 164 = 0xa4
	QCNumberPort *inputTransform_ScaleX;	// 168 = 0xa8
	QCNumberPort *inputTransform_ScaleY;	// 172 = 0xac
	QCNumberPort *inputTransform_Rotate;	// 176 = 0xb0
	QCNumberPort *inputTransform_TranslateX;	// 180 = 0xb4
	QCNumberPort *inputTransform_TranslateY;	// 184 = 0xb8
	QCImagePort *outputImage;	// 188 = 0xbc
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (void)_forwardRenderingFlag;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
