#import <QCProtocols.h>
#import <QCImagePort.h>
#import <QCImageTextureBuffer.h>

@interface QCOpenGLPort_Image : QCImagePort <QCOpenGLPort>
{
    QCImageTextureBuffer *_texture;
    NSRect _textureBounds;
    NSAffineTransform *_textureTransformation;
    QCOpenGLTextureState _savedState;
    void *_unused6[3];
}

- (void)setRawValue:(id)fp8;
- (void)setOnOpenGLContext:(id)fp8;
- (void)setOnOpenGLContext:(id)fp8 unit:(unsigned int)fp12;
- (void)setOnOpenGLContext:(id)fp8 unit:(unsigned int)fp12 fromBounds:(NSRect)fp16 withTarget:(unsigned int)fp32 mipmappingLevels:(unsigned int)fp36 matrix:(float *)fp40;
- (void)setOnOpenGLContext:(id)fp8 unit:(unsigned int)fp12 withBounds:(NSRect)fp16 transformation:(id)fp32 target:(unsigned int)fp36 mipmappingLevels:(unsigned int)fp40 matrix:(float *)fp44;
- (void)unsetOnOpenGLContext:(id)fp8;
- (void)unsetOnOpenGLContext:(id)fp8 unit:(unsigned int)fp12;
- (void)_clearTexture;

@end

@interface QCOpenGLPort_Image (Tooltip)
- (id)tooltipString;
@end


