@interface QCDatagramSocket : NSObject
{
	unsigned int _address;
	unsigned short _port;
	int _socketFD;
}

+ (id)allocWithZone:(struct _NSZone *)zone;
+ (unsigned int)maxStringLength;
+ (unsigned int)maxDataLength;
- (id)initWithPort:(unsigned short)port;
- (id)initWithAddress:(unsigned long)addr port:(unsigned short)port;
- (void)dealloc;
- (void)finalize;
- (unsigned long)address;
- (unsigned short)port;

@end

