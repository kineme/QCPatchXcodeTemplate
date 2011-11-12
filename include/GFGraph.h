extern NSString * const GFGraphLayoutDidChangeNotification;
extern NSString * const GFStateDidChangeNotification;
extern NSString * const GFStateDidFinishLoadingNotification;

@interface GFGraph : GFNode
{
	GFList *_nodes;	// 56 = 0x38
	GFList *_connections;	// 60 = 0x3c
	BOOL _finalizing;	// 64 = 0x40
	void *_unused2[4];	// 68 = 0x44
}

+ (Class)baseClass;
+ (Class)proxyPortClass;
+ (Class)connectionClass;
- (void)dealloc;
- (BOOL)canAddNode:(GFNode*)node;
- (BOOL)addNode:(GFNode*)node forKey:(NSString*)key;
- (BOOL)addNode:(GFNode*)node;
- (void)removeNodeForKey:(NSString*)key;
- (void)removeNode:(GFNode*)node;
- (void)applyFunctionOnNodes:(void *)fp8 context:(void *)ctx;
- (NSArray *)nodes;	// subpatches
- (void)applyFunctionOnConnections:(void *)fp8 context:(void *)ctx;
- (BOOL)canCreateConnectionFromPort:(GFPort*)sourcePort toPort:(GFPort*)destPort;
- (id)createConnectionFromPort:(GFPort*)sourcePort toPort:(GFPort*)destPort forKey:(NSString*)key;
- (id)createConnectionFromPort:(GFPort*)sourcePort toPort:(GFPort*)destPort;
- (void)__createConnectionFrom:(id)fp8 to:(id)fp12 forKey:(NSString*)key withUserInfo:(NSMutableDictionary*)userInfo;
- (void)deleteConnectionForKey:(NSString*)key;
- (void)deleteConnection:(GFConnection*)connection;
- (NSArray*)connections;
- (GFNode*)nodeForKey:(NSString*)key;
- (NSString*)keyForNode:(GFNode*)node;
- (GFConnection*)connectionForKey:(NSString*)key;
- (NSString*)keyForConnection:(GFConnection*)connection;
- (id)pathForNode:(GFNode*)node;
- (GFNode*)nodeForPath:(id)fp8;
- (id)pathForPort:(GFPort*)port;
- (GFPort*)portForPath:(id)fp8;
- (BOOL)canCreateProxyPortWithOriginalPort:(GFPort*)port;
- (id)createProxyPortWithOriginalPort:(GFPort*)port forKey:(id)fp12;
- (id)createProxyPortWithOriginalPort:(GFPort*)port;
- (void)__createProxyPortWithNode:(id)fp8 portKey:(id)fp12 forKey:(id)fp16 withUserInfo:(id)fp20;
- (void)deleteInputPortForKey:(id)fp8;
- (void)deleteOutputPortForKey:(id)fp8;
- (void)deleteProxyPortForKey:(id)fp8;
- (void)deleteProxyPortWithOriginalPort:(id)fp8;
- (id)proxyPortForOriginalPort:(id)fp8;
- (id)proxyInputPorts;
- (id)proxyOutputPorts;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (void)setUndoManager:(NSUndoManager*)undoManager;

@end

@interface GFGraph (GFGraphView)
- (Class)graphViewClass;
@end

@interface GFGraph (Notes)
- (void)_setNote:(id)fp8 atIndex:(id)fp12;
@end

@interface GFGraph (Private)
- (id)_uniqueProxyPortKeyFromPort:(id)fp8;
- (BOOL)_finalizing;
- (BOOL)_isNodeKeyInUse:(id)fp8;
- (id)_uniqueKeyFromNode:(id)fp8;
- (BOOL)_isConnectionKeyInUse:(id)fp8;
- (id)_uniqueConnectionKey;
- (GFList*)_connections;
- (GFList*)_nodes;
- (void)_willDeleteNodeInputPort:(id)fp8;
- (void)_willDeleteNodeOutputPort:(id)fp8;
- (void)_layoutUpdated;
- (BOOL)_saveState:(id)fp8 filterTarget:(id)fp12 filterAction:(SEL)fp16 flatten:(BOOL)shouldFlatten;
- (BOOL)_loadState:(id)fp8;
@end

@interface GFGraph (ProxyPortKeyFromName)
- (id)uniqueProxyPortKeyFromName:(id)fp8;
@end
