@interface QCMeshMaterialSetter : QCPatch
{
	QCMeshPort *inputMesh;	// 156 = 0x9c
	QCIndexPort *inputIndex;	// 160 = 0xa0
	QCImagePort *inputImage;	// 164 = 0xa4
	QCMeshPort *outputMesh;	// 168 = 0xa8
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)_forwardRenderingFlag;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
