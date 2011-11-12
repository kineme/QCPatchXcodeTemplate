@interface QCPatchProExtension : NSObject
{
	CGFloat _transform[16];	// 4 = 0x4
	BOOL _patchSetsTransform;	// 68 = 0x44
}

- (id)init;
- (CGFloat *)getTransform;
- (BOOL)patchSetsTransform;
- (void)setPatchSetsTransform:(BOOL)patchSetsTransform;

@end
