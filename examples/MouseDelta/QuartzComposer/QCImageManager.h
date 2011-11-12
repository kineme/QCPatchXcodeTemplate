#import <QCProtocols.h>
#import <QCCGLContext.h>
#import <QCResourcePool.h>
#import <GFList.h>

@interface QCImageManager : NSObject
{
    NSDictionary *_options;
    QCCGLContext *_context;
    NSMutableDictionary *_userInfo;
    struct __CFBag *_clients;
    pthread_mutex_t _managerMutex;
    QCResourcePool *_pixelBufferPool;
    QCResourcePool *_textureBufferPool;
    QCResourcePool *_texturePool;
    id <QCCache> _providerImageCache;
    id <QCCache> _representationCache;
    id <QCCache> _conversionCache;
    id <QCCache> _sequenceCache;
    id <QCCache> _imageCache;
    double _ageConfidence;
    double _requestedRAM;
    double _maximumAvailableRAM;
    double _requestedVRAM[8];
    double _maximumAvailableVRAM[8];
    int _rendererID[8];
    double _reclaimResourcesTimestamp;
    GFList *_converterCache;
    pthread_mutex_t _converterCacheMutex;
    unsigned int _converterCacheTimestamp;
    NSMutableDictionary *_exporterClassCache;
    NSMutableDictionary *_exporterTypeCache;
    pthread_mutex_t _exporterCacheMutex;
    unsigned int _exporterCacheTimestamp;
    NSMutableDictionary *_convertersList;
    pthread_mutex_t _convertersListMutex;
    pthread_cond_t _convertersListCondition;
    NSMutableDictionary *_exportersList;
    pthread_mutex_t _exportersListMutex;
    pthread_cond_t _exportersListCondition;
    void *_cvTextureCache;
    void *_unused[4];
}

+ (void)initialize;
+ (double)_maximumAvailableMemoryForRendererID:(int)fp8;
+ (id)sharedSoftwareImageManager;
+ (id)createUniqueImageManagerForQCCGLContext:(id)fp8 options:(id)fp12;
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
- (void)setUserInfo:(id)fp8 forKey:(id)fp12;
- (id)userInfoForKey:(id)fp8;
- (id)userInfo;
- (double)availableMemoryForRequestedMemory:(double)fp8 ofType:(int)fp16 virtualScreen:(unsigned int)fp20;
- (void)optimizeCaches;
- (void)reclaimResources;
- (void)purgeResources;
- (id)performanceCountersForVirtualScreen:(unsigned int)fp8 purgeable:(BOOL)fp12;
- (id)ageStatisticsForIndex:(unsigned int)fp8;
- (id)listResources;
- (id)createImageWithSource:(id)fp8 options:(id)fp12;
- (id)createFlattenedImage:(id)fp8 withFormat:(id)fp12 colorSpace:(struct CGColorSpace *)fp16 options:(id)fp20;
- (id)createPixelBufferFromProvider:(id)fp8 withFormat:(id)fp12 transformation:(id)fp16 bounds:(NSRect)fp20 colorSpace:(struct CGColorSpace *)fp36 options:(id)fp40;
- (id)createTextureBufferFromProvider:(id)fp8 withFormat:(id)fp12 target:(unsigned int)fp16 transformation:(id)fp20 bounds:(NSRect)fp24 colorSpace:(struct CGColorSpace *)fp40 options:(id)fp44;
- (id)createRepresentationFromProvider:(id)fp8 ofType:(id)fp12 withOptions:(id)fp16;
- (id)createPixelBufferWithFormat:(id)fp8 pixelsWide:(unsigned int)fp12 pixelsHigh:(unsigned int)fp16 options:(id)fp20;
- (id)createTextureBufferWithFormat:(id)fp8 target:(unsigned int)fp12 pixelsWide:(unsigned int)fp16 pixelsHigh:(unsigned int)fp20 options:(id)fp24;
- (id)createPixelBufferFromImageBuffer:(id)fp8 sourceBounds:(NSRect)fp12 options:(id)fp28;
- (id)createTextureBufferFromImageBuffer:(id)fp8 target:(unsigned int)fp12 sourceBounds:(NSRect)fp16 options:(id)fp32;
- (id)createPixelBufferFromImageBuffer:(id)fp8 withFormat:(id)fp12 transformation:(id)fp16 bounds:(NSRect)fp20 colorSpace:(struct CGColorSpace *)fp36 options:(id)fp40;
- (id)createTextureBufferFromImageBuffer:(id)fp8 withFormat:(id)fp12 target:(unsigned int)fp16 transformation:(id)fp20 bounds:(NSRect)fp24 colorSpace:(struct CGColorSpace *)fp40 options:(id)fp44;
- (struct __CVOpenGLTextureCache *)CVOpenGLTextureCache;
- (id)description;

