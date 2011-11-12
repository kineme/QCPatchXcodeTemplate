
#import "QCResource.h"

@class QCCGLContext, QCImageBuffer, QCPixelFormat;

@interface QCImageBuffer_GCCacheResource : QCResource
{
	QCImageBuffer *_buffer;	// 28 = 0x1c
	void *_refBuffer;	// 32 = 0x20
	QCCGLContext *_refContext;	// 36 = 0x24
	QCPixelFormat *_format;	// 40 = 0x28
	void *_backing;	// 44 = 0x2c
	void *_backingInfo;	// 48 = 0x30
}

- (id)initWithImageBuffer:(id)fp8;
- (void)willRecycleResource:(id)fp8;
- (BOOL)didRecycleResource:(id)fp8;
- (id)cacheRetain:(id)fp8;
- (void)cacheRelease:(id)fp8;
- (NSUInteger)cacheRetainCount;
- (void)removeFromAllCachesExcept:(id)fp8;
- (BOOL)setPurgeable:(BOOL)fp8;
- (BOOL)purgeable;
- (void)setResourcePool:(id)fp8;
- (NSRect)bounds;
- (void *)backingReleaseCallback;
- (void *)backingReleaseInfo;
- (void)dealloc;

@end
