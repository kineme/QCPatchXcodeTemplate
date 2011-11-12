@interface QCMeshMaterialGetter : QCPatch
{
	QCMeshPort *inputMesh;	// 156 = 0x9c
	QCIndexPort *inputIndex;	// 160 = 0xa0
	QCImagePort *outputImage;	// 164 = 0xa4
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)_forwardRenderingFlag;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
