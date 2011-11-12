

@class QCSourceTextView;

@interface QCSourceRulerView : NSRulerView
{
	QCSourceTextView *_sourceView;	// 144 = 0x90
}

- (CGFloat)requiredThickness;
- (void)setSourceView:(id)fp8;
- (void)drawRect:(NSRect)fp8;
@end
