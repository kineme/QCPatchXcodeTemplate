#import <QCDatagramSocket.h>

@interface QCDatagramBroadcaster : QCDatagramSocket
{
}

- (id)initWithAddress:(unsigned long)addr port:(unsigned short)port;
- (BOOL)sendString:(NSString*)string;
- (BOOL)sendData:(NSData*)data;

@end
