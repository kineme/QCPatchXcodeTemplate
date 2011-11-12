#if MAC_OS_X_VERSION_MAX_ALLOWED < 1060
	#define NS_FORMAT_FUNCTION(F,A)
#endif

@class GFGraph, GFList, GFNodeClassDescription;

@interface GFNode : NSObject <GFBase, NSCoding, NSCopying>
{
	GFList *_inputPorts;	// 4 = 0x4
	GFList *_outputPorts;	// 8 = 0x8
	GFGraph *_parent;	// 12 = 0xc
	NSUInteger _flags;	// 16 = 0x10
	NSString *_identifier;	// 20 = 0x14
	NSMutableDictionary *_userInfo;	// 24 = 0x18
	NSUInteger _notificationsDisabled;	// 28 = 0x1c
	NSUInteger _notificationsPaused;	// 32 = 0x20
	GFList *_notificationsQueue;	// 36 = 0x24
	GFNodeClassDescription *_classDescription;	// 40 = 0x28
	NSUndoManager *_undoManager;	// 44 = 0x2c
	void *_unused[2];	// 48 = 0x30
}

+ (void)initialize;
+ (id)xmlAttributesWithIdentifier:(id)fp8;
+ (id)attributesWithIdentifier:(id)fp8;
+ (NSUInteger)stateVersionWithIdentifier:(id)fp8;
+ (BOOL)shouldCreateIvarPorts;
+ (BOOL)shouldLoadAttributes;
+ (id)nodeWithIdentifier:(id)fp8;
- (NSUInteger)versionFromState:(id)fp8;
- (id)init;
- (void)__setValue:(id)fp8 forIvar:(const char *)fp12;
- (id)initWithIdentifier:(id)fp8;
- (void)dealloc;
- (id)identifier;
- (id)argumentsForIvarPortWithKey:(id)fp8;
- (id)createInputPortWithArguments:(id)fp8 forKey:(id)fp12;
- (id)createOutputPortWithArguments:(id)fp8 forKey:(id)fp12;
- (void)setInputPortOrder:(NSUInteger)fp8 forKey:(id)fp12;
- (void)setOutputPortOrder:(NSUInteger)fp8 forKey:(id)fp12;
- (void)deleteInputPortForKey:(id)fp8;
- (void)deleteOutputPortForKey:(id)fp8;
- (NSMutableDictionary *)userInfo;
- (NSArray *)inputPorts;
- (NSArray *)outputPorts;
- (void)applyFunctionOnInputPorts:(void *)fp8 context:(void *)fp12;
- (void)applyFunctionOnOutputPorts:(void *)fp8 context:(void *)fp12;
- (NSArray *)ivarInputPorts;
- (NSArray *)ivarOutputPorts;
- (NSArray *)customInputPorts;
- (NSArray *)customOutputPorts;
- (BOOL)saveCustomInputPortStates:(id)fp8 toState:(id)fp12;
- (BOOL)saveCustomOutputPortStates:(id)fp8 toState:(id)fp12;
- (BOOL)restoreCustomInputPortStates:(id)fp8 fromState:(id)fp12;
- (BOOL)restoreCustomOutputPortStates:(id)fp8 fromState:(id)fp12;
- (NSDictionary *)xmlAttributes;
- (NSDictionary*)attributes;
- (NSUndoManager*)undoManager;
- (void)setUndoManager:(NSUndoManager*)undoManager;
- (NSString*)description;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (void)encodeWithCoder:(NSCoder*)aCoder;
- (id)initWithCoder:(NSCoder*)aDeoder;
- (id)copyWithZone:(NSZone *)zone;
- (id)portForKey:(id)fp8;
- (id)keyForPort:(id)fp8;
- (int)directionForPort:(id)fp8;
- (id)graph;
- (void)pauseNotifications;
- (void)resumeNotifications;
- (void)stateUpdated;
- (void)logMessage:(NSString *)format, ... NS_FORMAT_FUNCTION(1,2);
- (void)debugMessage:(id)fp8;
- (id)key;
- (void)nodeDidAddToGraph:(id)fp8;
- (void)nodeWillRemoveFromGraph;
- (void)__setUndoableValue:(id)fp8 forKeyPath:(id)fp12 updatesState:(id)fp16;
- (void)setUndoableValue:(id)fp8 forKeyPath:(id)fp12 updatesState:(BOOL)fp16;

@end

@interface GFNode (GFNodeActor)
- (id)nodeActorForView:(id)fp8;
@end

@interface GFNode (Private)
+ (id)newWithIdentifier:(id)fp8;
+ (Class)nodeClassDescriptionClass;
+ (Class)_listClass;
+ (id)_keyFromName:(id)fp8;
- (id)nodeClassDescription;
- (void)disableNotifications;
- (void)enableNotifications;
- (id)debugPath;
- (id)_getUserInfo:(id)fp8;
- (void)_logMessage:(NSString*)format, ... NS_FORMAT_FUNCTION(1,2);
- (id)_inputPorts;
- (id)_outputPorts;
- (id)_baseKey;
- (BOOL)_isPortKeyInUse:(id)fp8;
- (id)_uniqueInputPortKey;
- (id)_uniqueOutputPortKey;
- (void)_portsUpdated;
- (void)_postNotification:(id)fp8 sender:(id)fp12;
- (id)_stateForPorts:(id)fp8;
- (BOOL)_setState:(id)fp8 forPorts:(id)fp12;
- (id)_portsFromList:(id)fp8 withSetFlags:(NSUInteger)fp12 unsetFlags:(NSUInteger)fp16;
- (id)_userInfo;
@end
