@interface QCOSCPatch : QCNetworkPatch
{
	BOOL _run;	// 310 = 0x136
	NSMutableArray *_oscPorts;	// 312 = 0x138
	GFList *_oscPortsConfiguration;	// 316 = 0x13c
}

+ (id)stateKeysWithIdentifier:(id)fp8;
+ (id)serializedStateKeysWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)dealloc;
- (void)setOscPortsConfiguration:(id)fp8;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (GFList*)oscPortsConfiguration;
- (void)addPort:(id)fp8 ofType:(id)fp12;
- (void)removePortAtIndex:(NSUInteger)fp8;
@end
