#import "QCObjectPort.h"

@interface QCImagePort : QCObjectPort
{
	void *_unused5[4];	// 144 = 0x90
}

+ (Class)baseClass;
- (Class)objectClass;
- (QCImage*)imageValue;
- (void)setImageValue:(QCImage*)imageValue;
@end

@interface QCImagePort (NSImage)
- (BOOL)acceptValuesOfClass:(Class)fp8;
- (BOOL)setValue:(id)fp8;
- (Class)valueClass;
- (id)value;
@end

@interface QCImagePort (Override)
- (id)stateValue;
- (BOOL)setStateValue:(id)fp8;
@end

@interface QCImagePort (ParameterView)
- (id)setupParameterView;
- (void)resetParameterView:(id)fp8;
@end

@interface QCImagePort (QCProFX)
- (QCMD5Sum)md5WithTime:(double)fp8 arguments:(id)fp16;
@end

@interface QCImagePort (Tooltip)
- (NSString*)tooltipString;
- (id)tooltipExtensionView;
- (NSSize)tooltipExtensionViewSize:(id)fp8;
- (void)drawPortView:(id)fp8;
@end
