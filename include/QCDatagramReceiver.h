#import "QCDatagramSocket.h"

@interface QCDatagramReceiver : QCDatagramSocket
- (id)initWithAddress:(in_addr_t)ipAddress port:(in_port_t)port;
- (NSString*)receiveStringWithTimeOut:(double)timeout;
- (NSData*)receiveDataWithTimeOut:(double)timeout;
@end
