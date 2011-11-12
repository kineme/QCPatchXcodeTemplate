
#import "QCStreamProvider.h"

@interface QCStreamProvider_Core3D : QCStreamProvider
{
	struct __C3DMesh *_provider;	// 36 = 0x24
	int _meshComponent;	// 40 = 0x28
	NSUInteger _count;	// 44 = 0x2c
	NSUInteger _elementSize;	// 48 = 0x30
	int _type;	// 52 = 0x34
}

+ (BOOL)isCompatibleWithSource:(id)fp8 sourceMD5:(QCMD5Sum *)fp12;
+ (id)createProviderWithSource:(id)fp8 options:(id)fp12;
- (id)initWithC3DMesh:(struct __C3DMesh *)fp8 options:(id)fp12;
- (void)finalize;
- (void)dealloc;
- (id)sourceRepresentationType;
- (id)sourceRepresentation;
- (NSUInteger)count;
- (NSUInteger)elementSize;
- (int)type;
- (id)pixelFormat;
- (id)createArrayMemObjectForManager:(id)fp8 withCount:(NSUInteger)fp12 elementSize:(NSUInteger)fp16 type:(int)fp20 options:(id)fp24;
- (id)createImage2DMemObjectForManager:(id)fp8 withFormat:(id)fp12 options:(id)fp16;

@end
