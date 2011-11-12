#import <QCPort.h>

@interface QCStringPort : QCPort
{
    NSString *_string;
    void *_unused3[4];
}

- (id)stringValue;
- (void)setStringValue:(id)fp8;

@end

@interface QCStringPort (Override)
+ (Class)baseClass;
- (id)initWithNode:(id)fp8 arguments:(id)fp12;
- (void)dealloc;
- (id)value;
- (BOOL)setValue:(id)fp8;
- (BOOL)acceptValuesOfClass:(Class)fp8;
- (BOOL)takeValue:(id)fp8 fromPort:(id)fp12;
- (Class)valueClass;
- (id)stateValue;
- (BOOL)setStateValue:(id)fp8;
@end

@interface QCStringPort (ParameterView)
- (id)setupParameterView;
- (void)resetParameterView:(id)fp8;
@end

@interface QCStringPort (ValueEditing)
- (void)editValueWithEvent:(id)fp8 inView:(id)fp12 atPoint:(NSPoint)fp16;
@end

@interface QCStringPort (Tooltip)
- (id)tooltipString;
@end

@interface QCStringPort (QCProFX)
- (QCMD5Sum)md5WithTime:(double)fp8 arguments:(id)fp16;
@end
