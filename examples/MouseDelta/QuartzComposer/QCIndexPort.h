#import <QCPort.h>

@interface QCIndexPort : QCPort
{
    unsigned int _index;
    unsigned int _maxIndex;
    void *_unused3[4];
}

- (unsigned int)indexValue;
- (void)setIndexValue:(unsigned int)fp8;
- (unsigned int)maxIndexValue;
- (void)setMaxIndexValue:(unsigned int)fp8;

@end

@interface QCIndexPort (Override)
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

@interface QCIndexPort (ParameterView)
- (id)setupParameterView;
- (void)resetParameterView:(id)fp8;
@end

@interface QCIndexPort (ValueEditing)
- (void)_setItemIndex:(id)fp8;
- (void)editValueWithEvent:(id)fp8 inView:(id)fp12 atPoint:(NSPoint)fp16;
@end

@interface QCIndexPort (Tooltip)
- (id)tooltipString;
@end

@interface QCIndexPort (QCProFX)
- (QCMD5Sum)md5WithTime:(double)fp8 arguments:(id)fp16;
@end

