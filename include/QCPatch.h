extern NSString * const QCPatchDidActivateNotification;
extern NSString * const QCPatchDidDeactivateNotification;
extern NSString * const QCPatchDidExecuteNotification;
extern NSString * const QCPatchDidFailNotification;
extern NSString * const QCPatchDidRenderNotification;
extern NSString * const QCPatchDidStartRenderingNotification;
extern NSString * const QCPatchDidStopRenderingNotification;
extern NSString * const QCPatchLogMessageNotification;
extern NSString * const QCPatchParametersViewDidUpdateNotification;
extern NSString * const QCPatchTimebaseDidChangeNotification;

@interface QCPatch : GFGraph
{
	QCPatchRenderingInfo *_renderingInfo;	// 84 = 0x54
	QCRenderState *_renderState;	// 88 = 0x58
	int _executionMode;	// 92 = 0x5c
#if MAC_OS_X_VERSION_MAX_ALLOWED >= 1060
	QCRenderingManager *_renderingManager;	// 96 = 0x60
	QCPatchExecutionInfo *_executionInfo;	// 100 = 0x64
	NSUInteger _executionFlags;	// 104 = 0x68
	int _timebase;	// 108 = 0x6c
	QCBooleanPort *_enableInput;	// 112 = 0x70
	QCNumberPort *_timeInput;	// 116 = 0x74
	BOOL _enabled;	// 120 = 0x78
	NSUInteger _activeCount;	// 124 = 0x7c
	void *_observationInfo;	// 128 = 0x80
	id _proExtension;	// 132 = 0x84
	double _unused31[2];	// 136 = 0x88
	NSUInteger _unused32[1];	// 152 = 0x98
#else
	NSUInteger _executionFlags;       // 96 = 0x60
    int _timebase;      // 100 = 0x64
    QCBooleanPort *_enableInput;        // 104 = 0x68
    QCNumberPort *_timeInput;   // 108 = 0x6c
    BOOL _enabled;      // 112 = 0x70
    NSUInteger _activeCount;  // 116 = 0x74
    double _lastExecutionTime;  // 120 = 0x78
    NSUInteger _lastExecutionFrame;   // 128 = 0x80
    double _activationTime;     // 132 = 0x84
    void *_observationInfo;     // 140 = 0x8c
    id _proExtension;   // 144 = 0x90
    void *_unused3[3];  // 148 = 0x94	
#endif
}

+ (void)initialize;
+ (id)allocWithZone:(NSZone *)zone;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)fp8;
- (NSArray *)consumerSubpatches;	// This is likely pricey (no NSArrays are used internally, so they're synthesized on demand)
- (void)__setOrder:(id)fp8 forConsumerSubpatch:(id)fp12;
- (void)setOrder:(NSUInteger)fp8 forConsumerSubpatch:(id)fp12;
- (NSUInteger)orderForConsumerSubpatch:(id)fp8;
- (void)__setTimeBase:(id)fp8;
- (void)setTimebase:(int)fp8;
- (int)timebase;
- (NSArray *)customInputPorts;
- (NSArray *)customOutputPorts;
- (NSArray *)systemInputPorts;
- (NSArray *)systemOutputPorts;
- (void)applyFunctionOnSubpatches:(void *)fp8 context:(void *)fp12 recursive:(BOOL)fp16;
@end


typedef enum
{
	kQCPatchExecutionModeProcessor,	// 0 (e.g., "Math", "Image With String")
	kQCPatchExecutionModeConsumer,	// 1 (e.g., "Clear", "Billboard", "Lighting")
	kQCPatchExecutionModeProvider,	// 2 (e.g., "Mouse", "Interaction", "XML", "Directory Scanner", "Host Info")
	kQCPatchExecutionModeRII1050,	// 3 --- 10.5: RII;     10.6: unused
	kQCPatchExecutionModeRII1060,	// 4 --- 10.5: unused;  10.6: RII      ..?!
									// >4 --- invalid (editor throws exception when drawing)
} QCPatchExecutionMode;

typedef enum
{
	kQCPatchTimeModeIdle,			// 0 (e.g., "Math", "Image With String")
	kQCPatchTimeModeTimeBase,		// 1 (e.g., "Patch Time", "Interpolation", "Random")
	kQCPatchTimeModeNone,			// 2 (e.g., "Keyboard", "Mouse", "Tablet", "Repository Compositions")
} QCPatchTimeMode;


