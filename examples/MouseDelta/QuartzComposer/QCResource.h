#import <QCResourcePool.h>

@interface QCResource : NSObject
{
    int _retainCount;
    QCResourcePool *_pool;
    void *_unused[4];
}

+ (id)allocWithZone:(NSZone *)fp8;
- (id)retain;
- (oneway void)release;
- (unsigned int)retainCount;
- (void)setResourcePool:(id)fp8;
- (id)resourcePool;
- (void)willRecycleResource:(id)fp8;
- (BOOL)didRecycleResource:(id)fp8;
- (id)description;

@end

