@interface QCCache : NSObject <QCCache>
{
	NSUInteger _flags;	// 4 = 0x4
	double _maxSize;	// 8 = 0x8
	double _time;	// 16 = 0x10
	double _maxAge;	// 24 = 0x18
	double _timestamp;	// 32 = 0x20
	double _sizeUpdateTimestamp;	// 40 = 0x28
	double _totalSizeTimeStamp;	// 48 = 0x30
	pthread_mutex_t *_mutex;	// 56 = 0x38
	NSUInteger _maxResources;	// 60 = 0x3c
	NSUInteger _resourceCount;	// 64 = 0x40
	NSUInteger _position;	// 68 = 0x44
	NSUInteger _md5Count;	// 72 = 0x48
	NSUInteger _statCount;	// 76 = 0x4c
	NSUInteger *_md5Indices;	// 80 = 0x50
	QCMD5Sum *_md5List;	// 84 = 0x54
	struct QCResourceInfo **_resources;	// 88 = 0x58
	float *_scores;	// 92 = 0x5c
	double *_stats;	// 96 = 0x60
	NSUInteger _hits;	// 100 = 0x64
	NSUInteger _successfulHits;	// 104 = 0x68
	void *_function;	// 108 = 0x6c
	QCCache *_parent;	// 112 = 0x70
	QCCache *_root;	// 116 = 0x74
	void *_userInfo;	// 120 = 0x78
	void *_userInfoReleaseCallback;	// 124 = 0x7c
	double _totalSize;	// 128 = 0x80
	void *_unused[4];	// 136 = 0x88
}

- (id)_initWithOptionFlags:(NSUInteger)fp8 maxSize:(double)fp12 maxAge:(double)fp20 resources:(struct QCResourceInfo **)fp28 maxResources:(NSUInteger)fp32 parent:(id)fp36 root:(id)fp40 function:(void *)fp44 userInfo:(void *)fp48 userInfoReleaseCallback:(void *)fp52 md5List:(QCMD5Sum *)fp56 md5Indices:(NSUInteger*)fp60 md5Count:(NSUInteger)fp64;
- (id)initWithMaximumSize:(double)fp8 maximumResourceAge:(double)fp16 options:(id)fp24;
- (void)_finalize_QCCache;
- (void)finalize;
- (void)dealloc;
- (void)_addResource:(id)fp8 withSize:(double)fp12 cost:(double)fp20 md5List:(QCMD5Sum *)fp28 count:(NSUInteger)fp32;
- (void)addResource:(id)fp8 withSize:(double)fp12 cost:(double)fp20 md5List:(QCMD5Sum *)fp28 count:(NSUInteger)fp32;
- (void)removeResource:(id)fp8;
- (void)removeAllResources;
- (void)collectResources;
- (id)subcacheMatchingMd5List:(QCMD5Sum *)fp8 forIndices:(NSUInteger *)fp12 count:(NSUInteger)fp16;
- (id)subcacheUsingFilteringFunction:(void *)fp8 userInfo:(void *)fp12 userInfoReleaseCallback:(void *)fp16;
- (void)_updateStatsForResourceAtIndex:(NSUInteger)fp8;
- (id)copyBestResource:(float *)fp8;
- (id)copyAnyResource;
- (id)copyAllResources;
- (NSString*)description;
@end

@interface QCCache (Internal)
- (void)_runGarbageCollectionForAge;
- (void)_runGarbageCollectionForSize;
- (void)_runGarbageCollection;
- (BOOL)_needsUpdate;
- (BOOL)_sizeNeedsUpdate;
- (BOOL)_isAtEnd;
- (id)_parent;
- (NSUInteger)_resourceCount;
- (double)_timestamp;
- (void)_filterAllResourcesIfNeeded;
- (void)_updateSize;
- (void)_updateSizeIfNeeded;
@end

@interface QCCache (RectSupport)
- (id)subcacheUsingRectFilteringFunction:(int)fp8 rect:(NSRect)fp12;
@end

@interface QCCache (Private)
- (id)initWithOptionFlags:(NSUInteger)flags maxSize:(double)maxSize maxAge:(double)maxAge;
- (id)_copyCacheWithFunction:(void *)fp8 userInfo:(void *)fp12 userInfoReleaseCallback:(void *)fp16 md5List:(QCMD5Sum *)fp20 md5Indices:(NSUInteger *)fp24 md5Count:(NSUInteger)md5Count;
- (id)performanceCounters;
- (id)ageStatistics;
- (void)_removeResourceAtIndex:(NSUInteger)fp8;
- (struct QCResourceInfo **)_resources;
- (id)_listResources:(BOOL)fp8;
- (id)listResources;
- (id)_branchDescription;
- (id)branchDescription;
- (void)_recycleResource:(id)fp8;
- (void)_collectResourcesForAge;
- (void)_collectResourcesForSize;
- (NSUInteger)maximumSize;
- (void)setMaximumSize:(NSUInteger)maxSize;
- (double)maximumAge;
- (void)setMaximumAge:(double)maxAge;
- (BOOL)isEmpty;
- (double)totalSize;
- (void)setSizeNeedsUpdate:(BOOL)needsUpdate;
- (double)standardDeviation;
- (void)_applyFunctionOnAllResources:(void *)fp8 userInfo:(void *)fp12;
@end
