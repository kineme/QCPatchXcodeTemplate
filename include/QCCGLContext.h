#import "QCResource.h"

@class QCPixelFormat, QCResourcePool;

@interface QCCGLContext : QCResource
{
	QCCGLContext *_rootContext;	// 28 = 0x1c
	NSDictionary *_options;	// 32 = 0x20
	CGLContextObj   _cglContext;	// 36 = 0x24
	CGLPixelFormatObj  _cglPixelFormat;	// 40 = 0x28
	NSUInteger _virtualScreenCount;	// 44 = 0x2c
	CFDictionaryRef _ciContextCache;	// 48 = 0x30
	CFDictionaryRef _rootContextCache;	// 52 = 0x34
	struct __C3DEngineContext *_c3dContext;	// 56 = 0x38
	QCResourcePool *_sharedPool;	// 60 = 0x3c
	NSUInteger _defaultSharedVirtualScreen;	// 64 = 0x40
	NSUInteger _cachedVirtualScreen;	// 68 = 0x44
	NSUInteger _flags;	// 72 = 0x48
	QCPixelFormat *_renderPixelFormat;	// 76 = 0x4c
	CFArrayRef _dependentTextures;	// 80 = 0x50
	id _nsglContext;	// 84 = 0x54
	id _nsglPixelFormat;	// 88 = 0x58
	void *_unused2[2];	// 92 = 0x5c
}

+ (void)initialize;
+ (id)contextWithPixelFormatAttributes:(const int *)fp8 options:(id)fp12;
+ (id)softwareContextForFormat:(id)fp8;
+ (id)hardwareContextForDisplay:(CGDirectDisplayID)display;
- (id)initWithPixelFormatAttributes:(const int *)fp8 options:(id)fp12;
- (id)initWithCGLContext:(CGLContextObj)fp8 pixelFormat:(CGLPixelFormatObj)fp12 options:(id)fp16;
- (void)_finalize_QCCGLContext;
- (void)finalize;
- (void)dealloc;
- (id)options;
- (CGLContextObj)CGLContextObj;
- (CGLPixelFormatObj)CGLPixelFormatObj;
- (BOOL)enable:(int)fp8;
- (BOOL)disable:(int)fp8;
- (BOOL)isEnabled:(int)fp8;
- (BOOL)setParameter:(int)fp8 value:(int)fp12;
- (int)getParameter:(int)fp8;
- (void)lock;
- (void)unlock;
- (void)setBestVirtualScreenForRenderingSize:(NSSize)renderingSize;
- (void)setVirtualScreen:(NSUInteger)virtualScreen;
- (NSUInteger)virtualScreen;
- (NSUInteger)virtualScreenCount;
- (id)createMinimalSharedContext;
- (id)createMinimalSharedContextWithAdditionalAttributes:(const int *)fp8 recycleWhenDone:(BOOL)recycle;
- (id)minimalSharedContextForCurrentThread;
- (void)clearMinimalSharedContextForCurrentThread;
- (void)setResourcePool:(id)fp8;
- (void)willRecycleResource:(id)fp8;
- (BOOL)didRecycleResource:(id)fp8;
- (id)rootContext;
- (BOOL)isSharedWithContext:(id)fp8;
- (void)reclaimResources;
- (void)purgeResources;
- (NSString*)description;
@end

@interface QCCGLContext (Extensions)
+ (id)CIBitmapContext;
- (id)_ciContext;
- (id)CIContext;
- (struct __C3DEngineContext *)C3DContext;
@end

@interface QCCGLContext (NSOpenGLContext)
- (id)initWithOpenGLContext:(id)fp8 pixelFormat:(id)fp12 options:(id)fp16;
- (id)NSOpenGLContext;
- (id)NSOpenGLPixelFormat;
@end

@interface QCCGLContext (QCGraphicsContext)
+ (id)copyGlobalRootContext;
+ (id)createUniqueContextWithOptions:(id)fp8;
@end

@interface QCCGLContext (SnapshotImage)
- (id)createSnapshotImageOfType:(id)fp8 withColorSpace:(CGColorSpaceRef)fp12;
@end

@interface QCCGLContext (TextureDependencies)
- (BOOL)hasDependentTextures;
- (void)addDependentTexture:(id)fp8;
- (void)removeAllDependentTextures;
@end

@interface QCCGLContext (Utilities)
- (BOOL)hasDrawable;
- (int)_rendererPropertyValue:(int)fp8;
- (NSUInteger)videoMemorySize;
- (NSUInteger)textureMemorySize;
- (NSUInteger)_validateCachedVirtualScreen;
- (id)rendererVendor;
- (id)rendererName;
- (float)rendererVersion;
- (int)rendererID;
- (NSUInteger)textureUnits;
- (NSUInteger)textureMaxImageUnits;
- (BOOL)isAccelerated;
- (BOOL)isProgrammable;
- (BOOL)isCoreImageAccelerated;
- (BOOL)isFBOSupported;
- (BOOL)isFloatSupported;
- (BOOL)isExtensionSupported:(id)fp8;
- (NSUInteger)maxRenderingSize;
- (NSUInteger)maxTextureSizeForTarget:(GLuint)fp8;
- (QCPixelFormat*)renderingPixelFormat;
- (NSSize)fitTextureSize:(NSSize)size forTarget:(GLuint)target uniformScaling:(BOOL)uniformScaling;
- (BOOL)readPixelsFromBounds:(int *)fp8 toBaseAddress:(void *)fp12 withBytesPerRow:(NSUInteger)fp16 pixelType:(unsigned int)fp20;
- (BOOL)copyPixelsFromBounds:(int *)fp8 toSharedCGLContext:(CGLContextObj)fp12 usingInternalFormat:(GLuint)fp16;
@end
