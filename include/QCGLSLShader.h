@interface QCGLSLShader : QCProgrammablePatch
{
	BOOL _softwareMode;	// 196 = 0xc4
	void *_vertexShader;	// 200 = 0xc8
	void *_fragmentShader;	// 204 = 0xcc
	void *_shader;	// 208 = 0xd0
	BOOL _shaderValid;	// 212 = 0xd4
	BOOL _updateAllUniforms;	// 213 = 0xd5
}

+ (Class)portClassFromParameterInfo:(id)fp8;
+ (BOOL)isSafe;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (BOOL)supportsOptimizedExecutionForIdentifier:(id)fp8;
+ (int)indicesType;
+ (NSArray*)sourceTypes;
- (void)_createShaders:(CGLContextObj)fp8;
- (void)_destroyShaders:(CGLContextObj)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)finalize;
- (void)dealloc;
- (id)_compileShader:(void *)fp8 withSource:(id)fp12 onContext:(CGLContextObj)fp16;
- (BOOL)_linkShaderOnContext:(CGLContextObj)fp8;
- (void)_loadShaders:(CGLContextObj)fp8;
- (id)compileSourceOfType:(id)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (void)cleanup:(QCOpenGLContext *)context;
@end

@interface QCGLSLShader (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
