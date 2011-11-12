@interface QCProfileView : NSView
{
	NSUInteger _size;	// 80 = 0x50
	NSColor **_colors;	// 84 = 0x54
	NSString **_names;	// 88 = 0x58
	NSString *_label;	// 92 = 0x5c
	double _units;	// 96 = 0x60
	CGFloat *_buffer;	// 104 = 0x68
	NSUInteger _bufferStart;	// 108 = 0x6c
	NSUInteger _bufferLength;	// 112 = 0x70
	CGFloat *_min;	// 116 = 0x74
	CGFloat *_max;	// 120 = 0x78
	void *_unused[4];	// 124 = 0x7c
}

- (void)dealloc;
- (BOOL)isOpaque;
- (void)setSampleSize:(NSUInteger)sampleSize;
- (NSUInteger)sampleSize;
- (void)setUnits:(double)units;
- (double)units;
- (void)setLabel:(NSString*)label;
- (NSString*)label;
- (void)setColor:(NSColor*)color forIndex:(NSUInteger)index;
- (NSColor*)colorForIndex:(NSUInteger)fp8;
- (void)setName:(id)fp8 forIndex:(NSUInteger)index;
- (NSString*)nameForIndex:(NSUInteger)index;
- (void)_plotCurve:(CGContextRef)context offset:(CGFloat)offset scale:(CGFloat)scale sample:(CGFloat *)fp20 min:(CGFloat *)fp24 max:(CGFloat *)fp28 stride:(NSUInteger)fp32 count:(NSUInteger)fp36;
- (void)drawRect:(NSRect)rect;
- (void)addSample:(const double *)sample;
- (void)clearAllSamples;
- (void)mouseDown:(NSEvent*)theEvent;

@end
