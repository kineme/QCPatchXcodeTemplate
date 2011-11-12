#import <GFGraph.h>
#import <QCPatchRenderingInfo.h>
#import <QCRenderState.h>
#import <QCBooleanPort.h>
#import <QCNumberPort.h>

@interface QCPatch : GFGraph
{
    QCPatchRenderingInfo *_renderingInfo;
    QCRenderState *_renderState;
    int _executionMode;
    unsigned int _executionFlags;
    int _timebase;
    QCBooleanPort *_enableInput;
    QCNumberPort *_timeInput;
    BOOL _enabled;
    unsigned int _activeCount;
    double _lastExecutionTime;
    unsigned int _lastExecutionFrame;
    double _activationTime;
    void *_observationInfo;
    id _proExtension;
    void *_unused3[3];
}

+ (void)initialize;
+ (id)allocWithZone:(NSZone *)fp8;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)fp8;
- (id)consumerSubpatches;
- (void)__setOrder:(id)fp8 forConsumerSubpatch:(id)fp12;
- (void)setOrder:(unsigned int)fp8 forConsumerSubpatch:(id)fp12;
- (unsigned int)orderForConsumerSubpatch:(id)fp8;
- (void)__setTimeBase:(id)fp8;
- (void)setTimebase:(int)fp8;
- (int)timebase;
- (id)customInputPorts;
- (id)customOutputPorts;
- (id)systemInputPorts;
- (id)systemOutputPorts;
- (void)applyFunctionOnSubpatches:(void *)fp8 context:(void *)fp12 recursive:(BOOL)fp16;

@end

@interface QCPatch (File)
+ (BOOL)canInstantiateWithFile:(id)fp8;
+ (id)instantiateWithFile:(id)fp8;
@end

@interface QCPatch (UserInterface)
+ (id)inspectorNibNameWithIdentifier:(id)fp8;
+ (Class)inspectorClassWithIdentifier:(id)fp8;
- (id)nodeActorForView:(id)fp8;
- (Class)graphViewClass;
- (void)__setValue:(id)fp8 forPortKey:(id)fp12;
- (void)_setIndex:(id)fp8 forPort:(id)fp12;
- (void)_setKey:(id)fp8 forPort:(id)fp12;
@end

@interface QCPatch (Wrappers)
- (id)inputs;
- (id)outputs;
- (id)createInputWithPortClass:(Class)fp8 forKey:(id)fp12 attributes:(id)fp16;
- (id)createInputWithPortClass:(Class)fp8 forKey:(id)fp12 attributes:(id)fp16 arguments:(id)fp20 order:(unsigned int)fp24;
- (void)setInputOrder:(unsigned int)fp8 forKey:(id)fp12;
- (id)createOutputWithPortClass:(Class)fp8 forKey:(id)fp12 attributes:(id)fp16;
- (id)createOutputWithPortClass:(Class)fp8 forKey:(id)fp12 attributes:(id)fp16 arguments:(id)fp20 order:(unsigned int)fp24;
- (void)setOutputOrder:(unsigned int)fp8 forKey:(id)fp12;
- (void)deleteInputForKey:(id)fp8;
- (void)deleteOutputForKey:(id)fp8;
- (id)parentPatch;
- (id)subpatches;
- (BOOL)canAddSubpatch:(id)fp8;
- (BOOL)addSubpatch:(id)fp8;
- (void)removeSubpatch:(id)fp8;
- (id)subpatchForKey:(id)fp8;
- (id)keyForSubpatch:(id)fp8;
- (id)pathForSubpatch:(id)fp8;
- (id)subpatchForPath:(id)fp8;
- (BOOL)canPublishPort:(id)fp8;
- (id)publishPort:(id)fp8;
- (void)unpublishPort:(id)fp8;
- (id)isPortPublished:(id)fp8;
@end

@interface QCPatch (Registry)
+ (id)patchManager;
+ (id)patchNames;
+ (id)patchWithName:(id)fp8;
+ (id)createPatchWithName:(id)fp8;
+ (id)patchAttributesWithName:(id)fp8;
+ (void)registerPatch:(id)fp8 withName:(id)fp12;
+ (void)loadPlugInAtPath:(id)fp8;
+ (void)loadPlugInsInFolder:(id)fp8;
+ (void)loadPlugInsInLibrary:(id)fp8;
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