@end

@interface QCImageManager (ConverterRegistry)
+ (void)registerImageBufferConverterClass:(Class)fp8 priority:(float)fp12;
+ (float)priorityForBufferConverterClass:(Class)fp8;
+ (id)unregisterBufferConverterClass:(Class)fp8;
+ (id)imageBufferConverterClasses;
@end

@interface QCImageManager (Internal)
- (id)createPixelBufferFromPixelBuffer:(id)fp8 bounds:(NSRect)fp12 flip:(BOOL)fp28 options:(id)fp32;
- (id)createPixelBufferFromTextureBuffer:(id)fp8 bounds:(NSRect)fp12 options:(id)fp28;
- (id)createTextureBufferFromPixelBuffer:(id)fp8 target:(unsigned int)fp12 bounds:(NSRect)fp16 options:(id)fp32;
- (id)createTextureBufferFromTextureBuffer:(id)fp8 target:(unsigned int)fp12 bounds:(NSRect)fp16 flip:(BOOL)fp32 options:(id)fp36;
- (id)_createPixelBufferFromImageBuffer:(id)fp8 bounds:(NSRect)fp12 needsClipping:(BOOL)fp28 flippedState:(int)fp32 options:(id)fp36;
- (id)_createTextureBufferFromImageBuffer:(id)fp8 target:(unsigned int)fp12 bounds:(NSRect)fp16 needsClipping:(BOOL)fp32 flippedState:(int)fp36 options:(id)fp40;
- (BOOL)_computeImageBufferParametersForProvider:(id)fp8 withFormat:(id)fp12 target:(unsigned int)fp16 colorSpace:(struct CGColorSpace *)fp20 outSrcFormat:(id *)fp24 outSrcTarget:(unsigned int *)fp28 outSrcColorSpace:(struct CGColorSpace **)fp32 outDstFormat:(id *)fp36 outDstTarget:(unsigned int *)fp40 outDstColorSpace:(struct CGColorSpace **)fp44 relaxedFormat:(BOOL)fp48 softwareOnly:(BOOL)fp52;
- (id)_createImageBufferFromProvider:(id)fp8 withFormat:(id)fp12 target:(unsigned int)fp16 transformation:(id)fp20 bounds:(NSRect)fp24colorSpace:(struct CGColorSpace *)fp40 options:(id)fp44;
- (id)_createImageBufferFromImageBuffer:(id)fp8 withFormat:(id)fp12 target:(unsigned int)fp16 transformation:(id)fp20 bounds:(NSRect)fp24 colorSpace:(struct CGColorSpace *)fp40 options:(id)fp44;
- (pthread_mutex_t *)_convertersListMutex;
- (pthread_cond_t *)_convertersListCondition;
- (id)_convertersList;
@end

@interface QCImageManager (QCProFX)
- (id)copyPixelBufferFromImageBuffer:(id)fp8 sourceBounds:(NSRect)fp12 options:(id)fp28;
@end

