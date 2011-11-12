@interface QCOpenCL : QCProgrammablePatch
{
	NSString *_kernelName;	// 196 = 0xc4
	CFArrayRef _argumentInfos;	// 200 = 0xc8
	CFArrayRef _argumentCache;	// 204 = 0xcc
	CFArrayRef _resultInfos;	// 208 = 0xd0
	CFArrayRef _functions;	// 212 = 0xd4
	CFArrayRef _kernels;	// 216 = 0xd8
	cl_kernel *_kernel;	// 220 = 0xdc
	cl_program *_program;	// 224 = 0xe0
	cl_device_id *_device;	// 228 = 0xe4
	cl_device_id *_currentDevice;	// 232 = 0xe8
	BOOL _useBestDevice;	// 236 = 0xec
	BOOL _useLocalKernel;	// 237 = 0xed
	BOOL _automaticThreadDimensions;	// 238 = 0xee
	BOOL _automaticOutputDimensions;	// 239 = 0xef
	BOOL _customPixelFormat;	// 240 = 0xf0
	BOOL _zeroOutputs;	// 241 = 0xf1
	NSUInteger _deviceIndex;	// 244 = 0xf4
	NSUInteger _selectedKernel;	// 248 = 0xf8
	NSUInteger _workGroupSize;	// 252 = 0xfc
	QCStreamManager *_manager;	// 256 = 0x100
	QCPatch *_rootPatch;	// 260 = 0x104
	id _ui;	// 264 = 0x108
	NSUInteger _saveGlobalSize[3];	// 268 = 0x10c
	NSUInteger _saveLocalSize[3];	// 280 = 0x118
	NSString *_saveResultInfoString;	// 292 = 0x124
	BOOL _sample;	// 296 = 0x128
	double _sampleTime;	// 300 = 0x12c
	BOOL _settingsVisible;	// 308 = 0x134
}
@property (readwrite,assign) NSUInteger selectedKernel;

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (int)indicesType;
+ (NSArray*)sourceTypes;
+ (id)stateKeysWithIdentifier:(id)fp8;
+ (NSUInteger)stateVersionWithIdentifier:(id)fp8;
- (id)serializedValueForStateKey:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)finalize_QCOpenCL;
- (void)finalize;
- (void)dealloc;
- (id)compileSourceOfType:(NSString*)sourceType;
- (void)_initRootPatch;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (id)attributesForParameterPortWithInfo:(id)fp8 name:(id)fp12 index:(NSUInteger)fp16;
- (id)createInputWithPortClass:(Class)fp8 forKey:(id)fp12 attributes:(id)fp16 arguments:(id)fp20 order:(NSUInteger)fp24;
- (id)_kernelNames;
- (id)_functionNames;
- (NSUInteger)_lineOfFunction:(NSUInteger)fp8;
- (void)_setUI:(id)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (void)cleanup:(QCOpenGLContext *)context;
- (NSUInteger)selectedKernel;
- (void)setSelectedKernel:(NSUInteger)fp8;
@end

@interface QCOpenCL (GlobalSourceCode)
+ (cl_program *)programForComposition:(id)fp8;
+ (void)setProgram:(cl_program *)fp8 forComposition:(id)fp12;
+ (void)setDevice:(cl_context *)fp8 forComposition:(id)fp12;
+ (cl_context *)deviceForComposition:(id)fp8;
+ (void)setSource:(id)fp8 forComposition:(id)fp12;
+ (id)sourceForComposition:(id)fp8;
+ (CFArrayRef)functionNamesForComposition:(id)fp8;
+ (void)initialize;
+ (void)releaseCompositions:(id)fp8;
+ (void)addPatch:(id)fp8 forComposition:(id)fp12;
+ (void)removePatch:(id)fp8 forComposition:(id)fp12;
+ (id)parseFunctionsForComposition:(id)fp8;
+ (id)compileStatusForComposition:(id)fp8;
+ (id)kernelNamesForComposition:(id)fp8;
@end

@interface QCOpenCL (KernelInfoStrings)
- (id)globalWorkSizeString;
- (id)localWorkSizeString;
- (id)inputArgumentsInfoString;
- (id)outputArgumentsInfoString;
- (id)computeDeviceString;
- (void)setComputeDeviceString:(id)fp8;
- (void)setOutputArgumentsInfoString:(id)fp8;
- (void)setInputArgumentsInfoString:(id)fp8;
- (void)setGlobalWorkSizeString:(id)fp8;
- (void)setLocalWorkSizeString:(id)fp8;
@end

@interface QCOpenCL (OpenCL)
- (BOOL)_updateDevice;
- (void)_setGlobalSize:(NSUInteger *)fp8 count:(NSUInteger)fp12;
- (void)_setLocalSize:(NSUInteger *)fp8 count:(NSUInteger)fp12;
- (void)_updateInputArguments;
- (void)_updateOutputArguments:(CFArrayRef)fp8;
- (id)_compileGlobalKernel:(id)fp8;
- (id)_compileKernel:(id)fp8;
- (void)_computeKernelDimensions:(CFArrayRef)fp8 kernelExecutionInfo:(struct _KernelExecutionInfo *)fp12 globalDim:(NSUInteger *)fp16 globalDimCount:(NSUInteger *)fp20 localDim:(NSUInteger *)fp24 localDimCount:(NSUInteger *)fp28;
- (CFArrayRef)_executeKernel:(CFArrayRef)fp8 context:(id)fp12 kernelExecutionInfo:(struct _KernelExecutionInfo *)fp16;
@end

@interface QCOpenCL (Parsing)
- (void)_parseFunctionsAndKernels:(id)fp8;
- (id)_parseKernel:(id)fp8 kernelName:(id)fp12;
- (void)setUseBestDevice:(BOOL)fp8;
- (void)setDeviceIndex:(NSUInteger)fp8;
- (void)setAutomaticThreadDimensions:(BOOL)fp8;
- (void)setAutomaticOutputDimensions:(BOOL)fp8;
- (void)setCustomPixelFormat:(BOOL)fp8;
- (id)_setSelectedKernel:(NSUInteger)fp8 source:(id)fp12;
- (void)setSelectedKernel:(NSUInteger)fp8;
- (void)setUseLocalKernel:(BOOL)fp8;
@end

@interface QCOpenCL (PerformanceSampling)
- (void)setSampleString:(id)fp8;
- (id)sampleString;
- (void)setSampleKernel:(BOOL)fp8;
@end

@interface QCOpenCL (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
