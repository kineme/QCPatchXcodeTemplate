#import "QCColorPort.h"

@interface QCOpenGLPort_Color : QCColorPort <QCOpenGLPort>
{
	void *_unused4[4];	// 136 = 0x88
}

- (id)initWithNode:(GFNode*)node arguments:(NSDictionary*)args;
- (void)setOnOpenGLContext:(QCOpenGLContext*)context;
- (void)unsetOnOpenGLContext:(QCOpenGLContext*)context;
- (void)setPrimaryOnOpenGLContext:(QCOpenGLContext*)context;

@end
