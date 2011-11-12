@interface QCImageKernel : QCProgrammablePatch
{
	QCImagePort *outputImage;	// 196 = 0xc4
	BOOL _advancedMode;	// 200 = 0xc8
	BOOL _autoDOD;	// 201 = 0xc9
	BOOL _samplerOptions;	// 202 = 0xca
	CIKernel *_ciKernel;	// 204 = 0xcc
	CIFilter *_ciFilter;	// 208 = 0xd0
	CIFilter *_ciJSFilter;	// 212 = 0xd4
	NSMutableArray *_argumentCache;	// 216 = 0xd8
	void *_jsContext;	// 220 = 0xdc
	NSMutableArray *_kernels;	// 224 = 0xe0
	NSMutableArray *_mainArguments;	// 228 = 0xe4
	BOOL _jsSyntaxOK;	// 232 = 0xe8
	BOOL _jsIsExecuting;	// 233 = 0xe9
	BOOL _kernelsAreCompiling;	// 234 = 0xea
}

+ (void)initialize;
+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (int)indicesType;
+ (NSArray*)sourceTypes;
+ (id)stateKeysWithIdentifier:(id)fp8;
+ (NSUInteger)stateVersionWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)_finalize_QCImageKernel;
- (void)finalize;
- (void)dealloc;
- (id)createInputWithPortClass:(Class)fp8 forKey:(id)fp12 attributes:(id)fp16 arguments:(id)fp20 order:(in_addr_t)fp24;
- (id)_javascriptFromKernel:(id)fp8;
- (id)_compileKernels:(id)fp8;
- (id)_filterMainSource:(id)fp8;
- (id)_parseMain:(id)fp8;
- (id)_executeMain:(id)fp8 result:(id *)fp12;
- (id)_executeScript:(id)fp8;
- (id)_setupKernelStandardMode:(id)fp8;
- (id)compileSourceOfType:(NSString*)sourceType;
- (id)attributesForParameterPortWithInfo:(id)fp8 name:(id)fp12 index:(in_addr_t)fp16;
- (void)setAutomaticDOD:(BOOL)fp8;
- (BOOL)automaticDOD;
- (JSContextRef)_jsContext;
- (void)setShowSamplerOptions:(BOOL)fp8;
- (BOOL)showSamplerOptions;
- (void)setAdvancedMode:(BOOL)fp8;
- (void)receiveMessage:(id)fp8 name:(id)fp12 attributes:(id)fp16;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (void)cleanup:(QCOpenGLContext *)context;

@end

@interface QCImageKernel (File)
+ (BOOL)canInstantiateWithFile:(NSString*)filePath;
+ (id)instantiateWithFile:(NSString*)filePath;
@end

@interface QCImageKernel (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
