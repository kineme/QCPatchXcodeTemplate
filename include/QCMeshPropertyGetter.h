@interface QCMeshPropertyGetter : QCPatch
{
	QCMeshPort *inputMesh;	// 156 = 0x9c
	QCIndexPort *_inputProperty;	// 160 = 0xa0
	QCStructurePort *outputValue;	// 164 = 0xa4
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (void)_forwardRenderingFlag;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
