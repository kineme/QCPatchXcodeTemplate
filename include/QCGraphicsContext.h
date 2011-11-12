#import "QCContext.h"

@class QCEventManager, QCImageManager, QCStreamManager;

@interface QCGraphicsContext : QCContext
{
	QCImageManager *_imageManager;	// 32 = 0x20
	CGColorSpaceRef _colorspace;	// 36 = 0x24
	int _quality;	// 40 = 0x28
	int _cachingMode;	// 44 = 0x2c
	NSRect _fullFrame;	// 48 = 0x30
	NSRect _cleanFrame;	// 64 = 0x40
	NSRect _fullBounds;	// 80 = 0x50
	NSRect _cleanBounds;	// 96 = 0x60
	NSSize _pixelAspectRatio;	// 112 = 0x70
	NSRect _cleanAperture;	// 120 = 0x78
	NSMutableDictionary *_defaultOptions;	// 136 = 0x88
	QCEventManager *_eventManager;	// 140 = 0x8c
	QCStreamManager *_streamManager;	// 144 = 0x90
	void *_unused2[1];	// 148 = 0x94
}

+ (Class)renderStateClass;
+ (CGColorSpaceRef)defaultColorSpace;
- (void)_updateOptions;
- (id)initWithOptions:(id)fp8;
- (id)initWithImageManager:(QCImageManager *)imageManager options:(id)fp12;
- (void)_finalize_QCGraphicsContext;
- (void)finalize;
- (void)dealloc;
- (QCImageManager *)imageManager;
- (BOOL)startRenderingPatch:(id)fp8 options:(id)fp12;
- (void)pauseRenderingPatch:(id)fp8;
- (double)nextExecutionTimeForPatch:(id)fp8 time:(double)fp12 arguments:(id)fp20;
- (BOOL)renderPatch:(id)fp8 time:(double)fp12 arguments:(id)fp20;
- (void)resumeRenderingPatch:(id)fp8;
- (void)stopRenderingPatch:(id)fp8;
- (BOOL)willPushRenderState:(id)fp8;
- (void)didPushRenderState:(id)fp8;
- (void)didPopRenderState:(id)fp8;
- (void)setColorSpace:(CGColorSpaceRef)fp8;
- (CGColorSpaceRef)colorSpace;
- (void)setQualityHint:(int)fp8;
- (int)qualityHint;
- (void)setCachingModeHint:(int)fp8;
- (int)cachingModeHint;
- (void)_updateDimensions;
- (void)setFrame:(NSRect)fp8;
- (NSRect)frame;
- (void)setBounds:(NSRect)fp8;
- (NSRect)bounds;
- (id)eventManager;
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
- (id)streamManager;
- (BOOL)prerenderPatch:(id)fp8 time:(double)fp12 imageSizeHint:(NSSize)fp20 arguments:(id)fp28;

@end
