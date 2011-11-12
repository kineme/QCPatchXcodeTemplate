#import "QCObjectPort.h"

@class QCStructure;

@interface QCStructurePort : QCObjectPort
{
	void *_unused5[4];	// 144 = 0x90
}

+ (Class)baseClass;
- (Class)objectClass;
- (QCStructure*)structureValue;
- (void)setStructureValue:(QCStructure*)structureValue;
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

@interface QCStructurePort (QCProFX)
- (QCMD5Sum)md5WithTime:(double)time arguments:(id)fp16;
@end

@interface QCStructurePort (QCStream)
- (id)streamValue;
@end

@interface QCStructurePort (Tooltip)
- (BOOL)_printStructure:(id)fp8 toString:(id)fp12 linePrefix:(id)fp16 maxLines:(int *)fp20;
- (NSString*)tooltipString;
@end