@interface QCPatch (Customization)
+ (BOOL)isSafe;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)identifier;
+ (QCPatchTimeMode)timeModeWithIdentifier:(id)identifier;
+ (NSArray*)stateKeysWithIdentifier:(id)identifier;	// NSArray of NSStrings for state keys
+ (id)serializedStateKeysWithIdentifier:(id)identifier;
+ (BOOL)usesLocalContextForIdentifier:(id)identifier;


// name =
//		graphicsContext.frameDidChange
//		graphicsContext.boundsDidChange
//		...?
- (void)receiveMessage:(id)fp8 name:(id)fp12 attributes:(id)fp16;

- (BOOL)setup:(QCOpenGLContext *)context;
- (void)enable:(QCOpenGLContext*)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (void)disable:(QCOpenGLContext*)context;
- (void)cleanup:(QCOpenGLContext *)context;
- (id)serializedValueForStateKey:(id)fp8;
- (void)setSerializedValue:(id)fp8 forStateKey:(id)fp12;

#if MAC_OS_X_VERSION_MAX_ALLOWED >= 1060
+ (id)cachedStateArrays;
+ (id)stateArrays;
+ (BOOL)supportsOptimizedExecutionForIdentifier:(id)identifier;	// default to false.  true for QCRenderInImage, QCCamera, QCGLSLShader, QCTrackBall, QCIterator, QCReplicator.  "optimized execution" apparently means something like "can tell you that it doesn't need to run until a specified time" (specified by -nextExecutionTime).
- (double)nextExecutionTime:(id)fp8 time:(double)time arguments:(NSDictionary*)args;
- (double)nextExecutionTimeForSubpatches:(id)fp8 time:(double)time arguments:(NSDictionary*)args;
- (void)invalidateDodForSubpatches;
#endif

@end

@interface QCPatch (Execution)
- (void)abortExecution;
- (void)suspendExecution;
- (void)resumeExecution;
- (BOOL)isExecutionSuspended;
@end

@interface QCPatch (Extensions)
+ (id)validateResourceURL:(id)fp8 withOptions:(id)fp12;
- (BOOL)inSafeMode;
- (id)dataWithContentsOfURL:(NSURL*)url error:(NSError**)fp12;
- (id)safeURLFromURL:(NSURL*)url;
- (id)safeURLFromString:(NSString*)urlString;
- (void)updateTimebase:(int)fp8;
- (void)setNeedsExecution;
- (BOOL)executeSubpatches:(double)time arguments:(NSDictionary*)args;
- (BOOL)debuggingMode;
- (BOOL)shouldAbortExecution;
- (void)setCustomizedName:(NSString*)name; // sets displayed patch name to "name" (in quotes)
- (BOOL)beginLocalContext;
- (void)endLocalContext;

#if MAC_OS_X_VERSION_MAX_ALLOWED >= 1060
- (void)setForceInputsUpdate;
- (void)_drawDirtyRect;
#endif
@end

@interface QCPatch (FCPImageExtensions)
- (id)inputForKey:(id)fp8;
- (id)_executionContext;
@end

@interface QCPatch (File)
+ (BOOL)canInstantiateWithFile:(NSString*)filePath;
+ (id)instantiateWithFile:(NSString*)filePath;
@end

@interface QCPatch (Override)
+ (BOOL)shouldLoadAttributes;
+ (Class)nodeClassDescriptionClass;
+ (Class)baseClass;
+ (Class)proxyPortClass;
+ (Class)connectionClass;
+ (Class)_listClass;
+ (id)_keyFromName:(id)fp8;
- (id)_baseKey;
- (void)_logMessage:(NSString*)format,...;
- (id)initWithIdentifier:(id)identifier;
- (void)finalize;
- (void)dealloc;
- (void)encodeWithCoder:(NSCoder *)aCoder;
- (id)initWithCoder:(NSCoder *)aDecoder;
- (id)copyWithZone:(NSZone *)zone;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (void)stateUpdated;
- (id)createInputPortWithArguments:(id)fp8 forKey:(id)fp12;
- (id)createOutputPortWithArguments:(id)fp8 forKey:(id)fp12;
- (BOOL)canAddNode:(id)fp8;
- (BOOL)addNode:(id)fp8 forKey:(id)fp12;
- (void)removeNodeForKey:(id)fp8;
- (BOOL)canCreateConnectionFromPort:(id)fp8 toPort:(id)fp12;
- (id)createConnectionFromPort:(id)fp8 toPort:(id)fp12 forKey:(id)fp16;
- (void)deleteConnectionForKey:(id)fp8;
- (id)createProxyPortWithOriginalPort:(id)fp8 forKey:(id)fp12;
- (void)deleteProxyPortForKey:(id)fp8;
- (void)deleteInputPortForKey:(id)fp8;
- (void)deleteOutputPortForKey:(id)fp8;
- (int)directionForPort:(id)fp8;
- (void)setValue:(id)fp8 forKey:(id)fp12;
- (void)setNilValueForKey:(id)fp8;
- (id)valueForKey:(id)fp8;
- (id)customInputPorts;
- (id)customOutputPorts;
- (id)proxyPortForOriginalPort:(id)fp8;
- (void)setInputPortOrder:(NSUInteger)fp8 forKey:(id)fp12;
- (void)setOutputPortOrder:(NSUInteger)fp8 forKey:(id)fp12;
- (void)setObservationInfo:(void *)fp8;
- (void *)observationInfo;
@end

