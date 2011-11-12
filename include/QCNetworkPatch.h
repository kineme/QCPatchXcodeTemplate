@interface QCNetworkPatch : QCThreadPatch
{
	in_addr_t _address;	// 304 = 0x130
	in_port_t _port;	// 308 = 0x134
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (in_addr_t)address;
- (void)setAddress:(in_addr_t)fp8;
- (in_port_t)port;
- (void)setPort:(in_port_t)fp8;

@end
