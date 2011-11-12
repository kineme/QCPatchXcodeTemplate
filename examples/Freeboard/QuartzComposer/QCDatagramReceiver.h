#import <QCDatagramSocket.h>

@interface QCDatagramReceiver : QCDatagramSocket
{
}

- (id)initWithAddress:(unsigned long)addr port:(unsigned short)port;
- (id)receiveStringWithTimeOut: (double)timeout;
- (id)receiveDataWithTimeOut:   (double)timeout;

@end

