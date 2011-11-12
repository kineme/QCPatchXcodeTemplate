


@interface QCCGLayerResource : NSObject
{
	CGLayerRef _layer;	// 4 = 0x4
}

- (id)initWithCGLayer:(CGLayerRef)fp8;
- (void)dealloc;
- (CGLayerRef)layer;
- (void)setLayer:(CGLayerRef)fp8;

@end
