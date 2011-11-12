@interface QCBonjourServices : QCRunLoopPatch
{
	QCStructurePort *outputServices;	// 172 = 0xac
	NSString *_serviceType;	// 176 = 0xb0
	BOOL _keylessStructures;	// 180 = 0xb4
	CFNetServiceBrowserRef _browser;	// 184 = 0xb8
	CFDictionaryRef _serviceList;	// 188 = 0xbc
	pthread_mutex_t _serviceMutex;	// 192 = 0xc0
	QCStructure *_serviceStructure;	// 236 = 0xec
}

+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)dealloc;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (BOOL)keylessStructures;
- (id)serviceType;
- (void)setServiceType:(id)fp8;
- (CFDictionaryRef)_serviceList;
- (void)_setStructure:(id)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (void)cleanup:(QCOpenGLContext *)context;

@end

@interface QCBonjourServices (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
