@interface QCDatagramSocket : NSObject
{
	in_addr_t _address;	// 4 = 0x4
	in_port_t _port;	// 8 = 0x8
	int _socketFD;	// 12 = 0xc
}

+ (id)allocWithZone:(NSZone *)zone;
+ (NSUInteger)maxStringLength;	// 0x112 = 274 characters (used for send and receive ?)
+ (NSUInteger)maxDataLength;	// 0x224 = 548 bytes	(used for reception only)
- (id)initWithPort:(in_port_t)port;
- (id)initWithAddress:(in_addr_t)ipAddress port:(in_port_t)port;
- (void)dealloc;
- (void)finalize;
- (in_addr_t)address;
- (in_port_t)port;

@end
