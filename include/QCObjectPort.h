#import "QCVirtualPort.h"

@interface QCObjectPort : QCVirtualPort
{
	id _cachedValue;	// 124 = 0x7c
	void *_unused4[4];	// 128 = 0x80
}

+ (id)allocWithZone:(NSZone *)zone;
- (Class)objectClass;
- (id)object;
- (BOOL)setObject:(id)objectValue;
@end

@interface QCObjectPort (Override)
- (id)initWithNode:(QCPatch*)owner arguments:(NSDictionary*)args;
- (Class)valueClass;
- (BOOL)setValue:(id)fp8;
- (BOOL)acceptValuesOfClass:(Class)valueClass;
- (BOOL)canConnectToPort:(QCPort*)port;
- (BOOL)takeValue:(id)fp8 fromPort:(QCPort*)port;
- (NSString*)description;
@end
