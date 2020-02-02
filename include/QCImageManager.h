@class QCCGLContext, QCResourcePool;

@interface QCImageManager : NSObject
{
	NSDictionary *_options;	// 4 = 0x4
	QCCGLContext *_context;	// 8 = 0x8
	NSMutableDictionary *_userInfo;	// 12 = 0xc
	CFBagRef _clients;	// 16 = 0x10
	pthread_mutex_t _managerMutex;	// 20 = 0x14
	QCResourcePool *_pixelBufferPool;	// 64 = 0x40
	QCResourcePool *_textureBufferPool;	// 68 = 0x44
	QCResourcePool *_texturePool;	// 72 = 0x48
	id <QCCache> _providerImageCache;	// 76 = 0x4c
	id <QCCache> _representationCache;	// 80 = 0x50
	id <QCCache> _conversionCache;	// 84 = 0x54
	id <QCCache> _sequenceCache;	// 88 = 0x58
	id <QCCache> _imageCache;	// 92 = 0x5c
	double _ageConfidence;	// 96 = 0x60
	double _requestedRAM;	// 104 = 0x68
	double _maximumAvailableRAM;	// 112 = 0x70
	double _requestedVRAM[8];	// 120 = 0x78
	double _maximumAvailableVRAM[8];	// 184 = 0xb8
	int _rendererID[8];	// 248 = 0xf8
	double _reclaimResourcesTimestamp;	// 280 = 0x118
	CGFloat _GCReclaimResourcesTimestamp;	// 288 = 0x120
	GFList *_converterCache;	// 292 = 0x124
	NSUInteger _converterCacheTimestamp;	// 296 = 0x128
	pthread_mutex_t _converterCacheMutex;	// 300 = 0x12c
	NSMutableDictionary *_exporterClassCache;	// 344 = 0x158
	NSMutableDictionary *_exporterTypeCache;	// 348 = 0x15c
	NSUInteger _exporterCacheTimestamp;	// 352 = 0x160
	pthread_mutex_t _exporterCacheMutex;	// 356 = 0x164
	NSMutableDictionary *_convertersList;	// 400 = 0x190
	pthread_mutex_t _convertersListMutex;	// 404 = 0x194
	pthread_cond_t _convertersListCondition;	// 448 = 0x1c0
	NSMutableDictionary *_exportersList;	// 476 = 0x1dc
	pthread_mutex_t _exportersListMutex;	// 480 = 0x1e0
	pthread_cond_t _exportersListCondition;	// 524 = 0x20c
	void *_cvTextureCache;	// 552 = 0x228
	QCCacheProfileInfo *_cacheProfileInfo;	// 556 = 0x22c
	void *_unused[1];	// 560 = 0x230
}

+ (void)initialize;
+ (double)_maximumAvailableMemoryForRendererID:(int)fp8;
+ (id)sharedSoftwareImageManager;
+ (QCImageManager *)createUniqueImageManagerForQCCGLContext:(QCCGLContext *)context options:(NSDictionary *)options;
- (id)initWithQCCGLContext:(id)fp8 options:(id)fp12;
- (id)initWithOpenGLContext:(id)fp8 options:(id)fp12;
- (void)_finalize_QCImageManager;
- (void)finalize;
- (void)dealloc;
- (id)options;
- (id)openGLContext;
- (id)openGLContextForCurrentThread;
- (id)QCCGLContext;
- (void)registerClient:(id)fp8;
- (void)unregisterClient:(id)fp8;
- (id)registeredClients;
- (void)_setProfileCache:(BOOL)fp8;
- (QCCacheProfileInfo *)_cacheProfileInfo;
- (void)setUserInfo:(id)fp8 forKey:(id)fp12;
- (id)userInfoForKey:(id)fp8;
- (id)userInfo;
- (double)availableMemoryForRequestedMemory:(double)fp8 ofType:(int)fp16 virtualScreen:(NSUInteger)fp20;
- (void)optimizeCaches;
- (void)reclaimResources;
- (void)purgeResources;
- (id)performanceCountersForVirtualScreen:(NSUInteger)fp8 purgeable:(BOOL)fp12;
- (id)ageStatisticsForIndex:(NSUInteger)fp8;
- (id)listResources;
- (id)createImageWithSource:(id)fp8 options:(id)fp12 NS_RETURNS_RETAINED;
- (id)createFlattenedImage:(id)fp8 withFormat:(id)fp12 colorSpace:(CGColorSpaceRef)fp16 options:(id)fp20 NS_RETURNS_RETAINED;
- (id)createPixelBufferFromProvider:(id)fp8 withFormat:(id)fp12 transformation:(id)fp16 bounds:(NSRect)fp20 colorSpace:(CGColorSpaceRef)fp36 options:(id)fp40 NS_RETURNS_RETAINED;
- (id)createTextureBufferFromProvider:(id)fp8 withFormat:(id)fp12 target:(GLuint)fp16 transformation:(id)fp20 bounds:(NSRect)fp24 colorSpace:(CGColorSpaceRef)fp40 options:(id)fp44 NS_RETURNS_RETAINED;
- (id)createRepresentationFromProvider:(id)fp8 ofType:(id)fp12 withOptions:(id)fp16 NS_RETURNS_RETAINED;
- (id)createPixelBufferWithFormat:(id)fp8 pixelsWide:(NSUInteger)fp12 pixelsHigh:(NSUInteger)fp16 options:(id)fp20 NS_RETURNS_RETAINED;
- (id)createTextureBufferWithFormat:(id)fp8 target:(GLuint)fp12 pixelsWide:(NSUInteger)fp16 pixelsHigh:(NSUInteger)fp20 options:(id)fp24 NS_RETURNS_RETAINED;
- (id)createPixelBufferFromImageBuffer:(id)fp8 sourceBounds:(NSRect)fp12 options:(id)fp28 NS_RETURNS_RETAINED;
- (id)createTextureBufferFromImageBuffer:(id)fp8 target:(GLuint)fp12 sourceBounds:(NSRect)fp16 options:(id)fp32 NS_RETURNS_RETAINED;
- (id)createPixelBufferFromImageBuffer:(id)fp8 withFormat:(id)fp12 transformation:(id)fp16 bounds:(NSRect)fp20 colorSpace:(CGColorSpaceRef)fp36 options:(id)fp40 NS_RETURNS_RETAINED;
- (id)createTextureBufferFromImageBuffer:(id)fp8 withFormat:(id)fp12 target:(GLuint)fp16 transformation:(id)fp20 bounds:(NSRect)fp24 colorSpace:(CGColorSpaceRef)fp40 options:(id)fp44 NS_RETURNS_RETAINED;
- (CVOpenGLTextureCacheRef)CVOpenGLTextureCache;
- (NSString*)description;
@end

