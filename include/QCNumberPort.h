
#import "QCPort.h"

@interface QCNumberPort : QCPort
{
	double _value;	// 104 = 0x68
	double _min;	// 112 = 0x70
	double _max;	// 120 = 0x78
	void *_unused3[4];	// 128 = 0x80
}

- (double)doubleValue;
- (void)setDoubleValue:(double)value;
- (double)minDoubleValue;
- (double)maxDoubleValue;
- (void)setMinDoubleValue:(double)minValue;
- (void)setMaxDoubleValue:(double)maxValue;
@end

@interface QCNumberPort (Override)
+ (Class)baseClass;
- (id)initWithNode:(QCPatch*)owner arguments:(NSDictionary*)args;
- (id)value;
- (BOOL)setValue:(id)fp8;
- (BOOL)acceptValuesOfClass:(Class)valueClass;
- (Class)valueClass;
- (BOOL)takeValue:(id)fp8 fromPort:(id)fp12;
- (id)stateValue;
- (BOOL)setStateValue:(id)fp8;
@end

@interface QCNumberPort (ParameterView)
- (id)setupParameterView;
- (void)resetParameterView:(id)fp8;
@end

@interface QCNumberPort (QCProFX)
- (QCMD5Sum)md5WithTime:(double)time arguments:(NSDictionary*)args;
- (double)doubleValue:(id)fp8;
@end

@interface QCNumberPort (Tooltip)
- (NSString*)tooltipString;
@end

@interface QCNumberPort (ValueEditing)
- (void)editValueWithEvent:(NSEvent*)event inView:(NSView*)view atPoint:(NSPoint)point;
@end
