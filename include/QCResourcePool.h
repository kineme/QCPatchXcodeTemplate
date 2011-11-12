#import "QCCache.h"

@interface QCResourcePool : QCCache
{
	void *_unused2[4];	// 152 = 0x98
}

- (id)initWithMaximumSize:(double)maxSize maximumResourceAge:(double)maxAge options:(id)fp24;
- (BOOL)isEmpty;

@end
