#import "QCImageBuffer.h"

@class QCCGLContext;

@interface QCImageTextureBuffer : QCImageBuffer
{
	GLuint _target;	// 144 = 0x90
	NSUInteger _levels;	// 148 = 0x94
	NSUInteger _samples;	// 152 = 0x98
	GLuint _name;	// 156 = 0x9c
	CGFloat _matrix[16];	// 160 = 0xa0
	QCCGLContext *_context;	// 224 = 0xe0
	NSUInteger _flags;	// 228 = 0xe4
	NSUInteger _depth;	// 232 = 0xe8
	GLuint _frameBuffer;	// 236 = 0xec
	GLuint _renderBuffer;	// 240 = 0xf0
	CGLPBufferObj *_pBuffer;	// 244 = 0xf4
	NSUInteger _virtualScreen;	// 248 = 0xf8
	QCCGLContext *_updateContext;	// 252 = 0xfc
	int _saveBuffer;	// 256 = 0x100
	int _saveViewport[4];	// 260 = 0x104
	BOOL _purgeable;	// 276 = 0x114
	BOOL _saveScissor;	// 277 = 0x115
	NSUInteger _saveVirtualScreen;	// 280 = 0x118
	void *_unused2[3];	// 284 = 0x11c
}

- (void)_updateMatrix;
- (id)initWithTextureName:(GLuint)fp8 releaseCallback:(void *)fp12 releaseInfo:(void *)fp16 context:(id)fp20 format:(id)fp24 target:(GLuint)fp28 flipped:(BOOL)fp32 colorSpace:(CGColorSpaceRef)fp36 options:(id)fp40;
- (id)initWithTextureName:(GLuint)fp8 releaseCallback:(void *)fp12 releaseInfo:(void *)fp16 context:(id)fp20 format:(id)fp24 target:(GLuint)fp28 width:(unsigned int)fp32 height:(unsigned int)fp36 mipmapLevels:(unsigned int)fp40 flipped:(BOOL)fp44 colorSpace:(CGColorSpaceRef)fp48 options:(id)fp52;
- (id)initWithContext:(id)fp8 format:(id)fp12 target:(GLuint)fp16 pixelsWide:(unsigned int)fp20 pixelsHigh:(unsigned int)fp24 options:(id)fp28;
- (id)copyWithZone_GCCacheResource:(NSZone *)zone;
- (void)_finalize_QCImageTextureBuffer;
- (void)finalize;
- (void)dealloc;
- (BOOL)setPurgeable:(BOOL)fp8;
- (BOOL)purgeable;
- (void)willRecycleResource:(id)fp8;
- (id)context;
- (GLuint)target;
- (NSUInteger)levels;
- (GLuint)name;
- (const CGFloat *)matrix;
- (NSUInteger)virtualScreen;
- (BOOL)beginUploadTexture:(BOOL)fp8 colorSpace:(CGColorSpaceRef)fp12;
- (BOOL)beginUploadTexture:(BOOL)fp8 colorSpace:(CGColorSpaceRef)fp12 virtualScreen:(NSUInteger)fp16;
- (BOOL)uploadTextureWithBaseAddress:(void *)fp8 releaseCallback:(void *)fp12 releaseInfo:(void *)fp16 bytesPerRow:(NSUInteger)fp20;
- (void)endUploadTexture;
- (id)beginRenderTexture:(BOOL)fp8 colorSpace:(CGColorSpaceRef)fp12;
- (id)beginRenderTexture:(BOOL)fp8 colorSpace:(CGColorSpaceRef)fp12 virtualScreen:(NSUInteger)fp16;
- (void)endRenderTexture;
- (void)endRenderTextureAndFinish:(BOOL)fp8;
- (id)pixelBufferRepresentation;
- (void)clearBuffer;
- (NSString*)description;

@end

@interface QCImageTextureBuffer (QCRenderInImage)
- (void)_unsetRenderStates;
- (void)_setRenderStates;
@end

@interface QCImageTextureBuffer (QCOpenGLPort_Image)
- (CGLPBufferObj)_pBuffer;
@end

@interface QCImageTextureBuffer (Extensions)
+ (id)_supportedPixelFormatsForContext:(id)fp8 compatibility:(id)fp12;
+ (id)supportedUploadFormatsForContext:(id)fp8;
+ (id)supportedRenderFormatsForContext:(id)fp8;
- (void)setWrappingMode:(int)wrappingMode;	// GL_CLAMP, GL_REPEAT (?)
- (void)setFilteringMode:(int)filteringMode;	// GL_NEAREST, GL_LINEAR (?)
- (void)setAnisotropy:(float)anisotropy;
- (BOOL)_downloadTextureWithBounds:(NSRect)fp8 usingPixelFormat:(id)fp24 toAddress:(void *)fp28 bytesPerRow:(NSUInteger)fp32;
- (BOOL)downloadTextureWithBounds:(NSRect)fp8 toAddress:(void *)fp24 bytesPerRow:(NSUInteger)fp28;
- (BOOL)isValidOnContext:(id)fp8;
- (BOOL)_hasPBuffer;
- (unsigned int)_renderBuffer;
- (NSUInteger)_levels;
- (NSUInteger)_depth;
- (void)bindTextureToCGLContext:(CGLContextObj)fp8 textureUnit:(GLuint)fp12 applyInternalMatrix:(BOOL)fp16 externalMatrix:(CGFloat *)fp20 savedState:(CDAnonymousStruct12 *)fp24 shadowBuffer:(BOOL)fp28 enableTexture:(BOOL)fp32;
- (void)bindTextureToCGLContext:(CGLContextObj)fp8 textureUnit:(GLuint)fp12 applyInternalMatrix:(BOOL)fp16 externalMatrix:(CGFloat *)fp20 savedState:(CDAnonymousStruct12 *)fp24;
- (void)bindTextureToContext:(id)fp8 textureUnit:(GLuint)fp12 applyMatrix:(BOOL)fp16 savedState:(CDAnonymousStruct12 *)fp20;
- (void)unbindTextureFromCGLContext:(CGLContextObj)fp8 textureUnit:(GLuint)fp12 savedState:(CDAnonymousStruct12 *)fp16 shadowBuffer:(BOOL)fp20 enableTexture:(BOOL)fp24;
- (void)unbindTextureFromCGLContext:(CGLContextObj)fp8 textureUnit:(GLuint)fp12 savedState:(CDAnonymousStruct12 *)fp16;
- (void)unbindTextureFromContext:(id)fp8 textureUnit:(GLuint)fp12 savedState:(CDAnonymousStruct12 *)fp16;
- (void)drawTextureWithContext:(id)fp8 inRect:(NSRect)fp12;
@end
