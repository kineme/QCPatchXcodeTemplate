extern NSString * const GFNodeManagerDidUpdateNotification;

@interface GFNodeManager : NSObject
{
	NSString *_namespace;	// 4 = 0x4
	pthread_mutex_t _mutex;	// 8 = 0x8
	CFDictionaryRef _registry;	// 52 = 0x34
	NSUInteger _infoListSize;	// 56 = 0x38
	struct GFNodeInfo *_infoList;	// 60 = 0x3c
	void *_unused[4];	// 64 = 0x40
}

+ (void)initialize;
+ (BOOL)trylock;	// never called in QC framework
+ (void)lock;
+ (void)unlock;
+ (void)checkIdentifier:(id)fp8;
+ (id)managerForNodeNamespace:(NSString*)nodeNamespace;	// @"com.apple.QuartzComposer" is the default
+ (id)instantiateNodeWithName:(id)fp8;
+ (id)instantiateNodeWithClassName:(id)fp8 identifier:(NSString*)identifier;
- (id)init;
- (id)initWithNamespace:(NSString*)nodeNamespace;
- (NSString*)nodeNamespace;
- (id)nodeAttributesWithName:(id)fp8;
- (id)nodeInstanceWithName:(id)fp8;
- (id)instantiateNodeWithName:(id)fp8;
- (void)registerNodeWithClass:(Class)nodeClass;	// equivalent to -[registerNodeWithClass: identifier:nil]
- (void)registerNodeWithClass:(Class)nodeClass identifier:(NSString*)identifier;
- (id)_nodeFromArchive:(id)fp8;
- (id)_attributesFromArchive:(id)fp8;
- (void)registerNode:(id)fp8 withName:(id)fp12;
- (void)registerNodeWithName:(id)fp8 constructor:(id)fp12 instantiateSelector:(SEL)fp16 attributesSelector:(SEL)fp20 info:(id)fp24;
- (void)unregisterNodeWithName:(id)fp8;
- (BOOL)isNodeRegisteredWithName:(id)fp8;
- (NSArray*)nodeNames;
- (NSArray*)nodeNamesContainingAttributes:(id)fp8;
- (NSArray*)nodeNamesMatchingAttributes:(id)fp8;
- (NSArray*)nodeNamesExcludingAttributes:(id)fp8;
- (id)nodeNameWithClassName:(id)fp8 identifier:(NSString*)identifier;
- (void)applyFunction:(void *)fp8 context:(void *)ctx;
- (NSString*)description;
@end

@interface GFNodeManager (PlugIns)
- (void)loadPlugInAtPath:(NSString*)path;
- (void)loadPlugInsInFolder:(NSString*)path withExtensions:(NSArray*)extensions;
- (void)loadPlugInsInLibrary:(id)fp8 withExtensions:(NSArray*)extensions;
@end
