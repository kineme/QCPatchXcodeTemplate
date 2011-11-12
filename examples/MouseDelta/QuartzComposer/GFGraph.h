#import <GFNode.h>
#import <GFList.h>

@interface GFGraph : GFNode
{
    GFList *_nodes;
    GFList *_connections;
    BOOL _finalizing;
    void *_unused2[4];
}

+ (Class)baseClass;
+ (Class)proxyPortClass;
+ (Class)connectionClass;
- (void)dealloc;
- (BOOL)canAddNode:(id)fp8;
- (BOOL)addNode:(id)fp8 forKey:(id)fp12;
- (BOOL)addNode:(id)fp8;
- (void)removeNodeForKey:(id)fp8;
- (void)removeNode:(id)fp8;
- (void)applyFunctionOnNodes:(void *)fp8 context:(void *)fp12;
- (id)nodes;
- (void)applyFunctionOnConnections:(void *)fp8 context:(void *)fp12;
- (BOOL)canCreateConnectionFromPort:(id)fp8 toPort:(id)fp12;
- (id)createConnectionFromPort:(id)fp8 toPort:(id)fp12 forKey:(id)fp16;
- (id)createConnectionFromPort:(id)fp8 toPort:(id)fp12;
- (void)__createConnectionFrom:(id)fp8 to:(id)fp12 forKey:(id)fp16 withUserInfo:(id)fp20;
- (void)deleteConnectionForKey:(id)fp8;
- (void)deleteConnection:(id)fp8;
- (id)connections;
- (id)nodeForKey:(id)fp8;
- (id)keyForNode:(id)fp8;
- (id)connectionForKey:(id)fp8;
- (id)keyForConnection:(id)fp8;
- (id)pathForNode:(id)fp8;
- (id)nodeForPath:(id)fp8;
- (id)pathForPort:(id)fp8;
- (id)portForPath:(id)fp8;
- (BOOL)canCreateProxyPortWithOriginalPort:(id)fp8;
- (id)createProxyPortWithOriginalPort:(id)fp8 forKey:(id)fp12;
- (id)createProxyPortWithOriginalPort:(id)fp8;
- (void)__createProxyPortWithNode:(id)fp8 portKey:(id)fp12 forKey:(id)fp16 withUserInfo:(id)fp20;
- (void)deleteInputPortForKey:(id)fp8;
- (void)deleteOutputPortForKey:(id)fp8;
- (void)deleteProxyPortForKey:(id)fp8;
- (void)deleteProxyPortWithOriginalPort:(id)fp8;
- (id)proxyPortForOriginalPort:(id)fp8;
- (id)proxyInputPorts;
- (id)proxyOutputPorts;
- (id)state;
- (BOOL)setState:(id)fp8;
- (void)setUndoManager:(id)fp8;

@end

@interface GFGraph (Private)
- (id)_uniqueProxyPortKeyFromPort:(id)fp8;
- (BOOL)_finalizing;
- (BOOL)_isNodeKeyInUse:(id)fp8;
- (id)_uniqueKeyFromNode:(id)fp8;
- (BOOL)_isConnectionKeyInUse:(id)fp8;
- (id)_uniqueConnectionKey;
- (id)_connections;
- (id)_nodes;
- (void)_willDeleteNodeInputPort:(id)fp8;
- (void)_willDeleteNodeOutputPort:(id)fp8;
- (void)_layoutUpdated;
- (BOOL)_saveState:(id)fp8 filterTarget:(id)fp12 filterAction:(SEL)fp16 flatten:(BOOL)fp20;
- (BOOL)_loadState:(id)fp8;
@end

@interface GFGraph (ProxyPortKeyFromName)
- (id)uniqueProxyPortKeyFromName:(id)fp8;
@end

@interface GFGraph (GFGraphView)
- (Class)graphViewClass;
@end

@interface GFGraph (Notes)
- (void)_setNote:(id)fp8 atIndex:(id)fp12;
@end

