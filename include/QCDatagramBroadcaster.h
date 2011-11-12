#import "QCDatagramSocket.h"

@interface QCDatagramBroadcaster : QCDatagramSocket
- (id)initWithAddress:(in_addr_t)ipAddress port:(in_port_t)port;
- (BOOL)sendString:(NSString*)string;
- (BOOL)sendData:(NSData*)data;
@end
