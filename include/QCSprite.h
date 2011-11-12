@interface QCSprite : QCRenderingPatch
{
	QCNumberPort *inputX;	// 176 = 0xb0
	QCNumberPort *inputY;	// 180 = 0xb4
	QCNumberPort *inputZ;	// 184 = 0xb8
	QCNumberPort *inputRX;	// 188 = 0xbc
	QCNumberPort *inputRY;	// 192 = 0xc0
	QCNumberPort *inputRZ;	// 196 = 0xc4
	QCNumberPort *inputWidth;	// 200 = 0xc8
	QCNumberPort *inputHeight;	// 204 = 0xcc
	QCOpenGLPort_Color *inputColor;	// 208 = 0xd0
	QCOpenGLPort_Image *inputImage;	// 212 = 0xd4
	QCOpenGLPort_Image *inputMask;	// 216 = 0xd8
	QCOpenGLPort_Blending *inputBlending;	// 220 = 0xdc
	QCOpenGLPort_ZBuffer *inputZBuffer;	// 224 = 0xe0
	QCOpenGLPort_Culling *inputCulling;	// 228 = 0xe4
	BOOL _antialiasing;	// 232 = 0xe8
	QCImageTextureBuffer *_borderMask;	// 236 = 0xec
}

+ (BOOL)isSafe;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (BOOL)allowsInteraction;
+ (id)stateKeysWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;
- (void)cleanup:(QCOpenGLContext *)context;
- (struct _QCDod *)createDodForContext:(id)fp8;
- (CGPoint)position;
- (void)setPosition:(CGPoint)fp8;
- (CGFloat)depth;
- (CGFloat)rotation;
- (void)setRotation:(CGFloat)fp8;
- (CGFloat)scaleX;
- (CGFloat)scaleY;
- (void)setScaleX:(CGFloat)fp8;
- (void)setScaleY:(CGFloat)fp8;
- (BOOL)automaticStateSet:(id)fp8;
- (BOOL)allowsScissors:(id)fp8;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end

@interface QCSprite (QCInspector)
+ (id)inspectorNibNameWithIdentifier:(id)fp8;
@end
