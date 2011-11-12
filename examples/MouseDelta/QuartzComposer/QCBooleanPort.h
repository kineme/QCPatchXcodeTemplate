#import <QCPort.h>

@interface QCBooleanPort : QCPort
{
    BOOL _value;
    void *_unused3[4];
}

- (BOOL)booleanValue;
- (void)setBooleanValue:(BOOL)fp8;

@end

@interface QCBooleanPort (Override)
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

@interface QCBooleanPort (ParameterView)
- (id)setupParameterView;
- (void)resetParameterView:(id)fp8;
@end

@interface QCBooleanPort (ValueEditing)
- (void)_setTrue:(id)fp8;
- (void)_setFalse:(id)fp8;
- (void)editValueWithEvent:(id)fp8 inView:(id)fp12 atPoint:(NSPoint)fp16;
@end

@interface QCBooleanPort (Tooltip)
- (id)tooltipString;
@end

@interface QCBooleanPort (QCProFX)
- (QCMD5Sum)md5WithTime:(double)fp8 arguments:(id)fp16;
@end

