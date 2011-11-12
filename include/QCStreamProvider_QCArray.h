#import "QCStreamProvider.h"

@class QCArray;

@interface QCStreamProvider_QCArray : QCStreamProvider
{
	QCArray *_provider;	// 36 = 0x24
	NSUInteger _elementSize;	// 40 = 0x28
}

+ (BOOL)isCompatibleWithSource:(id)fp8 sourceMD5:(QCMD5Sum *)fp12;
+ (id)createProviderWithSource:(id)fp8 options:(id)fp12;
- (id)initWithList:(id)fp8 options:(id)fp12;
- (id)initWithArray:(id)fp8 options:(id)fp12;
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
