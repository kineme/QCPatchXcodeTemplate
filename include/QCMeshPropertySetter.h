@interface QCMeshPropertySetter : QCPatch
{
	QCMeshPort *inputMesh;	// 156 = 0x9c
	QCStructurePort *inputValue;	// 160 = 0xa0
	QCIndexPort *_inputProperty;	// 164 = 0xa4
	QCMeshPort *outputMesh;	// 168 = 0xa8
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (void)_forwardRenderingFlag;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