@interface QCPatch (Private)
+ (BOOL)setShouldLoadAttributes:(BOOL)fp8;
- (id)performanceCounters;
- (id)_renderingInfo;
- (id)_renderState;
- (int)_executionMode;
- (id)_enableInput;
- (int)_checkExecutionMode;
- (void)_invalidateExecutionMode;
- (BOOL)__isPatchInUse:(id)fp8;
- (void)_invalidateTimeMode;
- (BOOL)_enabled;
- (unsigned int)_activeCount;
- (void)_resetExecution;
- (BOOL)_setup:(id)fp8 state:(id)fp12;
- (void)_enable;
- (void)_activate;
- (BOOL)_execute:(double)fp8 arguments:(id)fp16;
- (void)_deactivate;
- (void)_disable;
- (void)_cleanup;
- (int)_executionFlags;
@end

@interface QCPatch (Customization)
+ (BOOL)isSafe;
+ (int)executionModeWithIdentifier:(id)fp8;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (int)timeModeWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
+ (id)serializedStateKeysWithIdentifier:(id)fp8;
+ (BOOL)usesLocalContextForIdentifier:(id)fp8;
- (void)receiveMessage:(id)fp8 name:(id)fp12 attributes:(id)fp16;
- (BOOL)setup:(id)fp8;
- (void)enable:(id)fp8;
- (BOOL)execute:(id)fp8 time:(double)fp12 arguments:(id)fp20;
- (void)disable:(id)fp8;
- (void)cleanup:(id)fp8;
- (id)serializedValueForStateKey:(id)fp8;
- (void)setSerializedValue:(id)fp8 forStateKey:(id)fp12;
@end

@interface QCPatch (Extensions)
+ (id)validateResourceURL:(id)fp8 withOptions:(id)fp12;
- (BOOL)inSafeMode;
- (id)dataWithContentsOfURL:(id)fp8 error:(id *)fp12;
- (id)safeURLFromURL:(id)fp8;
- (id)safeURLFromString:(id)fp8;
- (void)updateTimebase:(int)fp8;
- (void)setNeedsExecution;
- (BOOL)executeSubpatches:(double)fp8 arguments:(id)fp16;
- (BOOL)debuggingMode;
- (BOOL)shouldAbortExecution;
- (void)setCustomizedName:(id)fp8;
- (BOOL)beginLocalContext;
- (void)endLocalContext;
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
- (void)_logMessage:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)finalize;
- (void)dealloc;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)copyWithZone:(NSZone *)fp8;
- (id)state;
- (BOOL)setState:(id)fp8;
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
- (void)setInputPortOrder:(unsigned int)fp8 forKey:(id)fp12;
- (void)setOutputPortOrder:(unsigned int)fp8 forKey:(id)fp12;
- (void)setObservationInfo:(void *)fp8;
- (void *)observationInfo;
@end

@interface QCPatch (QCNodeManager)
+ (id)_publicAttributesWithIdentifier:(id)fp8;
+ (id)_privateAttributesWithIdentifier:(id)fp8;
@end

@interface QCPatch (Execution)
- (void)abortExecution;
- (void)suspendExecution;
- (void)resumeExecution;
- (BOOL)isExecutionSuspended;
@end

@interface QCPatch (Runtime)
- (BOOL)startRendering:(id)fp8 options:(id)fp12;
- (void)pauseRendering;
- (BOOL)render:(double)fp8 arguments:(id)fp16;
- (void)resumeRendering;
- (void)stopRendering;
- (BOOL)isPausedRendering;
- (BOOL)isRendering;
- (id)renderingContext;
- (void)setRenderingFlags:(int)fp8;
- (int)renderingFlags;
@end

@interface QCPatch (QCProFX)
+ (BOOL)getMatrixFrom:(id)fp8 toPatch:(id)fp12 matrix:(float *)fp16 ignoreWithin:(id)fp20 includeFromTransform:(_Bool)fp24;
- (QCMD5Sum)md5WithTime:(double)fp8 arguments:(id)fp16;
- (float *)getTransform;
- (BOOL)patchSetsTransform;
- (void)setPatchSetsTransform:(BOOL)fp8;
- (BOOL)patchIsInMacro:(id)fp8;
- (unsigned int)getNumberOfInputImagePorts;
- (id)getNthInputImagePort:(unsigned int)fp8;
- (unsigned int)getNumberOfInputPorts;
- (id)getNthInputPort:(unsigned int)fp8;
- (BOOL)getMatrix:(float *)fp8;
@end

@interface QCPatch (FCPImageExtensions)
- (id)inputForKey:(id)fp8;
- (id)_executionContext;
@end

@interface QCPatch (QCOpenGLContext)
- (BOOL)checkForGLError;
@end

