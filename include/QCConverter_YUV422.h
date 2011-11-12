
#import "QCImageBufferConverter.h"

@interface QCConverter_YUV422 : QCImageBufferConverter
{
	float _YCbCr_To_RGB[2][3][3];	// 24 = 0x18
	float _RGB_To_YCbCr[2][3][3];	// 96 = 0x60
	GLuint _shader;	// 168 = 0xa8
	int _lastColorspace;	// 172 = 0xac
}

- (id)initWithImageManager:(id)fp8;
- (void)_finalize_QCConverter_YUV422;
- (void)dealloc;
- (void)finalize;
- (BOOL)supportsCropping;
- (id)supportedPixelBufferFormatsForFormat:(id)fp8;
- (id)createPixelBufferFromImageBuffer:(id)fp8 withFormat:(id)fp12 transformation:(id)fp16 bounds:(NSRect)fp20 colorSpace:(CGColorSpaceRef)fp36 options:(id)fp40;
- (id)supportedTextureBufferFormatsForFormat:(id)fp8;
- (id)createTextureBufferFromImageBuffer:(id)fp8 withFormat:(id)fp12 target:(GLuint)fp16 transformation:(id)fp20 bounds:(NSRect)fp24 colorSpace:(CGColorSpaceRef)fp40 options:(id)fp44;

@end
