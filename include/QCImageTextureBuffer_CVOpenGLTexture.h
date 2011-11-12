#import "QCImageTextureBuffer.h"

@interface QCImageTextureBuffer_CVOpenGLTexture : QCImageTextureBuffer
- (BOOL)downloadTextureWithBounds:(NSRect)fp8 toAddress:(void *)fp24 bytesPerRow:(NSUInteger)fp28;
@end
