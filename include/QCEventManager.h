@interface QCEventManager : NSObject
{
	CFArrayRef _selectedPatches;	// 4 = 0x4
	CFArrayRef _selectedCount;	// 8 = 0x8
	BOOL _interactive;	// 12 = 0xc
}
@property (readwrite,assign) BOOL interactive;

- (id)init;
- (void)finalize;
- (void)dealloc;
- (NSString*)description;
- (void)addPatch:(id)patch atDepth:(CGFloat)depth forIteration:(NSUInteger)iteration index:(NSUInteger)index;
- (void)removePatch:(id)patch;
- (void)removeSelectionForIndex:(NSUInteger)index;
- (id)selectedPatchForIndex:(NSUInteger)index;
- (BOOL)interactive;
- (void)setInteractive:(BOOL)interactive;

@end
