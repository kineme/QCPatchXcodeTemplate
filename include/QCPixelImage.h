#import "QCImagePixelBuffer.h"

@class QCImageTextureBuffer, QCOpenGLContext;

@interface QCPixelImage : QCImagePixelBuffer
{
	QCImageTextureBuffer *_texture;	// 168 = 0xa8
	QCOpenGLContext *_context;	// 172 = 0xac
}

- (void)setTexture:(QCImageTextureBuffer*)imageTexture;
- (QCImageTextureBuffer*)texture;
- (QCOpenGLContext*)openGLContext;
- (void)registerWithOpenGLContext:(QCOpenGLContext*)context;
- (void)unregisterFromOpenGLContext;
- (void)dealloc;

@end
