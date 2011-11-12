#import <QCResource.h>
#import <QCPixelFormat.h>

@interface QCCGLContext : QCResource
{
    QCCGLContext *_rootContext;
    NSDictionary *_options;
    struct _CGLContextObject *_cglContext;
    struct _CGLPixelFormatObject *_cglPixelFormat;
    unsigned int _virtualScreenCount;
    CIContext *_ciContext;
    QCResourcePool *_sharedPool;
    unsigned int _defaultSharedVirtualScreen;
    unsigned int _cachedVirtualScreen;
    unsigned int _flags;
    QCPixelFormat *_renderPixelFormat;
    struct __CFArray *_dependentTextures;
    id _nsglContext;
    id _nsglPixelFormat;
    void *_unused2[2];
}

+ (void)initialize;
+ (id)contextWithPixelFormatAttributes:(const int *)fp8 options:(id)fp12;
+ (id)softwareContextForFormat:(id)fp8;
+ (id)hardwareContextForDisplay:(unsigned int)fp8;
- (id)initWithPixelFormatAttributes:(const int *)fp8 options:(id)fp12;
- (id)initWithCGLContext:(struct _CGLContextObject *)fp8 pixelFormat:(struct _CGLPixelFormatObject *)fp12 options:(id)fp16;
- (void)_finalize_QCCGLContext;
- (void)finalize;
- (void)dealloc;
- (id)options;
- (struct _CGLContextObject *)CGLContextObj;
- (struct _CGLPixelFormatObject *)CGLPixelFormatObj;
- (BOOL)enable:(int)fp8;
- (BOOL)disable:(int)fp8;
- (BOOL)isEnabled:(int)fp8;
- (BOOL)setParameter:(int)fp8 value:(int)fp12;
- (int)getParameter:(int)fp8;
- (void)lock;
- (void)unlock;
- (void)setBestVirtualScreenForRenderingSize:(NSSize)fp8;
- (void)setVirtualScreen:(unsigned int)fp8;
- (unsigned int)virtualScreen;
- (unsigned int)virtualScreenCount;
- (id)createMinimalSharedContext;
- (id)createMinimalSharedContextWithAdditionalAttributes:(const int *)fp8 recycleWhenDone:(BOOL)fp12;
- (id)minimalSharedContextForCurrentThread;
- (void)clearMinimalSharedContextForCurrentThread;
- (void)setResourcePool:(id)fp8;
- (void)willRecycleResource:(id)fp8;
- (BOOL)didRecycleResource:(id)fp8;
- (id)rootContext;
- (BOOL)isSharedWithContext:(id)fp8;
- (void)reclaimResources;
- (void)purgeResources;
- (id)description;

@end

@interface QCCGLContext (Extensions)
- (id)_ciContext;
- (id)CIContext;
@end

@interface QCCGLContext (Utilities)
- (BOOL)hasDrawable;
- (int)_rendererPropertyValue:(int)fp8;
- (unsigned int)videoMemorySize;
- (unsigned int)textureMemorySize;
- (unsigned int)_validateCachedVirtualScreen;
- (id)rendererVendor;
- (id)rendererName;
- (float)rendererVersion;
- (int)rendererID;
- (unsigned int)textureUnits;
- (BOOL)isAccelerated;
- (BOOL)isProgrammable;
- (BOOL)isCoreImageAccelerated;
- (BOOL)isFBOSupported;
- (BOOL)isFloatSupported;
- (BOOL)isExtensionSupported:(id)fp8;
- (unsigned int)maxRenderingSize;
- (unsigned int)maxTextureSizeForTarget:(unsigned int)fp8;
- (id)renderingPixelFormat;
- (NSSize)fitTextureSize:(NSSize)fp8 forTarget:(unsigned int)fp16 uniformScaling:(BOOL)fp20;
- (BOOL)readPixelsFromBounds:(int *)fp8 toBaseAddress:(void *)fp12 withBytesPerRow:(unsigned int)fp16 pixelType:(unsigned int)fp20;
- (BOOL)copyPixelsFromBounds:(int *)fp8 toSharedCGLContext:(struct _CGLContextObject *)fp12 usingInternalFormat:(unsigned int)fp16;
@end

@interface QCCGLContext (NSOpenGLContext)
- (id)initWithOpenGLContext:(id)fp8 pixelFormat:(id)fp12 options:(id)fp16;
- (id)NSOpenGLContext;
- (id)NSOpenGLPixelFormat;
@end

@interface QCCGLContext (SnapshotImage)
- (id)createSnapshotImageOfType:(id)fp8 withColorSpace:(struct CGColorSpace *)fp12;
@end

@interface QCCGLContext (QCGraphicsContext)
+ (id)copyGlobalRootContext;
+ (id)createUniqueContextWithOptions:(id)fp8;
@end

@interface QCCGLContext (TextureDependencies)
- (BOOL)hasDependentTextures;
- (void)addDependentTexture:(id)fp8;
- (void)removeAllDependentTextures;
@end