@interface QCPatch (Private)
+ (BOOL)setShouldLoadAttributes:(BOOL)shouldLoadAttributes;
- (id)performanceCounters;
- (QCPatchRenderingInfo *)_renderingInfo;	// [QCPatchRenderingInfo context] is a QCOpenGLContext
- (QCOpenGLRenderState *)_renderState;
- (int)_executionMode;
- (id)_enableInput;
- (int)_checkExecutionMode;
- (void)_invalidateExecutionMode;
- (BOOL)__isPatchInUse:(id)fp8;
- (void)_invalidateTimeMode;
- (BOOL)_enabled;
- (NSUInteger)_activeCount;
- (void)_resetExecution;
- (BOOL)_setup:(id)fp8 state:(id)fp12;
- (void)_enable;
- (void)_activate;
- (BOOL)_execute:(double)time arguments:(NSDictionary*)args;
- (void)_deactivate;
- (void)_disable;
- (void)_cleanup;
- (int)_executionFlags;

#if MAC_OS_X_VERSION_MAX_ALLOWED >= 1060
- (void)_forwardRenderingFlag;
- (double)_nextExecutionTime;
- (void)_resetExecutionFlags;
- (BOOL)_executeSubpatches:(double)time arguments:(NSDictionary*)args;
- (BOOL)_renderAtTime:(double)time arguments:(NSDictionary*)args;
- (BOOL)__execute:(double)time arguments:(NSDictionary*)args;
- (double)_nextExecutionTime:(double)time arguments:(NSDictionary*)args;
- (void)_invalidateDodForSubpatches;
#endif

@end

#if MAC_OS_X_VERSION_MAX_ALLOWED >= 1060
@interface QCPatch (PrivateRuntime)
- (BOOL)prerenderAtTime:(double)time imageSizeHint:(NSSize)sizeHint arguments:(NSDictionary*)args;
@end
#endif

@interface QCPatch (QCInspector)
+ (id)inspectorNibNameWithIdentifier:(id)identifier;
+ (Class)inspectorClassWithIdentifier:(id)identifier;
@end

@interface QCPatch (QCNodeManager)
+ (id)_publicAttributesWithIdentifier:(id)identifier;
+ (id)_privateAttributesWithIdentifier:(id)identifier;
@end

@interface QCPatch (QCOpenGLContext)
- (BOOL)checkForGLError;
@end

@interface QCPatch (QCProFX)
+ (BOOL)getMatrixFrom:(id)fp8 toPatch:(id)fp12 matrix:(CGFloat *)fp16 ignoreWithin:(id)fp20 includeFromTransform:(_Bool)fp24;
- (QCMD5Sum)md5WithTime:(double)fp8 arguments:(id)fp16;
- (CGFloat *)getTransform;
- (BOOL)patchSetsTransform;
- (void)setPatchSetsTransform:(BOOL)fp8;
- (BOOL)patchIsInMacro:(id)fp8;
- (NSUInteger)getNumberOfInputImagePorts;
- (id)getNthInputImagePort:(NSUInteger)fp8;
- (NSUInteger)getNumberOfInputPorts;
- (id)getNthInputPort:(NSUInteger)fp8;
- (BOOL)getMatrix:(CGFloat *)fp8;
@end

