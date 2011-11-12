@class QCCGLContext, QCCLContext, QCCache, QCImageManager, QCResourcePool, QCSourceCodeView;

@interface QCStreamManager : NSObject
{
	QCCache **_rootCache;	// 4 = 0x4
	QCCache *_representationCache;	// 8 = 0x8
	QCCache *_providerCache;	// 12 = 0xc
	QCResourcePool **_rootPool;	// 16 = 0x10
	QCCLContext *_clContext;	// 20 = 0x14
	QCCGLContext *_glContext;	// 24 = 0x18
	QCImageManager *_imageManager;	// 28 = 0x1c
	NSUInteger _deviceCount;	// 32 = 0x20
	unsigned long long *_deviceSizes;	// 36 = 0x24
	cl_context *_context;	// 40 = 0x28
	cl_device_id **_devices;	// 44 = 0x2c
	cl_device_id **_virtualScreenCache;	// 48 = 0x30
	NSUInteger *_deviceTypes;	// 52 = 0x34
	BOOL _disableGPUDevice;	// 56 = 0x38
	NSMutableDictionary *_exporterClassCache;	// 60 = 0x3c
	NSMutableDictionary *_exporterTypeCache;	// 64 = 0x40
	NSMutableDictionary *_exportersList;	// 68 = 0x44
	pthread_mutex_t _exporterCacheMutex;	// 72 = 0x48
	pthread_mutex_t _exportersListMutex;	// 116 = 0x74
	pthread_cond_t _exportersListCondition;	// 160 = 0xa0
	NSUInteger _exporterCacheTimestamp;	// 188 = 0xbc
	NSWindow *_sourceWindow;	// 192 = 0xc0
	QCSourceCodeView *_sourceView;	// 196 = 0xc4
	NSUInteger _flags;	// 200 = 0xc8
	void *unused[4];	// 204 = 0xcc
}
@property (readonly,assign) cl_device_id *bestDevice;
@property (readwrite,assign) BOOL disableGPUDevice;
@property (readonly,assign) QCCLContext *openCLContext;
@property (readonly,assign) QCCGLContext *openGLContext;
@property (readonly,assign) cl_context *context;

+ (void)initialize;
+ (id)copySharedManager;
+ (id)copyManagerWithOpenGLContext:(id)fp8;
+ (id)copyManagerWithImageManager:(id)fp8;
- (id)_QCOpenGLContextForCurrentThread;
- (BOOL)_initializeContext;
- (void)_finalizeContext;
- (void)_releaseContext;
- (void)_releaseStreamManagerCache;
- (id)init;
- (id)initWithOpenGLContext:(id)fp8;
- (void)setDisableGPUDevice:(BOOL)fp8;
- (id)_cacheForDevice:(cl_device_id *)fp8;
- (id)_poolForDevice:(cl_device_id *)fp8;
- (void)_finalize_QCStreamManager;
- (void)finalize;
- (void)dealloc;
- (void)reclaimResources;
- (void)purgeResources;
- (cl_device_id *)bestDevice;
- (id)createStreamWithSource:(id)fp8 options:(id)fp12;
- (id)_createArrayMemObjectFromMemObject:(id)fp8 withCount:(NSUInteger)count elementSize:(NSUInteger)size type:(int)fp20 attachToOpenGL:(BOOL)attach options:(id)fp28;
- (id)createArrayMemObjectFromProvider:(id)fp8 withCount:(NSUInteger)count elementSize:(NSUInteger)size type:(int)fp20 options:(id)fp24;
- (id)createImage2DMemObjectFromProvider:(id)fp8 withFormat:(id)fp12 options:(id)fp16;
- (id)createImage3DMemObjectFromProvider:(id)fp8 options:(id)fp12;
- (id)createRepresentationFromProvider:(id)fp8 ofType:(id)fp12 withCount:(NSUInteger)count elementSize:(NSUInteger)size type:(int)fp24 options:(id)fp28;
- (id)createArrayMemObjectWithCount:(NSUInteger)count elementSize:(NSUInteger)size type:(int)fp16 attachToOpenGL:(BOOL)attach options:(id)fp24;
- (id)createImage2DMemObjectWithFormat:(id)fp8 pixelsWide:(NSUInteger)width pixelsHigh:(NSUInteger)height attachToOpenGL:(BOOL)attach options:(id)fp24;
- (id)createImage3DMemObjectWithPixelsWide:(NSUInteger)width pixelsHigh:(NSUInteger)height pixelsDeep:(NSUInteger)depth elementSize:(NSUInteger)size type:(int)fp24 attachToOpenGL:(BOOL)attach options:(id)fp32;
- (BOOL)disableGPUDevice;
- (QCCLContext*)openCLContext;
- (QCCGLContext*)openGLContext;
- (cl_context *)context;
@end

@interface QCStreamManager (Private)
- (BOOL)_useOpenGLAttachments;
- (NSUInteger)_virtualScreenForDevice:(cl_device_id *)fp8;
@end
