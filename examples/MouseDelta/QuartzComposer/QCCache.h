#import <QCProtocols.h>

@interface QCCache : NSObject <QCCache>
{
    unsigned int _flags;
    double _maxSize;
    double _time;
    double _maxAge;
    double _timestamp;
    double _sizeUpdateTimestamp;
    double _totalSizeTimeStamp;
    struct _opaque_pthread_mutex_t *_mutex;
    unsigned int _activity;
    unsigned int _maxResources;
    unsigned int _resourceCount;
    unsigned int _position;
    unsigned int _md5Count;
    unsigned int _statCount;
    unsigned int *_md5Indices;
    QCMD5Sum *_md5List;
    struct QCResourceInfo **_resources;
    float *_scores;
    double *_stats;
    unsigned int _hits;
    unsigned int _successfulHits;
    void *_function;
    QCCache *_parent;
    QCCache *_root;
    void *_userInfo;
    void *_userInfoReleaseCallback;
    double _totalSize;
    void *_unused[4];
}

- (id)_initWithOptionFlags:(unsigned int)fp8 maxSize:(double)fp12 maxAge:(double)fp20 resources:(struct QCResourceInfo **)fp28 maxResources:(unsigned int)fp32 parent:(id)fp36 root:(id)fp40 function:(void *)fp44 userInfo:(void *)fp48 userInfoReleaseCallback:(void *)fp52 md5List:(QCMD5Sum *)fp56 md5Indices:(unsigned int *)fp60 md5Count:(unsigned int)fp64;
- (id)initWithMaximumSize:(double)fp8 maximumResourceAge:(double)fp16 options:(id)fp24;
- (void)_finalize_QCCache;
- (void)finalize;
- (void)dealloc;
- (void)_addResource:(id)fp8 withSize:(double)fp12 cost:(double)fp20 md5List:(QCMD5Sum *)fp28 count:(unsigned int)fp32;
- (void)addResource:(id)fp8 withSize:(double)fp12 cost:(double)fp20 md5List:(QCMD5Sum *)fp28 count:(unsigned int)fp32;
- (void)removeResource:(id)fp8;
- (void)removeAllResources;
- (void)collectResources;
- (id)subcacheMatchingMd5List:(QCMD5Sum *)fp8 forIndices:(unsigned int *)fp12 count:(unsigned int)fp16;
- (id)subcacheUsingFilteringFunction:(void *)fp8 userInfo:(void *)fp12 userInfoReleaseCallback:(void *)fp16;
- (void)_updateStatsForResourceAtIndex:(unsigned int)fp8;
- (id)copyBestResource:(float *)fp8;
- (id)copyAnyResource;
- (id)copyAllResources;
- (id)description;

@end

@interface QCCache (Private)
- (id)initWithOptionFlags:(unsigned int)fp8 maxSize:(double)fp12 maxAge:(double)fp20;
- (id)_copyCacheWithFunction:(void *)fp8 userInfo:(void *)fp12 userInfoReleaseCallback:(void *)fp16 md5List:(QCMD5Sum *)fp20 md5Indices:(unsigned int *)fp24 md5Count:(unsigned int)fp28;
- (id)performanceCounters;
- (id)ageStatistics;
- (void)_removeResourceAtIndex:(unsigned int)fp8;
- (struct QCResourceInfo **)_resources;
- (id)_listResources:(BOOL)fp8;
- (id)listResources;
- (id)_branchDescription;
- (id)branchDescription;
- (void)_recycleResource:(id)fp8;
- (void)_collectResourcesForAge;
- (void)_collectResourcesForSize;
- (unsigned int)maximumSize;
- (void)setMaximumSize:(unsigned int)fp8;
- (double)maximumAge;
- (void)setMaximumAge:(double)fp8;
- (BOOL)isEmpty;
- (double)totalSize;
- (void)setSizeNeedsUpdate:(BOOL)fp8;
- (double)standardDeviation;
- (void)_applyFunctionOnAllResources:(void *)fp8 userInfo:(void *)fp12;
@end

@interface QCCache (Internal)
- (void)_runGarbageCollectionForAge;
- (void)_runGarbageCollectionForSize;
- (void)_runGarbageCollection;
- (BOOL)_needsUpdate;
- (BOOL)_sizeNeedsUpdate;
- (BOOL)_isAtEnd;
- (id)_parent;
- (unsigned int)_resourceCount;
- (double)_timestamp;
- (void)_filterResources:(unsigned int *)fp8 reset:(BOOL)fp12;
- (void)_filterAllResourcesIfNeeded;
- (void)_updateSize;
- (void)_updateSizeIfNeeded;
@end

@interface QCCache (RectSupport)
- (id)subcacheUsingRectFilteringFunction:(int)fp8 rect:(NSRect)fp12;
@end

