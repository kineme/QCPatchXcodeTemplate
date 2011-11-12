#import "QCPort.h"

@interface QCBooleanPort : QCPort
{
	BOOL _value;	// 104 = 0x68
	void *_unused3[4];	// 108 = 0x6c
}

- (BOOL)booleanValue;
- (void)setBooleanValue:(BOOL)booleanValue;

@end

@interface QCBooleanPort (Override)
+ (Class)baseClass;
- (id)initWithNode:(id)fp8 arguments:(id)fp12;
- (id)value;
- (BOOL)setValue:(id)fp8;
- (BOOL)acceptValuesOfClass:(Class)fp8;
- (Class)valueClass;
- (BOOL)takeValue:(id)fp8 fromPort:(QCPort*)port;
- (id)stateValue;
- (BOOL)setStateValue:(id)fp8;
@end

@interface QCBooleanPort (ParameterView)
- (id)setupParameterView;
- (void)resetParameterView:(id)fp8;
@end

@interface QCBooleanPort (QCProFX)
- (QCMD5Sum)md5WithTime:(double)time arguments:(id)fp16;
@end

@interface QCBooleanPort (Tooltip)
- (NSString*)tooltipString;
@end

@interface QCBooleanPort (ValueEditing)
- (void)_setTrue:(id)sender;	// calls [self setBooleanValue: 1];
- (void)_setFalse:(id)sender;	// calls [self setBooleanValue: 0];
- (void)editValueWithEvent:(NSEvent*)event inView:(NSView*)view atPoint:(NSPoint)point;
@end
