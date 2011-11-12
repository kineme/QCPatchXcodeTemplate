@interface QCOpenGLPort_Mesh : QCMeshPort <QCOpenGLPort>
{
	QCMesh *_savedMesh;	// 160 = 0xa0
	QCArray *_vertices;	// 164 = 0xa4
	QCArray *_colors;	// 168 = 0xa8
	QCArray *_normals;	// 172 = 0xac
	QCArray *_indices;	// 176 = 0xb0
	QCArray *_texCoords;	// 180 = 0xb4
	CDAnonymousStruct2 _saveVertexState;	// 184 = 0xb8
	CDAnonymousStruct2 _saveColorState;	// 220 = 0xdc
	CDAnonymousStruct2 _saveNormalState;	// 256 = 0x100
	CDAnonymousStruct2 _saveTexCoordState;	// 292 = 0x124
	CDAnonymousStruct2 _saveIndexState;	// 328 = 0x148
	QCImagePort_Cache *_texturePort[16];	// 364 = 0x16c
	int _saveLineSmoothHint;	// 428 = 0x1ac
	int _sourceFunction;	// 432 = 0x1b0
	int _destFunction;	// 436 = 0x1b4
	unsigned char _saveLineSmoothEnabled;	// 440 = 0x1b8
	unsigned char _saveBlendingEnabled;	// 441 = 0x1b9
	void *_unused6[4];	// 444 = 0x1bc
}

- (id)initWithNode:(GFNode*)node arguments:(NSDictionary*)args;
- (void)dealloc;
- (void)setRawValue:(id)fp8;
- (void)setOnOpenGLContext:(QCOpenGLContext*)context;
- (void)unsetOnOpenGLContext:(QCOpenGLContext*)context;
@end
