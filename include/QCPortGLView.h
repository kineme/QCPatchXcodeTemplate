
#import "QCPortView.h"

@class QCCGLContext;

@interface QCPortGLView : QCPortView
{
	QCCGLContext *_cglContext;	// 84 = 0x54
	NSOpenGLContext *_glContext;	// 88 = 0x58
}

- (void)_startRendering:(id)fp8;
- (void)_stopRendering:(id)fp8;
- (id)initWithPort:(id)fp8;
- (void)finalize;
- (void)dealloc;
- (void)lockFocus;
- (void)drawRect:(NSRect)fp8;
- (void)setHidden:(BOOL)fp8;
- (id)cglContext;

@end
