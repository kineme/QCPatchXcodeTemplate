

@interface QCAgeProfileView : NSView
{
	void *_unused[4];	// 80 = 0x50
}

- (NSUInteger)nameCount;
- (id)nameForIndex:(NSUInteger)fp8;
- (void)setSelectedCache:(id)fp8;
- (id)selectedCache;
@end
