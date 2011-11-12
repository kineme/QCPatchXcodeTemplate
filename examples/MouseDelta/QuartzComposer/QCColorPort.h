#import <QCPort.h>

@interface QCColorPort : QCPort
{
    float _red;
    float _green;
    float _blue;
    float _alpha;
    void *_unused3[4];
}

- (float)redComponent;
- (float)greenComponent;
- (float)blueComponent;
- (float)alphaComponent;
- (void)getRed:(float *)fp8 green:(float *)fp12 blue:(float *)fp16 alpha:(float *)fp20;
- (void)setRedComponent:(float)fp8;
- (void)setGreenComponent:(float)fp8;
- (void)setBlueComponent:(float)fp8;
- (void)setAlphaComponent:(float)fp8;
- (void)setRed:(float)fp8 green:(float)fp12 blue:(float)fp16 alpha:(float)fp20;
- (struct CGColor *)createCGColor;
- (id)CIColorWithColorSpace:(struct CGColorSpace *)fp8;

@end

@interface QCColorPort (Override)
+ (Class)baseClass;
- (id)initWithNode:(id)fp8 arguments:(id)fp12;
- (BOOL)canConnectToPort:(id)fp8;
- (BOOL)takeValue:(id)fp8 fromPort:(id)fp12;
- (id)stateValue;
- (BOOL)setStateValue:(id)fp8;
@end

@interface QCColorPort (NSColor)
- (BOOL)acceptValuesOfClass:(Class)fp8;
- (BOOL)setValue:(id)fp8;
- (Class)valueClass;
- (id)value;
@end

@interface QCColorPort (ParameterView)
- (id)setupParameterView;
- (void)resetParameterView:(id)fp8;
@end

@interface QCColorPort (ValueEditing)
- (void)_doneColor:(id)fp8;
- (void)_windowWillClose:(id)fp8;
- (void)editValueWithEvent:(id)fp8 inView:(id)fp12 atPoint:(NSPoint)fp16;
@end

@interface QCColorPort (Tooltip)
- (id)tooltipString;
- (id)tooltipExtensionView;
- (NSSize)tooltipExtensionViewSize:(id)fp8;
- (void)drawPortView:(id)fp8;
@end

@interface QCColorPort (QCProFX)
- (QCMD5Sum)md5WithTime:(double)fp8 arguments:(id)fp16;
@end


