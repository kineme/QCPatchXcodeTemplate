#import <QCContext.h>
#import <QCImageManager.h>

@interface QCGraphicsContext : QCContext
{
    QCImageManager *_imageManager;
    struct CGColorSpace *_colorspace;
    int _quality;
    int _cachingMode;
    NSRect _fullFrame;
    NSRect _cleanFrame;
    NSRect _fullBounds;
    NSRect _cleanBounds;
    NSSize _pixelAspectRatio;
    NSRect _cleanAperture;
    NSMutableDictionary *_defaultOptions;
    void *_unused2[4];
}

+ (Class)renderStateClass;
+ (struct CGColorSpace *)defaultColorSpace;
- (void)_updateOptions;
- (id)initWithOptions:(id)fp8;
- (id)initWithImageManager:(id)fp8 options:(id)fp12;
- (void)_finalize_QCGraphicsContext;
- (void)finalize;
- (void)dealloc;
- (id)imageManager;
- (BOOL)startRenderingPatch:(id)fp8 options:(id)fp12;
- (void)pauseRenderingPatch:(id)fp8;
- (BOOL)renderPatch:(id)fp8 time:(double)fp12 arguments:(id)fp20;
- (void)resumeRenderingPatch:(id)fp8;
- (void)stopRenderingPatch:(id)fp8;
- (BOOL)willPushRenderState:(id)fp8;
- (void)didPushRenderState:(id)fp8;
- (void)didPopRenderState:(id)fp8;
- (void)setColorSpace:(struct CGColorSpace *)fp8;
- (struct CGColorSpace *)colorSpace;
- (void)setQualityHint:(int)fp8;
- (int)qualityHint;
- (void)setCachingModeHint:(int)fp8;
- (int)cachingModeHint;
- (void)_updateDimensions;
- (void)setFrame:(NSRect)fp8;
- (NSRect)frame;
- (void)setBounds:(NSRect)fp8;
- (NSRect)bounds;
- (void)invalidate;
- (BOOL)isValid;
- (id)imageManagerDefaultOptions;
- (NSRect)convertRectFromFrameToBounds:(NSRect)fp8;
- (NSRect)convertRectFromBoundsToFrame:(NSRect)fp8;
- (void)setPixelAspectRatio:(NSSize)fp8;
- (NSSize)pixelAspectRatio;
- (void)setCleanAperture:(NSRect)fp8;
- (NSRect)cleanAperture;
- (NSRect)fullFrame;
- (NSRect)fullBounds;

@end
