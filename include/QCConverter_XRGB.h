#import "QCImageBufferConverter.h"

@interface QCConverter_XRGB : QCImageBufferConverter
- (id)supportedPixelBufferFormatsForFormat:(id)fp8;
- (id)createPixelBufferFromImageBuffer:(id)fp8 withFormat:(id)fp12 transformation:(id)fp16 bounds:(NSRect)fp20 colorSpace:(CGColorSpaceRef)fp36 options:(id)fp40;
- (id)supportedTextureBufferFormatsForFormat:(id)fp8;
- (id)createTextureBufferFromImageBuffer:(id)fp8 withFormat:(id)fp12 target:(GLuint)fp16 transformation:(id)fp20 bounds:(NSRect)fp24 colorSpace:(CGColorSpaceRef)fp40 options:(id)fp44;

@end
