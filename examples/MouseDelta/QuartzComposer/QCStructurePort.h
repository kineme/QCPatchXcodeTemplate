#import <QCObjectPort.h>

@interface QCStructurePort : QCObjectPort
{
    void *_unused5[4];
}

+ (Class)baseClass;
- (Class)objectClass;
- (id)structureValue;
- (void)setStructureValue:(id)fp8;

@end

@interface QCStructurePort (Override)
- (id)stateValue;
- (BOOL)setStateValue:(id)fp8;
- (BOOL)acceptValuesOfClass:(Class)fp8;
- (BOOL)setValue:(id)fp8;
- (Class)valueClass;
- (id)value;
@end

@interface QCStructurePort (ParameterView)
- (id)setupParameterView;
- (void)resetParameterView:(id)fp8;
@end

@interface QCStructurePort (Tooltip)
- (void)_printStructure:(id)fp8 toString:(id)fp12 linePrefix:(id)fp16;
- (id)tooltipString;
@end

@interface QCStructurePort (QCProFX)
- (QCMD5Sum)md5WithTime:(double)fp8 arguments:(id)fp16;
@end
