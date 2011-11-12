@interface QCAnchorPosition : QCPatch
{
	QCIndexPort *inputMode;	// 156 = 0x9c
	QCNumberPort *inputX;	// 160 = 0xa0
	QCNumberPort *inputY;	// 164 = 0xa4
	QCNumberPort *inputWidth;	// 168 = 0xa8
	QCNumberPort *inputHeight;	// 172 = 0xac
	QCNumberPort *outputX;	// 176 = 0xb0
	QCNumberPort *outputY;	// 180 = 0xb4
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;
- (void)receiveMessage:(id)fp8 name:(id)fp12 attributes:(id)fp16;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;

@end
