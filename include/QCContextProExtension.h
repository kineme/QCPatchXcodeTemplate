


@interface QCContextProExtension : NSObject
{
	double _scale;	// 4 = 0x4
}

- (id)init;
- (double)getScale;
- (void)setScale:(double)fp8;

@end
