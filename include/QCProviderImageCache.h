#import "QCCache.h"

@interface QCProviderImageCache : QCCache
{
	QCCache *_imageCache;	// 152 = 0x98
	QCCache *_representationCache;	// 156 = 0x9c
}

- (id)initWithMaximumSize:(double)fp8 maximumResourceAge:(double)fp16 options:(id)fp24;
- (id)_copyCacheWithFunction:(void *)fp8 userInfo:(void *)fp12 userInfoReleaseCallback:(void *)fp16 md5List:(QCMD5Sum *)fp20 md5Indices:(NSUInteger *)fp24 md5Count:(NSUInteger)fp28;
- (void)dealloc;
- (void)addResource:(id)fp8 withSize:(double)fp12 cost:(double)fp20 md5List:(QCMD5Sum *)fp28 count:(NSUInteger)fp32;
- (void)_removeResourceAtIndex:(NSUInteger)fp8;
- (void)_collectResourcesForSize;

@end
