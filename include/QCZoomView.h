@interface QCZoomView : NSView
{
	NSPoint _cachedCenter;	// 80 = 0x50
	CGFloat _cachedZoomFactorX;	// 88 = 0x58
	CGFloat _cachedZoomFactorY;	// 92 = 0x5c
	CGFloat _zoomFactorX;	// 96 = 0x60
	CGFloat _zoomFactorY;	// 100 = 0x64
	void *_unused[4];	// 104 = 0x68
}

- (id)initWithFrame:(NSRect)fp8;
- (void)scrollWheel:(id)fp8;
- (BOOL)autoscroll:(id)fp8;
- (void)viewDidMoveToSuperview;
- (NSRect)maxBounds;
- (NSRect)selectionBounds;
- (BOOL)allowsNonSquareZooming;
- (CGFloat)resizeHotzoneWidth;
- (CGFloat)incrementalZoomAmount;
- (CGFloat)minX;
- (CGFloat)maxX;
- (CGFloat)minY;
- (CGFloat)maxY;
- (CGFloat)zoomFactorX;
- (CGFloat)zoomFactorY;
- (void)setZoomFactorX:(CGFloat)fp8;
- (void)setZoomFactorY:(CGFloat)fp8;
- (void)zoomToFitSelection;
- (void)zoomToFitAll;
- (BOOL)zoomStateCached;
- (void)cacheZoomState;
- (void)restoreZoomState;
- (void)zoomInX;
- (void)zoomInY;
- (void)zoomOutX;
- (void)zoomOutY;
@end

@interface QCZoomView (Private)
- (NSPoint)_centerPoint;
- (void)_setCenterPoint:(NSPoint)fp8;
- (void)_setZoomFactorX:(CGFloat)fp8 factorY:(CGFloat)fp12 centerPoint:(NSPoint)fp16;
- (void)_zoomWithSpeedFactorForX:(CGFloat)fp8 speedFactorForY:(CGFloat)fp12;
- (void)_zoomToFitRect:(NSRect)fp8;
- (void)_adjustFrame;
- (void)__frameChanged:(id)fp8;
@end
