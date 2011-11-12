@interface QCSourceTextView : NSTextView 
#if MAC_OS_X_VERSION_MAX_ALLOWED >= 1060
	<NSTextDelegate, NSTextViewDelegate>
#endif
{
	BOOL _showLines;	// 84 = 0x54
	NSDictionary *_keywordColors;	// 88 = 0x58
	NSColor *_stringColor;	// 92 = 0x5c
	NSColor *_commentColor;	// 96 = 0x60
	NSColor *_preprocessorColor;	// 100 = 0x64
	NSColor *_errorColor;	// 104 = 0x68
#if MAC_OS_X_VERSION_MAX_ALLOWED >= 1060	
	NSColor *_numberColor;	// 108 = 0x6c
	NSUInteger _fontSize;	// 112 = 0x70
	void *_unused[3];	// 116 = 0x74
#else
	void *_unused[4];	// 108 = 0x6c
#endif
}

+ (void)parseSource:(id)fp8 callback:(void *)fp12 userInfo:(void *)userInfo;
- (void)_finishInitialization;
- (id)initWithFrame:(NSRect)frameRect;
- (id)initWithCoder:(NSCoder *)aDecoder;
- (void)dealloc;
- (void)_showLineNumbers:(BOOL)fp8;
- (void)setHasLineNumbers:(BOOL)hasLineNumbers;
- (BOOL)hasLineNumbers;
- (void)viewDidMoveToSuperview;
- (void)insertNewline:(id)sender;
- (void)_highlightLine:(NSUInteger)line withColor:(NSColor*)color;
- (void)_highlightAllLinesWithColor:(NSColor*)color;
- (void)textDidChange:(NSNotification*)notification;
- (void)setErrorLine:(NSUInteger)errorLine;
- (void)setSource:(id)fp8;
- (id)source;
- (void)setKeywordColors:(NSDictionary*)keywordColors;
- (NSDictionary*)keywordColors;
- (void)setStringColor:(NSColor*)color;
- (NSColor*)stringColor;
- (void)setCommentColor:(NSColor*)color;
- (NSColor*)commentColor;
- (void)setPreprocessorColor:(NSColor*)color;
- (NSColor*)preprocessorColor;
- (void)setErrorHighlightColor:(NSColor*)color;
- (NSColor*)errorHighlightColor;
#if MAC_OS_X_VERSION_MAX_ALLOWED >= 1060	
- (void)changeFont:(NSFont*)newFont;
- (void)keyDown:(NSEvent*)event;
- (void)setHighlightLine:(NSUInteger)line;
- (void)setNumberColor:(NSColor*)color;
- (NSColor*)numberColor;
- (void)setFontSize:(CGFloat)fontSize;
- (CGFloat)fontSize;
#endif
@end

@interface QCSourceTextView (Actions)
- (NSRange)__shiftLeft:(NSRange)range;
- (NSRange)__shiftRight:(NSRange)range;
- (void)_shiftLeft:(id)fp8;
- (void)shiftLeft:(id)fp8;
- (void)_shiftRight:(id)fp8;
- (void)shiftRight:(id)fp8;
@end
