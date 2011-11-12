#import <QCCache.h>

@interface QCResourcePool : QCCache
{
    void *_unused2[4];
}

- (id)initWithMaximumSize:(double)fp8 maximumResourceAge:(double)fp16 options:(id)fp24;
- (BOOL)isEmpty;

@end

