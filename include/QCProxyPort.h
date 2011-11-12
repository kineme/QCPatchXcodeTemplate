#import "QCPort.h"

@interface QCProxyPort : QCPort
+ (id)allocWithZone:(NSZone *)zone;
+ (Class)baseClass;
- (id)initWithNode:(id)fp8 arguments:(id)fp12;
- (void)portWillDeleteFromNode;
- (NSUInteger)_timestamp;
- (id)value;
- (BOOL)setValue:(id)fp8;
- (BOOL)acceptValuesOfClass:(Class)fp8;
- (Class)valueClass;
- (BOOL)canConnectToPort:(id)fp8;
- (BOOL)takeValue:(id)fp8 fromPort:(id)fp12;
- (id)stateValue;
- (BOOL)setStateValue:(id)fp8;
- (id)_argumentsFromAttributesKey:(id)fp8 originalArguments:(id)fp12;

@end

@interface QCProxyPort (ParameterView)
- (id)setupParameterView;
- (void)resetParameterView:(id)fp8;
@end

@interface QCProxyPort (QCColorPort)
- (void)getRed:(CGFloat *)red green:(CGFloat *)green blue:(CGFloat *)blue alpha:(CGFloat *)alpha;
- (void)setRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha;
@end

@interface QCProxyPort (QCImagePort)
- (QCImage*)imageValue;
- (void)setImageValue:(QCImage*)value;
@end

@interface QCProxyPort (QCMeshPort)
- (id)meshValue;
- (void)setMeshValue:(id)value;
@end

@interface QCProxyPort (QCNumericPorts)
- (double)doubleValue;
- (void)setDoubleValue:(double)value;
- (NSUInteger)indexValue;
- (void)setIndexValue:(NSUInteger)value;
- (BOOL)booleanValue;
- (void)setBooleanValue:(BOOL)value;
@end

@interface QCProxyPort (QCObjectPort)
- (Class)objectClass;
- (id)object;
- (BOOL)setObject:(id)object;
@end

@interface QCProxyPort (QCProFX)
- (QCMD5Sum)md5WithTime:(double)fp8 arguments:(id)fp16;
@end

@interface QCProxyPort (QCStringPort)
- (id)stringValue;
- (void)setStringValue:(NSString*)value;
@end

@interface QCProxyPort (QCStructurePort)
- (id)structureValue;
- (void)setStructureValue:(QCStructure*)value;
@end

@interface QCProxyPort (QCVirtualPort)
- (id)rawValue;
- (void)setRawValue:(id)value;
@end

@interface QCProxyPort (ValueEditing)
- (void)editValueWithEvent:(NSEvent*)event inView:(NSView*)view atPoint:(NSPoint)point;
@end
