#import "QCImageBufferConverter.h"

@interface QCConverter_OpenGL : QCImageBufferConverter
- (BOOL)supportsCropping;
- (BOOL)supportsTransformation;
- (id)supportedTextureBufferFormatsForFormat:(id)fp8;
- (id)createTextureBufferFromImageBuffer:(id)fp8 withFormat:(id)fp12 target:(GLuint)fp16 transformation:(id)fp20 bounds:(NSRect)fp24 colorSpace:(CGColorSpaceRef)fp40 options:(id)fp44;

@end
