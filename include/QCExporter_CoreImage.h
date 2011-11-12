
#import "QCImageExporter.h"

@interface QCExporter_CoreImage : QCImageExporter
{
	CIFilter *_ciMatrixFilter;	// 24 = 0x18
	BOOL _flipped;	// 28 = 0x1c
}

- (void)dealloc;
- (id)supportedRepresentationTypes;
- (id)_createTransformedCIImage:(id)fp8 transformation:(id)fp12 bounds:(NSRect)fp16;
- (id)createRepresentationOfType:(id)fp8 withProvider:(id)fp12 transformation:(id)fp16 bounds:(NSRect)fp20 colorSpace:(CGColorSpaceRef)fp36 options:(id)fp40;
- (void)provideImageData:(void *)fp8 bytesPerRow:(unsigned long)fp12 origin:(unsigned long)fp16:(unsigned long)fp20 size:(unsigned long)fp24:(unsigned long)fp28 userInfo:(id)fp32;
- (GLuint)provideImageTexture:(const struct CIImageProviderTextureInfoStruct *)fp8 bounds:(CGRect *)fp12 userInfo:(id)fp16;
- (void)deleteImageTexture:(const struct CIImageProviderTextureInfoStruct *)fp8 name:(GLuint)fp12 userInfo:(id)fp16;

@end
