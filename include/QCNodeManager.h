@interface QCNodeManager : GFNodeManager
{
	void *_unused2[4];	// 80 = 0x50
}

- (BOOL)isNodePrivateWithName:(NSString*)name;
- (NSArray*)nodeNames;
- (void)registerNodeWithClass:(Class)nodeClass identifier:(NSString*)identifier isPrivate:(BOOL)isPrivate;
- (void)registerNodeWithClass:(Class)nodeClass identifier:(NSString*)identifier;
- (void)registerNode:(id)fp8 withName:(NSString*)name;
- (id)instantiateNodeWithName:(id)name;
- (id)attributesFromComposition:(id)fp8;
- (id)_patchFromComposition:(id)fp8;
- (id)_patchFromCompositionPath:(id)fp8;
- (id)_attributesFromComposition:(id)fp8;
- (id)_attributesFromCompositionPath:(id)fp8;
- (void)loadPlugInAtPath:(NSString*)path;
@end

@interface QCNodeManager (VirtualPatchLoading)
- (void)loadPlugInFromComposition:(id)fp8 name:(NSString*)name;
@end
