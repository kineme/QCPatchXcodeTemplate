@interface QCProvider_CoreGraphics : QCImageProvider
{
	void *_source;	// 24 = 0x18
	NSUInteger _index;	// 28 = 0x1c
	NSRect _bounds;	// 32 = 0x20
	QCRegion *_domainOfDefinition;	// 48 = 0x30
	CGColorSpaceRef _colorSpace;	// 52 = 0x34
	BOOL _hasAlpha;	// 56 = 0x38
	QCPixelFormat *_pixelFormat;	// 60 = 0x3c
	CGAffineTransform _transform;	// 64 = 0x40
	NSArray *_pixelFormats;	// 88 = 0x58
	QCMD5Sum _md5;	// 92 = 0x5c
	CGFloat _imageWidth;	// 108 = 0x6c
	CGFloat _imageHeight;	// 112 = 0x70
	CGImageRef _cachedImage;	// 116 = 0x74
	pthread_mutex_t _mutex;	// 120 = 0x78
	CGColorRef _backgroundColor;	// 164 = 0xa4
}

+ (BOOL)isCompatibleWithSource:(id)fp8 sourceMD5:(QCMD5Sum *)fp12;
+ (id)createProviderWithSource:(id)fp8 options:(id)fp12;
- (id)initWithURL:(id)fp8 options:(id)fp12;
- (id)initWithData:(id)fp8 options:(id)fp12;
- (id)initWithNSImage:(id)fp8 options:(id)fp12;
- (id)initWithNSBitmapImageRep:(id)fp8 options:(id)fp12;
- (id)initWithCGSource:(void *)fp8 options:(id)fp12;
- (void)_finalize_QCProvider_CoreGraphics;
- (void)finalize;
- (void)dealloc;
- (CGAffineTransform *)imageTransform;
- (id)sourceRepresentationType;
- (id)sourceRepresentation;
- (QCMD5Sum)providerMD5;
- (id)domainOfDefinition;
- (CGColorSpaceRef)colorSpace;
- (BOOL)hasAlpha;
- (id)nativePixelFormat;
- (BOOL)supportsCropping;
- (BOOL)supportsTransformation;
- (BOOL)supportsColorMatching;
- (id)supportedPixelBufferFormatsForManager:(id)fp8;
- (id)createPixelBufferForManager:(id)fp8 withFormat:(id)fp12 transformation:(id)fp16 bounds:(NSRect)fp20 colorSpace:(CGColorSpaceRef)fp36 options:(id)fp40;

@end

@interface QCProvider_CoreGraphics (QCImage)
- (id)createOptimizedProviderWithTransformation:(id)fp8 cropping:(NSRect)fp12;
@end
