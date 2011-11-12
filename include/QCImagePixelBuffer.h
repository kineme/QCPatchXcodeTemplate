@interface QCImagePixelBuffer : QCImageBuffer
{
	NSUInteger _rowBytes;	// 144 = 0x90
	BOOL _purgeable;	// 148 = 0x94
	void *_unused2[4];	// 152 = 0x98
}

- (id)initWithFormat:(id)fp8 pixelsWide:(NSUInteger)width pixelsHigh:(NSUInteger)height options:(id)fp20;
- (id)initWithPixelBuffer:(id)fp8 bounds:(NSRect)fp12 replacingFormat:(id)fp28;
- (id)initWithFormat:(id)fp8 baseAddress:(const void *)fp12 releaseCallback:(void *)fp16 releaseInfo:(void *)releaseInfo bytesPerRow:(NSUInteger)bytesPerRow pixelsWide:(NSUInteger)width pixelsHigh:(NSUInteger)height flipped:(BOOL)isFlipped colorSpace:(CGColorSpaceRef)colorspace options:(NSDictionary*)options;
- (void *)baseAddress;
- (NSUInteger)bytesPerRow;
- (BOOL)beginUpdatePixels:(BOOL)alwaysTrue colorSpace:(CGColorSpaceRef)colorspace;
- (void)clearBuffer;
- (void)endUpdatePixels;
- (id)pixelBufferRepresentation;
- (BOOL)setPurgeable:(BOOL)purgeable;
- (BOOL)purgeable;
- (NSString*)description;
@end

@interface QCImagePixelBuffer (QCProFX)
- (void)clearToBlack;
@end

@interface QCImagePixelBuffer (Extensions)
- (void *)baseAddressForSkippedRows:(NSUInteger)fp8 skippedPixels:(NSUInteger)fp12;
- (CGImageRef)createCGImageWithRenderingIntent:(int)fp8 shouldInterpolate:(BOOL)interpolate;
- (CGContextRef)createCGContext;
@end
