#import <QCProtocols.h>

#import <GFList.h>
#import <GFNodeClassDescription.h>

@class GFGraph;

@interface GFNode : NSObject <GFBase, NSCoding, NSCopying>
{
    GFList *_inputPorts;
    GFList *_outputPorts;
    GFGraph *_parent;
    unsigned int _flags;
    NSString *_identifier;
    NSMutableDictionary *_userInfo;
    unsigned int _notificationsDisabled;
    unsigned int _notificationsPaused;
    GFList *_notificationsQueue;
    GFNodeClassDescription *_classDescription;
    NSUndoManager *_undoManager;
    void *_unused[2];
}

+ (void)initialize;
+ (id)xmlAttributesWithIdentifier:(id)fp8;
+ (id)attributesWithIdentifier:(id)fp8;
+ (unsigned int)stateVersionWithIdentifier:(id)fp8;
+ (BOOL)shouldCreateIvarPorts;
+ (BOOL)shouldLoadAttributes;
+ (id)nodeWithIdentifier:(id)fp8;
- (unsigned int)versionFromState:(id)fp8;
- (id)init;
- (void)__setValue:(id)fp8 forIvar:(const char *)fp12;
- (id)initWithIdentifier:(id)fp8;
- (void)dealloc;
- (id)identifier;
- (id)argumentsForIvarPortWithKey:(id)fp8;
- (id)createInputPortWithArguments:(id)fp8 forKey:(id)fp12;
- (id)createOutputPortWithArguments:(id)fp8 forKey:(id)fp12;
- (void)setInputPortOrder:(unsigned int)fp8 forKey:(id)fp12;
- (void)setOutputPortOrder:(unsigned int)fp8 forKey:(id)fp12;
- (void)deleteInputPortForKey:(id)fp8;
- (void)deleteOutputPortForKey:(id)fp8;
- (id)userInfo;
- (id)inputPorts;
- (id)outputPorts;
- (void)applyFunctionOnInputPorts:(void *)fp8 context:(void *)fp12;
- (void)applyFunctionOnOutputPorts:(void *)fp8 context:(void *)fp12;
- (id)ivarInputPorts;
- (id)ivarOutputPorts;
- (id)customInputPorts;
- (id)customOutputPorts;
- (BOOL)saveCustomInputPortStates:(id)fp8 toState:(id)fp12;
- (BOOL)saveCustomOutputPortStates:(id)fp8 toState:(id)fp12;
- (BOOL)restoreCustomInputPortStates:(id)fp8 fromState:(id)fp12;
- (BOOL)restoreCustomOutputPortStates:(id)fp8 fromState:(id)fp12;
- (id)xmlAttributes;
- (id)attributes;
- (id)undoManager;
- (void)setUndoManager:(id)fp8;
- (id)description;
- (id)state;
- (BOOL)setState:(id)fp8;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)copyWithZone:(NSZone *)fp8;
- (id)portForKey:(id)fp8;
- (id)keyForPort:(id)fp8;
- (int)directionForPort:(id)fp8;
- (id)graph;
- (void)pauseNotifications;
- (void)resumeNotifications;
- (void)stateUpdated;
- (void)logMessage:(id)fp8;
- (void)debugMessage:(id)fp8;
- (id)key;
- (void)nodeDidAddToGraph:(id)fp8;
- (void)nodeWillRemoveFromGraph;
- (void)__setUndoableValue:(id)fp8 forKeyPath:(id)fp12 updatesState:(id)fp16;
- (void)setUndoableValue:(id)fp8 forKeyPath:(id)fp12 updatesState:(BOOL)fp16;

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
- (void)_logMessage:(id)fp8;
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
- (id)_portsFromList:(id)fp8 withSetFlags:(unsigned int)fp12 unsetFlags:(unsigned int)fp16;
- (id)_userInfo;
@end

@interface GFNode (GFNodeActor)
- (id)nodeActorForView:(id)fp8;
@end

