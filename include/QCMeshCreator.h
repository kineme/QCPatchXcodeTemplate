@interface QCMeshCreator : QCPatch
{
	QCStructurePort *inputVertices;	// 156 = 0x9c
	QCStructurePort *_inputColors;	// 160 = 0xa0
	QCStructurePort *_inputNormals;	// 164 = 0xa4
	QCStructurePort *_inputIndices;	// 168 = 0xa8
	QCStructurePort *_inputTexcoords;	// 172 = 0xac
	QCNumberPort *_inputPointSize;	// 176 = 0xb0
	QCIndexPort *_inputSliceWidth;	// 180 = 0xb4
	QCIndexPort *_inputSliceHeight;	// 184 = 0xb8
	QCIndexPort *_inputSliceDepth;	// 188 = 0xbc
	QCStructurePort *_inputVolume;	// 192 = 0xc0
	QCOpenGLPort_Image *_inputTextures[16];	// 196 = 0xc4
	QCMeshPort *outputMesh;	// 260 = 0x104
	int _mode;	// 264 = 0x108
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
+ (NSUInteger)stateVersionWithIdentifier:(id)fp8;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (void)setMode:(int)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)_forwardRenderingFlag;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end

@interface QCMeshCreator (QCInspector)
+ (id)inspectorNibNameWithIdentifier:(id)fp8;
@end
