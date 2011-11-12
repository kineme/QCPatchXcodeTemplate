@class GFGraph, GFPort;

@interface GFConnection : NSObject <GFBase>
{
	GFGraph *_owner;	// 4 = 0x4
	GFPort *_sourcePort;	// 8 = 0x8
	GFPort *_destPort;	// 12 = 0xc
	NSDictionary *_attributes;	// 16 = 0x10
	NSMutableDictionary *_userInfo;	// 20 = 0x14
	void *_unused[4];	// 24 = 0x18
}

- (id)init;
- (id)initWithGraph:(GFGraph*)graph sourcePort:(GFPort*)src destinationPort:(GFPort*)dst arguments:(NSDictionary*)args;
- (void)dealloc;
- (void)connectionWillDeleteFromGraph;
- (GFPort*)sourcePort;
- (GFPort*)destinationPort;
- (NSDictionary*)attributes;
- (NSMutableDictionary*)userInfo;
- (GFGraph*)graph;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (void)stateUpdated;
- (NSString*)description;
- (NSString*)key;

@end
