#import <QCImageBuffer.h>
#import <QCCGLContext.h>

@interface QCImageTextureBuffer : QCImageBuffer
{
    unsigned int _target;
    unsigned int _levels;
    unsigned int _name;
    float _matrix[16];
    QCCGLContext *_context;
    unsigned int _flags;
    unsigned int _depth;
    unsigned int _frameBuffer;
    unsigned int _renderBuffer;
    struct _CGLPBufferObject *_pBuffer;
    unsigned int _virtualScreen;
    QCCGLContext *_updateContext;
    int _saveBuffer;
    int _saveViewport[4];
    BOOL _purgeable;
    void *_unused2[4];
}

- (void)_updateMatrix;
- (id)initWithTextureName:(unsigned int)fp8 releaseCallback:(void *)fp12 releaseInfo:(void *)fp16 context:(id)fp20 format:(id)fp24 target:(unsigned int)fp28 flipped:(BOOL)fp32 colorSpace:(struct CGColorSpace *)fp36 options:(id)fp40;
- (id)initWithTextureName:(unsigned int)fp8 releaseCallback:(void *)fp12 releaseInfo:(void *)fp16 context:(id)fp20 format:(id)fp24 target:(unsigned int)fp28 width:(unsigned int)fp32 height:(unsigned int)fp36 mipmapLevels:(unsigned int)fp40 flipped:(BOOL)fp44 colorSpace:(struct CGColorSpace *)fp48 options:(id)fp52;
- (id)initWithContext:(id)fp8 format:(id)fp12 target:(unsigned int)fp16 pixelsWide:(unsigned int)fp20 pixelsHigh:(unsigned int)fp24 options:(id)fp28;
- (void)_finalize_QCImageTextureBuffer;
- (void)finalize;
- (void)dealloc;
- (BOOL)setPurgeable:(BOOL)fp8;
- (BOOL)purgeable;
- (void)willRecycleResource:(id)fp8;
- (id)context;
- (unsigned int)target;
- (unsigned int)levels;
- (unsigned int)name;
- (const float *)matrix;
- (unsigned int)virtualScreen;
- (BOOL)beginUploadTexture:(BOOL)fp8 colorSpace:(struct CGColorSpace *)fp12;
- (BOOL)beginUploadTexture:(BOOL)fp8 colorSpace:(struct CGColorSpace *)fp12 virtualScreen:(unsigned int)fp16;
- (BOOL)uploadTextureWithBaseAddress:(void *)fp8 releaseCallback:(void *)fp12 releaseInfo:(void *)fp16 bytesPerRow:(unsigned int)fp20;
- (void)endUploadTexture;
- (id)beginRenderTexture:(BOOL)fp8 colorSpace:(struct CGColorSpace *)fp12;
- (id)beginRenderTexture:(BOOL)fp8 colorSpace:(struct CGColorSpace *)fp12 virtualScreen:(unsigned int)fp16;
- (void)endRenderTexture;
- (void)endRenderTextureAndFinish:(BOOL)fp8;
- (id)pixelBufferRepresentation;
- (void)clearBuffer;
- (id)description;

@end

@interface QCImageTextureBuffer (QCOpenGLPort_Image)
- (struct _CGLPBufferObject *)_pBuffer;
@end

@interface QCImageTextureBuffer (Extensions)
+ (id)_supportedPixelFormatsForContext:(id)fp8 compatibility:(id)fp12;
+ (id)supportedUploadFormatsForContext:(id)fp8;
+ (id)supportedRenderFormatsForContext:(id)fp8;
- (void)setWrappingMode:(int)fp8;
- (void)setFilteringMode:(int)fp8;
- (void)setAnisotropy:(float)fp8;
- (BOOL)_downloadTextureWithBounds:(NSRect)fp8 usingPixelFormat:(id)fp24 toAddress:(void *)fp28 bytesPerRow:(unsigned int)fp32;
- (BOOL)downloadTextureWithBounds:(NSRect)fp8 toAddress:(void *)fp24 bytesPerRow:(unsigned int)fp28;
- (BOOL)isValidOnContext:(id)fp8;
- (BOOL)_hasPBuffer;
- (void)bindTextureToCGLContext:(struct _CGLContextObject *)fp8 textureUnit:(unsigned int)fp12 applyInternalMatrix:(BOOL)fp16 externalMatrix:(float *)fp20 savedState:(QCOpenGLTextureState *)fp24;
- (void)bindTextureToContext:(id)fp8 textureUnit:(unsigned int)fp12 applyMatrix:(BOOL)fp16 savedState:(QCOpenGLTextureState *)fp20;
- (void)unbindTextureFromCGLContext:(struct _CGLContextObject *)fp8 textureUnit:(unsigned int)fp12 savedState:(QCOpenGLTextureState *)fp16;
- (void)unbindTextureFromContext:(id)fp8 textureUnit:(unsigned int)fp12 savedState:(QCOpenGLTextureState *)fp16;
- (void)drawTextureWithContext:(id)fp8 inRect:(NSRect)fp12;
@end


