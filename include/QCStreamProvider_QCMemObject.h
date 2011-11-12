
#import "QCStreamProvider.h"

@class QCMemObject;

@interface QCStreamProvider_QCMemObject : QCStreamProvider
{
	QCMemObject *_provider;	// 36 = 0x24
	unsigned int _isArray:1;	// 40 = 0x28
	unsigned int _isTexture3D:1;	// 40 = 0x28
}

+ (BOOL)isCompatibleWithSource:(id)fp8 sourceMD5:(QCMD5Sum *)fp12;
+ (id)createProviderWithSource:(id)fp8 options:(id)fp12;
- (id)initWithMemObject:(id)fp8 options:(id)fp12;
- (void)dealloc;
- (id)sourceRepresentationType;
- (id)sourceRepresentation;
- (NSUInteger)count;
- (NSUInteger)elementSize;
- (int)type;
- (NSUInteger)pixelsWide;
- (NSUInteger)pixelsHigh;
- (NSUInteger)pixelsDeep;
- (id)pixelFormat;
- (id)createArrayMemObjectForManager:(id)fp8 withCount:(NSUInteger)fp12 elementSize:(NSUInteger)fp16 type:(int)fp20 options:(id)fp24;
- (id)createImage2DMemObjectForManager:(id)fp8 withFormat:(id)fp12 options:(id)fp16;
@end
