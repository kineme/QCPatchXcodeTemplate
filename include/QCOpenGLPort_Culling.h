#import "QCIndexPort.h"

@interface QCOpenGLPort_Culling : QCIndexPort <QCOpenGLPort>
{
	unsigned char _enabled;	// 128 = 0x80
	int _mode;	// 132 = 0x84
	void *_unused4[4];	// 136 = 0x88
}

- (id)initWithNode:(GFNode*)node arguments:(NSDictionary*)args;
- (void)setOnOpenGLContext:(QCOpenGLContext*)context;
- (void)unsetOnOpenGLContext:(QCOpenGLContext*)context;

@end
