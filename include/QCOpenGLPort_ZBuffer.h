#import "QCIndexPort.h"

@interface QCOpenGLPort_ZBuffer : QCIndexPort <QCOpenGLPort>
{
	unsigned char _enabled;	// 128 = 0x80
	int _function;	// 132 = 0x84
	int _mask;	// 136 = 0x88
	void *_unused4[4];	// 140 = 0x8c
}

- (id)initWithNode:(GFNode*)node arguments:(NSDictionary*)args;
- (void)setOnOpenGLContext:(QCOpenGLContext*)context;
- (void)unsetOnOpenGLContext:(QCOpenGLContext*)context;

@end
