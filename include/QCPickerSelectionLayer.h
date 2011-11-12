

@interface QCPickerSelectionLayer : CALayer
{
	CGRect _selectionSelectionFrame;	// 48 = 0x30
	CGColorRef _focusRingColor;	// 64 = 0x40
}

- (void)__finalize_QCPickerSelectionLayer;
- (void)finalize;
- (void)dealloc;
- (void)drawInContext:(CGContextRef)fp8;
- (void)updateSelectionFrame:(CGRect)fp8;
- (void)setFocusRingColor:(CGColorRef)fp8;
@end
