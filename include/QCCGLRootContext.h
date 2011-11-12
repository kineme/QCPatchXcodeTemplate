
#import "QCCGLContext.h"

@interface QCCGLRootContext : QCCGLContext
{
	NSDictionary *_baseOptions;	// 100 = 0x64
}

- (id)initWithCGLContext:(CGLContextObj)fp8 pixelFormat:(CGLPixelFormatObj)fp12 options:(id)fp16;
- (id)baseOptions;
- (id)createMinimalSharedContextWithAdditionalAttributes:(const int *)fp8 recycleWhenDone:(BOOL)fp12;
- (void)dealloc;

@end
