@interface QCTextRenderer : NSObject
{
	NSString *_string;	// 4 = 0x4
	int _alignmentH;	// 8 = 0x8
	int _alignmentV;	// 12 = 0xc
	NSString *_fontName;	// 16 = 0x10
	CGFloat _fontSize;	// 20 = 0x14
	CGFloat _fontKerning;	// 24 = 0x18
	CGFloat _offset;	// 28 = 0x1c
	NSRect _frame;	// 32 = 0x20
	void *_framesetterRef;	// 48 = 0x30
	void *_frameRef;	// 52 = 0x34
	NSRect _bounds;	// 56 = 0x38
}

+ (void)initialize;
- (id)init;
- (void)finalize;
- (void)dealloc;
- (void)_flushCache:(BOOL)fp8;
- (void)_updateCache;
- (void)setFontName:(NSString*)fontName size:(CGFloat)fontSize;
- (NSString*)fontName;
- (CGFloat)fontSize;
- (void)setBounds:(NSRect)bounds;
- (NSRect)bounds;
- (void)setKerningShift:(CGFloat)shift;
- (CGFloat)kerningShift;
- (void)setLeadingOffset:(CGFloat)offset;
- (CGFloat)leadingOffset;
- (void)setHorizontalAlignment:(NSTextAlignment)alignment;
- (NSTextAlignment)horizontalAlignment;
- (void)setVerticalAlignment:(NSTextAlignment)alignment;
- (NSTextAlignment)verticalAlignment;
- (void)setString:(NSString*)string;
- (NSString*)string;
- (NSUInteger)visibleLineCount;
- (NSRange)visibleStringRange;
- (NSRect)typographicBounds;
- (void)drawInContext:(CGContextRef)context;
- (void)drawInContext:(CGContextRef)context withColorRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha;
@end
