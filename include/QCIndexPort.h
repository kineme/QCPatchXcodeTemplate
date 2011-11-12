#import "QCPort.h"

@interface QCIndexPort : QCPort
{
	NSUInteger _index;	// 104 = 0x68
	NSUInteger _maxIndex;	// 108 = 0x6c
	void *_unused3[4];	// 112 = 0x70
}

- (NSUInteger)indexValue;
- (void)setIndexValue:(NSUInteger)indexValue;
- (NSUInteger)maxIndexValue;
- (void)setMaxIndexValue:(NSUInteger)maxIndexValue;

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

@interface QCIndexPort (QCProFX)
- (QCMD5Sum)md5WithTime:(double)fp8 arguments:(id)fp16;
@end

@interface QCIndexPort (Tooltip)
- (NSString*)tooltipString;
@end

@interface QCIndexPort (ValueEditing)
- (void)_setItemIndex:(id)fp8;
- (void)editValueWithEvent:(NSEvent*)event inView:(NSView*)view atPoint:(NSPoint)point;
@end
