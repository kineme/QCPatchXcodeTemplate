#import <QCVirtualPort.h>

@interface QCObjectPort : QCVirtualPort
{
    id _cachedValue;
    void *_unused4[4];
}

+ (id)allocWithZone:(NSZone *)fp8;
- (Class)objectClass;
- (id)object;
- (BOOL)setObject:(id)fp8;

@end

@interface QCObjectPort (Override)
- (id)initWithNode:(id)fp8 arguments:(id)fp12;
- (Class)valueClass;
- (BOOL)setValue:(id)fp8;
- (BOOL)acceptValuesOfClass:(Class)fp8;
- (BOOL)canConnectToPort:(id)fp8;
- (BOOL)takeValue:(id)fp8 fromPort:(id)fp12;
- (id)description;
@end


