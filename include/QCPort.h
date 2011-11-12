
#import "GFPort.h"

@class QCProxyPort, QCPatch;

@interface QCPort : GFPort
{
	Class _baseClass;	// 40 = 0x28
	QCPort *_connectedPort;	// 44 = 0x2c
	QCProxyPort *_proxyPort;	// 48 = 0x30
	NSUInteger _timestamp;	// 52 = 0x34
	NSUInteger _previousTimestamp;	// 56 = 0x38
	NSUInteger _iteration;	// 60 = 0x3c
	NSUInteger _previousIteration;	// 64 = 0x40
	BOOL _updated;	// 68 = 0x44
	NSString *_keyCache;	// 72 = 0x48
	int _direction;	// 76 = 0x4c
	NSUInteger _connectedPortTimestamp;	// 80 = 0x50
	NSUInteger _kindAndUnits;	// 84 = 0x54
	void *_observationInfo;	// 88 = 0x58
	id _proExtension;	// 92 = 0x5c
	void *_unused2[2];	// 96 = 0x60
}

+ (id)allocWithZone:(NSZone *)zone;
+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)fp8;
+ (Class)baseClass;
- (id)initWithNode:(id)fp8 arguments:(NSDictionary*)args;
- (void)dealloc;
- (int)kind;
- (int)units;
- (void)_clearCachedKey;
- (NSString *)key;
- (void)portWillDeleteFromNode;
- (id)value;
- (BOOL)setValue:(id)fp8;
- (BOOL)acceptValuesOfClass:(Class)fp8;
- (Class)valueClass;
- (BOOL)canConnectToPort:(id)fp8;
- (BOOL)takeValue:(id)fp8 fromPort:(id)fp12;
- (QCPatch *)parentPatch;
- (BOOL)wasUpdated;
- (NSUInteger)_timestamp;
- (void)willChangeValue;
- (void)didChangeValue;
- (id)stateValue;
- (BOOL)setStateValue:(id)fp8;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (BOOL)_execute:(double)time arguments:(NSDictionary*)args;
- (void)_resetUpdate;
- (id)proxyPort;
- (void)_setProxyPort:(QCPort *)port;
- (id)connectedPort;
- (void)_setConnectedPort:(QCPort *)port;
- (void)_setDirection:(int)fp8;
- (int)direction;
- (Class)baseClass;
- (void)_setBaseClass:(Class)fp8;
- (NSString*)description;
- (id)valueForKey:(id)fp8;
- (void)setValue:(id)fp8 forKey:(id)fp12;
- (void)addObserver:(id)fp8 forKeyPath:(id)fp12 options:(NSUInteger)fp16 context:(void *)fp20;
- (void)removeObserver:(id)fp8 forKeyPath:(id)fp12;
- (void)setObservationInfo:(void *)fp8;
- (void *)observationInfo;
- (id)_argumentsFromAttributesKey:(id)fp8 originalArguments:(id)fp12;

@end

@interface QCPort (ParameterView)
- (id)setupParameterView;
- (void)resetParameterView:(id)fp8;
@end

@interface QCPort (QCPortView)
- (void)drawPortView:(id)fp8;
@end

@interface QCPort (QCProFX)
+ (id)findOriginalPort:(id)fp8;
- (id)getConnectedOriginalPort;
- (QCMD5Sum)md5WithTime:(double)time arguments:(id)fp16;
@end

@interface QCPort (TooltipExtensionView)
- (id)tooltipExtensionView;
- (NSSize)tooltipExtensionViewSize:(id)fp8;
- (id)tooltipString;
- (id)setupTooltipView;
- (void)resetTooltipView;
@end

@interface QCPort (ValueEditing)
- (void)editValueWithEvent:(id)fp8 inView:(id)fp12 atPoint:(NSPoint)fp16;
@end
