@interface QCPatchRenderer : QCPatch
{
	QCStringPort *inputPath;	// 156 = 0x9c
	int _compositionMode;	// 160 = 0xa0
	GFList *_compositionInputs;	// 164 = 0xa4
	GFList *_compositionOutputs;	// 168 = 0xa8
	BOOL _hasTimebase;	// 172 = 0xac
	QCPatch *_compositionPatch;	// 176 = 0xb0
	NSString *_compositionLocation;	// 180 = 0xb4
	BOOL _usingOpenglContext;	// 184 = 0xb8
}

+ (BOOL)isSafe;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (int)timeModeWithIdentifier:(id)fp8;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
+ (id)serializedStateKeysWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)dealloc;
- (id)compositionInputs;
- (void)setCompositionInputs:(id)fp8;
- (id)compositionOutputs;
- (void)setCompositionOutputs:(id)fp8;
- (void)updateTimebase:(int)fp8;
- (void)setHasTimebase:(BOOL)fp8;
- (int)_checkExecutionMode;
- (int)executionMode;
- (void)setExecutionMode:(int)fp8;
- (BOOL)_addInput:(Class)fp8 forKey:(id)fp12;
- (void)_removeInputForKey:(id)fp8;
- (NSUInteger)inputCount;
- (id)_inputAtIndex:(NSUInteger)fp8;
- (BOOL)_addOutput:(Class)fp8 forKey:(id)fp12;
- (void)_removeOutputForKey:(id)fp8;
- (NSUInteger)outputCount;
- (id)_outputAtIndex:(NSUInteger)fp8;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (void)autoconfigureWithProtocol:(id)fp8;
- (void)autoconfigureWithPatch:(id)fp8;
- (void)_setComposition:(id)fp8 context:(id)fp12;
- (BOOL)setup:(QCOpenGLContext *)context;
- (void)enable:(QCOpenGLContext*)context;
- (void)_invalidateDodForSubpatches;
- (double)nextExecutionTime:(id)fp8 time:(double)fp12 arguments:(id)fp20;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (void)disable:(QCOpenGLContext*)context;
- (void)cleanup:(QCOpenGLContext *)context;
@end

@interface QCPatchRenderer (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
