#import <QCPort.h>

@interface QCNumberPort : QCPort
{
    double _value;
    double _min;
    double _max;
    void *_unused3[4];
}

- (double)doubleValue;
- (void)setDoubleValue:(double)fp8;
- (double)minDoubleValue;
- (double)maxDoubleValue;
- (void)setMinDoubleValue:(double)fp8;
- (void)setMaxDoubleValue:(double)fp8;

@end

@interface QCNumberPort (Override)
+ (Class)baseClass;
- (id)initWithNode:(id)fp8 arguments:(id)fp12;
- (id)value;
- (BOOL)setValue:(id)fp8;
- (BOOL)acceptValuesOfClass:(Class)fp8;
- (Class)valueClass;
- (BOOL)takeValue:(id)fp8 fromPort:(id)fp12;
- (id)stateValue;
- (BOOL)setStateValue:(id)fp8;
@end

@interface QCNumberPort (ParameterView)
- (id)setupParameterView;
- (void)resetParameterView:(id)fp8;
@end

@interface QCNumberPort (ValueEditing)
- (void)editValueWithEvent:(id)fp8 inView:(id)fp12 atPoint:(NSPoint)fp16;
@end

@interface QCNumberPort (Tooltip)
- (id)tooltipString;
@end

@interface QCNumberPort (QCProFX)
- (QCMD5Sum)md5WithTime:(double)fp8 arguments:(id)fp16;
- (double)doubleValue:(id)fp8;
@end
