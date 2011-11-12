
#import "QCOpenGLPort_Blending.h"

@interface QCOpenGLPort_MeshKitBlending : QCOpenGLPort_Blending
{
	void *_unused5[2];	// 152 = 0x98
}

- (void)setOnOpenGLContext:(QCOpenGLContext*)context;
- (void)unsetOnOpenGLContext:(QCOpenGLContext*)context;

@end