@interface QCImageManager (QCProFX)
- (id)copyPixelBufferFromImageBuffer:(id)fp8 sourceBounds:(NSRect)fp12 options:(id)fp28;
@end

@interface QCImageManager (Internal)
- (id)createPixelBufferFromPixelBuffer:(id)fp8 bounds:(NSRect)fp12 flip:(BOOL)fp28 options:(id)fp32 NS_RETURNS_RETAINED;
- (id)createPixelBufferFromTextureBuffer:(id)fp8 bounds:(NSRect)fp12 options:(id)fp28 NS_RETURNS_RETAINED;
- (id)createTextureBufferFromPixelBuffer:(id)fp8 target:(GLuint)fp12 bounds:(NSRect)fp16 options:(id)fp32 NS_RETURNS_RETAINED;
- (id)createTextureBufferFromTextureBuffer:(id)fp8 target:(GLuint)fp12 bounds:(NSRect)fp16 flip:(BOOL)fp32 options:(id)fp36 NS_RETURNS_RETAINED;
- (id)_createPixelBufferFromImageBuffer:(id)fp8 bounds:(NSRect)fp12 needsClipping:(BOOL)fp28 flippedState:(int)fp32 options:(id)fp36 NS_RETURNS_RETAINED;
- (id)_createTextureBufferFromImageBuffer:(id)fp8 target:(GLuint)fp12 bounds:(NSRect)fp16 needsClipping:(BOOL)fp32 flippedState:(int)fp36 options:(id)fp40 NS_RETURNS_RETAINED;
- (BOOL)_computeImageBufferParametersForProvider:(id)fp8 withFormat:(id)fp12 target:(GLuint)fp16 colorSpace:(CGColorSpaceRef)fp20 outSrcFormat:(id *)fp24 outSrcTarget:(unsigned int *)fp28 outSrcColorSpace:(CGColorSpaceRef *)fp32 outDstFormat:(id *)fp36 outDstTarget:(unsigned int *)fp40 outDstColorSpace:(CGColorSpaceRef *)fp44 relaxedFormat:(BOOL)fp48 softwareOnly:(BOOL)fp52;
- (id)_createImageBufferFromProvider:(id)fp8 withFormat:(id)fp12 target:(GLuint)fp16 transformation:(id)fp20 bounds:(NSRect)fp24 colorSpace:(CGColorSpaceRef)fp40 options:(id)fp44 NS_RETURNS_RETAINED;
- (id)_createImageBufferFromImageBuffer:(id)fp8 withFormat:(id)fp12 target:(GLuint)fp16 transformation:(id)fp20 bounds:(NSRect)fp24 colorSpace:(CGColorSpaceRef)fp40 options:(id)fp44 NS_RETURNS_RETAINED;
- (pthread_mutex_t *)_convertersListMutex;
- (pthread_cond_t *)_convertersListCondition;
- (id)_convertersList;
@end

@interface QCImageManager (ConverterRegistry)
+ (void)registerImageBufferConverterClass:(Class)fp8 priority:(float)fp12;
+ (float)priorityForBufferConverterClass:(Class)fp8;
+ (id)unregisterBufferConverterClass:(Class)fp8;
+ (id)imageBufferConverterClasses;
@end
