#import "QCObjectPort.h"

@interface QCMeshPort : QCObjectPort
{
	void *_unused5[4];	// 144 = 0x90
}

+ (Class)baseClass;
- (Class)objectClass;
- (id)meshValue;
- (void)setMeshValue:(id)fp8;

@end

@interface QCMeshPort (Tooltip)
- (id)tooltipString;
- (id)tooltipExtensionView;
- (NSSize)tooltipExtensionViewSize:(id)fp8;
- (void)drawPortView:(id)fp8;
@end

@interface QCMeshPort (Override)
- (BOOL)acceptValuesOfClass:(Class)fp8;
- (BOOL)setValue:(id)fp8;
- (Class)valueClass;
- (id)value;
@end
