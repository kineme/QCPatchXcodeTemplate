
#import "QCImageBufferConverter.h"

@interface QCConverter_CoreGraphics : QCImageBufferConverter


- (BOOL)supportsCropping;
- (BOOL)supportsTransformation;
- (BOOL)supportsColorMatching;
- (id)supportedPixelBufferFormatsForFormat:(id)fp8;
- (id)createPixelBufferFromImageBuffer:(id)fp8 withFormat:(id)fp12 transformation:(id)fp16 bounds:(NSRect)fp20 colorSpace:(CGColorSpaceRef)fp36 options:(id)fp40;

@end
