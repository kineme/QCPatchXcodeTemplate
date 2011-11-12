@interface QCDirectoryScanner : QCThreadPatch
{
	QCStringPort *inputPath;	// 304 = 0x130
	QCBooleanPort *inputSignal;	// 308 = 0x134
	QCStructurePort *outputFiles;	// 312 = 0x138
	QCBooleanPort *outputSignal;	// 316 = 0x13c
	int _fileMode;	// 320 = 0x140
	BOOL _recursive;	// 324 = 0x144
	BOOL _keylessStructures;	// 325 = 0x145
	BOOL _lastSignal;	// 326 = 0x146
	BOOL _rerun;	// 327 = 0x147
}

+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
+ (NSUInteger)stateVersionWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (void)setFileMode:(int)fp8;
- (int)fileMode;
- (void)setRecursive:(BOOL)fp8;
- (BOOL)recursive;
- (BOOL)setup:(QCOpenGLContext *)context;
- (void)_folderThread:(id)fp8;
- (double)nextExecutionTime:(id)fp8 time:(double)fp12 arguments:(id)fp20;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (void)cleanup:(QCOpenGLContext *)context;
@end

@interface QCDirectoryScanner (File)
+ (BOOL)canInstantiateWithFile:(NSString*)filePath;
+ (id)instantiateWithFile:(NSString*)filePath;
@end

@interface QCDirectoryScanner (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
