@interface QCMeshTransform : QCPatch
{
	QCMeshPort *inputMesh;	// 156 = 0x9c
	QCNumberPort *inputTransform_OriginX;	// 160 = 0xa0
	QCNumberPort *inputTransform_OriginY;	// 164 = 0xa4
	QCNumberPort *inputTransform_OriginZ;	// 168 = 0xa8
	QCNumberPort *inputTransform_ScaleX;	// 172 = 0xac
	QCNumberPort *inputTransform_ScaleY;	// 176 = 0xb0
	QCNumberPort *inputTransform_ScaleZ;	// 180 = 0xb4
	QCNumberPort *inputTransform_RotateX;	// 184 = 0xb8
	QCNumberPort *inputTransform_RotateY;	// 188 = 0xbc
	QCNumberPort *inputTransform_RotateZ;	// 192 = 0xc0
	QCNumberPort *inputTransform_TranslateX;	// 196 = 0xc4
	QCNumberPort *inputTransform_TranslateY;	// 200 = 0xc8
	QCNumberPort *inputTransform_TranslateZ;	// 204 = 0xcc
	QCMeshPort *outputMesh;	// 208 = 0xd0
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)_forwardRenderingFlag;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
