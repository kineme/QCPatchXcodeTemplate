@interface GFNodeManager : NSObject
{
    NSString *_namespace;
    struct _opaque_pthread_mutex_t _mutex;
    struct __CFDictionary *_registry;
    unsigned int _infoListSize;
    struct GFNodeInfo *_infoList;
    void *_unused[4];
}

+ (void)initialize;
+ (BOOL)trylock;
+ (void)lock;
+ (void)unlock;
+ (void)checkIdentifier:(id)fp8;
+ (id)managerForNodeNamespace:(id)fp8;
+ (id)instantiateNodeWithName:(id)fp8;
+ (id)instantiateNodeWithClassName:(id)fp8 identifier:(id)fp12;
- (id)init;
- (id)initWithNamespace:(id)fp8;
- (id)nodeNamespace;
- (id)nodeAttributesWithName:(id)fp8;
- (id)nodeInstanceWithName:(id)fp8;
- (id)instantiateNodeWithName:(id)fp8;
- (void)registerNodeWithClass:(Class)fp8;
- (void)registerNodeWithClass:(Class)fp8 identifier:(id)fp12;
- (id)_nodeFromArchive:(id)fp8;
- (id)_attributesFromArchive:(id)fp8;
- (void)registerNode:(id)fp8 withName:(id)fp12;
- (void)registerNodeWithName:(id)fp8 constructor:(id)fp12 instantiateSelector:(SEL)fp16 attributesSelector:(SEL)fp20 info:(id)fp24;
- (void)unregisterNodeWithName:(id)fp8;
- (BOOL)isNodeRegisteredWithName:(id)fp8;
- (id)nodeNames;
- (id)nodeNamesContainingAttributes:(id)fp8;
- (id)nodeNamesMatchingAttributes:(id)fp8;
- (id)nodeNamesExcludingAttributes:(id)fp8;
- (id)nodeNameWithClassName:(id)fp8 identifier:(id)fp12;
- (void)applyFunction:(void *)fp8 context:(void *)fp12;
- (id)description;

@end

@interface GFNodeManager (PlugIns)
- (void)loadPlugInAtPath:(id)fp8;
- (void)loadPlugInsInFolder:(id)fp8 withExtensions:(id)fp12;
- (void)loadPlugInsInLibrary:(id)fp8 withExtensions:(id)fp12;
@end


