

@interface QCCompositionParameterView : NSView
{
	void *_QCCompositionParameterViewPrivate;	// 80 = 0x50
}

- (void)observeValueForKeyPath:(id)fp8 ofObject:(id)fp12 change:(id)fp16 context:(void *)fp20;
- (void)_setPatch:(id)fp8;
- (void)__patchUpdated:(id)fp8;
- (void)setCompositionRenderer:(id)fp8;
- (id)compositionRenderer;
- (BOOL)hasParameters;
- (void)setBackgroundColor:(id)fp8;
- (id)backgroundColor;
- (void)setDrawsBackground:(BOOL)fp8;
- (BOOL)drawsBackground;
- (void)setBorderType:(NSBorderType)fp8;
- (NSBorderType)borderType;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)_finishInitialization;
- (id)initWithFrame:(NSRect)fp8;
- (void)finalize;
- (void)dealloc;
- (void)encodeWithCoder:(NSCoder *)aCoder;
- (id)initWithCoder:(NSCoder *)aDecoder;
@end
