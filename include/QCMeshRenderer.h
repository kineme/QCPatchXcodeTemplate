@interface QCMeshRenderer : QCRenderingPatch
{
	QCNumberPort *inputX;	// 176 = 0xb0
	QCNumberPort *inputY;	// 180 = 0xb4
	QCNumberPort *inputZ;	// 184 = 0xb8
	QCNumberPort *inputRX;	// 188 = 0xbc
	QCNumberPort *inputRY;	// 192 = 0xc0
	QCNumberPort *inputRZ;	// 196 = 0xc4
	QCNumberPort *inputWidth;	// 200 = 0xc8
	QCNumberPort *inputHeight;	// 204 = 0xcc
	QCNumberPort *inputDepth;	// 208 = 0xd0
	QCOpenGLPort_Color *inputColor;	// 212 = 0xd4
	QCOpenGLPort_Mesh *inputMesh;	// 216 = 0xd8
	QCOpenGLPort_MeshKitBlending *inputBlending;	// 220 = 0xdc
	QCOpenGLPort_ZBuffer *inputZBuffer;	// 224 = 0xe0
	QCOpenGLPort_MeshKitCulling *inputCulling;	// 228 = 0xe4
	QCArray *_colors;	// 232 = 0xe8
	QCMesh *_savedMesh;	// 236 = 0xec
	QCImageTextureBuffer *_backFaces;	// 240 = 0xf0
	QCImageTextureBuffer *_volumeTexture;	// 244 = 0xf4
	BOOL _wireframe;	// 248 = 0xf8
}

+ (BOOL)isSafe;
+ (NSUInteger)stateVersionWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (BOOL)allowsInteraction;
- (id)initWithIdentifier:(id)fp8;
- (void)finalize;
- (void)dealloc;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)automaticStateSet:(id)fp8;
- (CGFloat)depth;
- (CGPoint)position;
- (void)setPosition:(CGPoint)fp8;
- (CGFloat)rotation;
- (void)setRotation:(CGFloat)fp8;
- (CGFloat)scaleX;
- (CGFloat)scaleY;
- (void)setScaleX:(CGFloat)fp8;
- (void)setScaleY:(CGFloat)fp8;
- (BOOL)allowsScissors:(id)fp8;
- (struct _QCDod *)createDodForContext:(id)fp8;
- (BOOL)execute:(id)fp8 time:(double)time arguments:(id)arguments;
@end

@interface QCMeshRenderer (QCInspector)
+ (id)inspectorNibNameWithIdentifier:(id)fp8;
@end
