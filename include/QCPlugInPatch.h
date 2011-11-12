@interface QCPlugInPatch : QCPatch
{
	QCPlugIn *_plugIn;	// 156 = 0x9c
	NSUInteger _executionLevel;	// 160 = 0xa0
	CFDictionaryRef _inputValueCache;	// 164 = 0xa4
	CFDictionaryRef _propertyPorts;	// 168 = 0xa8
}

+ (BOOL)shouldCreateIvarPorts;
+ (id)attributesWithIdentifier:(id)identifier;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (int)timeModeWithIdentifier:(id)identifier;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fpidentifier8;
- (id)initWithIdentifier:(id)fp8;
- (void)_finalize_QCPlugInPatch;
- (void)finalize;
- (void)dealloc;
- (id)_addInputPortWithClass:(Class)fp8 forKey:(id)fp12 attributes:(id)fp16;
- (id)_addOutputPortWithClass:(Class)fp8 forKey:(id)fp12 attributes:(id)fp16;
- (QCPlugIn*)plugIn;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (void)receiveMessage:(id)fp8 name:(id)fp12 attributes:(id)fp16;
- (BOOL)setup:(QCOpenGLContext *)context;
- (void)enable:(QCOpenGLContext*)context;
- (double)nextExecutionTime:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (void)disable:(QCOpenGLContext*)context;
- (void)cleanup:(QCOpenGLContext *)context;
- (void)setUndoManager:(NSUndoManager*)undoManager;
- (NSString*)description;
@end

@interface QCPlugInPatch (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
