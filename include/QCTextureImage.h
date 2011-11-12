#import "QCImageTextureBuffer.h"

@class QCImagePixelBuffer;


// this appears to be used only in the context of FCPImageExtensions
@interface QCTextureImage : QCImageTextureBuffer
{
	BOOL _shouldFlip;	// 296 = 0x128
	QCImagePixelBuffer *_buffer;	// 300 = 0x12c
}

- (void)setShouldFlip:(BOOL)shouldFlip;
- (BOOL)shouldFlip;
- (void)setBuffer:(QCImagePixelBuffer*)buffer;
- (QCImagePixelBuffer*)buffer;
- (void)dealloc;

@end
