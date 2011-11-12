@interface QCCore3DLoader : QCPatch
{
	BOOL _allMeshes;	// 156 = 0x9c
	BOOL _normalize;	// 157 = 0x9d
	QCStringPort *inputPath;	// 160 = 0xa0
	QCPort *_outputPort;	// 164 = 0xa4
}

+ (BOOL)isSafe;
+ (NSUInteger)stateVersionWithIdentifier:(id)fp8;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)_setMeshTransformation:(id)fp8;
- (BOOL)_updateMesh;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (void)setMeshPath:(id)fp8;
- (void)setAllMeshes:(BOOL)fp8;
- (void)setNormalize:(BOOL)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end

@interface QCCore3DLoader (File)
+ (BOOL)canInstantiateWithFile:(NSString*)filePath;
+ (id)instantiateWithFile:(NSString*)filePath;
@end

@interface QCCore3DLoader (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