@interface QCPatch (Registry)
+ (QCNodeManager *)patchManager;
+ (NSArray *)patchNames;
+ (QCPatch *)patchWithName:(NSString *)name;
+ (QCPatch *)createPatchWithName:(NSString *)name NS_RETURNS_RETAINED; // creates a new instance
+ (NSDictionary *)patchAttributesWithName:(NSString *)name;
+ (void)registerPatch:(QCPatch *)patch withName:(NSString *)name;
+ (void)loadPlugInAtPath:(NSString*)path;
+ (void)loadPlugInsInFolder:(NSString*)folder;
+ (void)loadPlugInsInLibrary:(NSString*)path; // loads stuff from [1]/Library/[path], where [1] is /System, /, and ~/ (changing on 10.7?)
@end

@interface QCPatch (Runtime)
- (BOOL)startRendering:(id)fp8 options:(id)fp12;
- (void)pauseRendering;
- (BOOL)render:(double)time arguments:(NSDictionary*)args;
- (void)resumeRendering;
- (void)stopRendering;
- (BOOL)isPausedRendering;
- (BOOL)isRendering;
- (QCContext *)renderingContext;
- (void)setRenderingFlags:(int)fp8;
- (int)renderingFlags;

#if MAC_OS_X_VERSION_MAX_ALLOWED >= 1060
- (double)nextExecutionTime:(double)time arguments:(NSDictionary*)args;
#endif
@end

@interface QCPatch (Search)
- (id)findSubpatchesWithName:(id)fp8 options:(NSUInteger)fp12;
@end

@interface QCPatch (StateKeys)
- (BOOL)isStateKey:(id)fp8;
- (id)valueForStateKey:(id)fp8;
- (void)setValue:(id)fp8 forStateKey:(id)fp12;
- (BOOL)boolForStateKey:(id)fp8;
- (void)setBool:(BOOL)fp8 forStateKey:(id)fp12;
- (int)integerForStateKey:(id)fp8;
- (void)setInteger:(int)fp8 forStateKey:(id)fp12;
- (double)doubleForStateKey:(id)fp8;
- (void)setDouble:(double)fp8 forStateKey:(id)fp16;
@end

@interface QCPatch (UserInterface)
+ (id)inspectorNibNameWithIdentifier:(id)identifier;
+ (Class)inspectorClassWithIdentifier:(id)identifier;
- (id)nodeActorForView:(id)fp8;
- (Class)graphViewClass;
- (void)__setValue:(id)fp8 forPortKey:(id)fp12;
- (void)_setIndex:(id)fp8 forPort:(id)fp12;
- (void)_setKey:(id)fp8 forPort:(id)fp12;

#if MAC_OS_X_VERSION_MAX_ALLOWED >= 1060
- (id)selectedNodes;
#endif
@end

@interface QCPatch (Wrappers)
- (NSArray *)inputs DEPRECATED_ATTRIBUTE;
- (NSArray *)outputs DEPRECATED_ATTRIBUTE;

// in the following, `attributes` is a dictionary of port metadata, corresponding to the `inputAttributes` section of the patch xml file
- (id)createInputWithPortClass:(Class)fp8 forKey:(id)fp12 attributes:(id)fp16;
- (id)createInputWithPortClass:(Class)fp8 forKey:(id)fp12 attributes:(id)fp16 arguments:(id)fp20 order:(NSUInteger)fp24;
- (void)setInputOrder:(NSUInteger)fp8 forKey:(id)fp12;

- (id)createOutputWithPortClass:(Class)fp8 forKey:(id)fp12 attributes:(id)fp16;
- (id)createOutputWithPortClass:(Class)fp8 forKey:(id)fp12 attributes:(id)fp16 arguments:(id)fp20 order:(NSUInteger)fp24;
- (void)setOutputOrder:(NSUInteger)fp8 forKey:(id)fp12;

- (void)deleteInputForKey:(id)fp8;
- (void)deleteOutputForKey:(id)fp8;

- (QCPatch *)parentPatch;
- (NSArray *)subpatches;
- (BOOL)canAddSubpatch:(QCPatch*)patch;
- (BOOL)addSubpatch:(QCPatch*)patch;
- (void)removeSubpatch:(QCPatch*)patch;
- (id)subpatchForKey:(id)fp8;
- (id)keyForSubpatch:(QCPatch*)patch;
- (id)pathForSubpatch:(QCPatch*)patch;
- (id)subpatchForPath:(id)fp8;

- (BOOL)canPublishPort:(id)fp8;
- (id)publishPort:(id)fp8;
- (void)unpublishPort:(id)fp8;
- (id)isPortPublished:(id)fp8;
@end
