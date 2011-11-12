@interface GFTooltipView : NSView
{
	NSString *_string;	// 80 = 0x50
}

+ (id)sharedView;
+ (id)sharedWithString:(NSString*)string;
+ (NSDictionary*)textAttributes;
+ (NSColor*)backgroundColor;
+ (NSColor*)frameColor;
- (void)dealloc;
- (BOOL)isOpaque;
- (BOOL)isFlipped;
- (NSString*)string;
- (void)setString:(NSString*)string;
- (void)drawRect:(NSRect)rect;
@end
