#import <QCPort.h>

@interface QCVirtualPort : QCPort
{
    id _value;
    void *_unused3[4];
}

+ (Class)baseClass;
- (id)rawValue;
- (void)setRawValue:(id)fp8;
- (BOOL)acceptValuesOfClass:(Class)fp8;
- (Class)valueClass;
- (id)stateValue;
- (BOOL)setStateValue:(id)fp8;

@end

@interface QCVirtualPort (Tooltip)
- (id)tooltipString;
@end

@interface QCVirtualPort (Override)
- (id)initWithNode:(id)fp8 arguments:(id)fp12;
- (void)dealloc;
- (id)value;
- (BOOL)setValue:(id)fp8;
- (BOOL)canConnectToPort:(id)fp8;
- (BOOL)takeValue:(id)fp8 fromPort:(id)fp12;
@end

