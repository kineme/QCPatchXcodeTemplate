
#import "QCOpenGLPort_Culling.h"

@interface QCOpenGLPort_MeshKitCulling : QCOpenGLPort_Culling
{
	void *_unused5[2];	// 152 = 0x98
}

- (id)initWithNode:(GFNode*)node arguments:(NSDictionary*)args;
- (void)setOnOpenGLContext:(QCOpenGLContext*)context;
- (void)unsetOnOpenGLContext:(QCOpenGLContext*)context;

@end
