

@class QCPort;

@interface QCPortView : NSView
{
	QCPort *_port;	// 80 = 0x50
}

- (id)initWithFrame:(NSRect)fp8;
- (id)initWithPort:(id)fp8;
- (void)dealloc;
- (id)port;
- (void)drawRect:(NSRect)fp8;
@end
