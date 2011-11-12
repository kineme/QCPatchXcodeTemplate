#import <GFPort.h>

@class QCProxyPort;

@interface QCPort : GFPort
{
    Class _baseClass;
    QCPort *_connectedPort;
    QCProxyPort *_proxyPort;
    unsigned int _timestamp;
    unsigned int _previousTimestamp;
    BOOL _updated;
    NSString *_keyCache;
    int _direction;
    unsigned int _connectedPortTimestamp;
    void *_observationInfo;
    unsigned int _kindAndUnits;
    id _proExtension;
    void *_unused2[2];
}

+ (id)allocWithZone:(NSZone *)fp8;
+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)fp8;
+ (Class)baseClass;
- (id)initWithNode:(id)fp8 arguments:(id)fp12;
- (void)dealloc;
- (int)kind;
- (int)units;
- (void)_clearCachedKey;
- (id)key;
- (void)portWillDeleteFromNode;
- (id)value;
- (BOOL)setValue:(id)fp8;
- (BOOL)acceptValuesOfClass:(Class)fp8;
- (Class)valueClass;
- (BOOL)canConnectToPort:(id)fp8;
- (BOOL)takeValue:(id)fp8 fromPort:(id)fp12;
- (id)parentPatch;
- (BOOL)wasUpdated;
- (unsigned int)_timestamp;
- (void)willChangeValue;
- (void)didChangeValue;
- (id)stateValue;
- (BOOL)setStateValue:(id)fp8;
- (id)state;
- (BOOL)setState:(id)fp8;
- (BOOL)_execute:(double)fp8 arguments:(id)fp16;
- (void)_resetUpdate;
- (id)proxyPort;
- (void)_setProxyPort:(id)fp8;
- (id)connectedPort;
- (void)_setConnectedPort:(id)fp8;
- (void)_setDirection:(int)fp8;
- (int)direction;
- (Class)baseClass;
- (void)_setBaseClass:(Class)fp8;
- (id)description;
- (id)valueForKey:(id)fp8;
- (void)setValue:(id)fp8 forKey:(id)fp12;
- (void)addObserver:(id)fp8 forKeyPath:(id)fp12 options:(unsigned int)fp16 context:(void *)fp20;
- (void)removeObserver:(id)fp8 forKeyPath:(id)fp12;
- (void)setObservationInfo:(void *)fp8;
- (void *)observationInfo;
- (id)_argumentsFromAttributesKey:(id)fp8 originalArguments:(id)fp12;

@end

@interface QCPort (ValueEditing)
- (void)editValueWithEvent:(id)fp8 inView:(id)fp12 atPoint:(NSPoint)fp16;
@end

@interface QCPort (ParameterView)
- (id)setupParameterView;
- (void)resetParameterView:(id)fp8;
@end

@interface QCPort (TooltipExtensionView)
- (id)tooltipExtensionView;
- (NSSize)tooltipExtensionViewSize:(id)fp8;
- (id)tooltipString;
- (id)setupTooltipView;
- (void)resetTooltipView;
@end

@interface QCPort (QCPortView)
- (void)drawPortView:(id)fp8;
@end

@interface QCPort (QCProFX)
+ (id)findOriginalPort:(id)fp8;
- (id)getConnectedOriginalPort;
- (QCMD5Sum)md5WithTime:(double)fp8 arguments:(id)fp16;
@end
