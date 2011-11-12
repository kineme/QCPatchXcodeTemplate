#import "QCPort.h"

@interface QCColorPort : QCPort
{
	CGFloat _red;	// 104 = 0x68
	CGFloat _green;	// 108 = 0x6c
	CGFloat _blue;	// 112 = 0x70
	CGFloat _alpha;	// 116 = 0x74
	void *_unused3[4];	// 120 = 0x78
}

- (CGFloat)redComponent;
- (CGFloat)greenComponent;
- (CGFloat)blueComponent;
- (CGFloat)alphaComponent;
- (void)getRed:(CGFloat *)red green:(CGFloat *)green blue:(CGFloat *)blue alpha:(CGFloat *)alpha;
- (void)setRedComponent:(CGFloat)red;
- (void)setGreenComponent:(CGFloat)green;
- (void)setBlueComponent:(CGFloat)blue;
- (void)setAlphaComponent:(CGFloat)alpha;
- (void)setRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha;
- (CGColorRef)createCGColor;
- (id)CIColorWithColorSpace:(CGColorSpaceRef)colorspace;
@end

@interface QCColorPort (NSColor)
- (BOOL)acceptValuesOfClass:(Class)valueClass;
- (BOOL)setValue:(id)value;
- (Class)valueClass;
- (id)value;
@end

@interface QCColorPort (Override)
+ (Class)baseClass;
- (id)initWithNode:(QCPatch*)node arguments:(id)fp12;
- (BOOL)canConnectToPort:(QCPort*)port;
- (BOOL)takeValue:(id)fp8 fromPort:(id)fp12;
- (id)stateValue;
- (BOOL)setStateValue:(id)fp8;
@end

@interface QCColorPort (ParameterView)
- (id)setupParameterView;
- (void)resetParameterView:(id)fp8;
@end

@interface QCColorPort (QCProFX)
- (QCMD5Sum)md5WithTime:(double)fp8 arguments:(id)fp16;
@end

@interface QCColorPort (Tooltip)
- (NSString*)tooltipString;
- (id)tooltipExtensionView;
- (NSSize)tooltipExtensionViewSize:(id)fp8;
- (void)drawPortView:(id)fp8;
@end

@interface QCColorPort (ValueEditing)
- (void)_doneColor:(id)fp8;
- (void)_windowWillClose:(id)fp8;
- (void)editValueWithEvent:(id)fp8 inView:(id)fp12 atPoint:(NSPoint)fp16;
@end
