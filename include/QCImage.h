#import "QCObject.h"


@class QCRegion, QCImageTextureBuffer;

@interface QCImage : QCObject
{
	id <QCImageProvider> _provider;	// 28 = 0x1c
	NSAffineTransform *_transformation;	// 32 = 0x20
	QCRegion *_domainOfDefinition;	// 36 = 0x24
	void *_unused2[4];	// 40 = 0x28
}

+ (void)initialize;
- (id)initWithProvider:(id)fp8 options:(id)fp12;
- (void)dealloc;
- (id)initWithImage:(id)fp8;
- (id)provider;
- (BOOL)isInfinite;
- (NSRect)bounds;
- (id)domainOfDefinition;
- (id)transformation;
- (id)createCroppedImageWithRect:(NSRect)fp8 NS_RETURNS_RETAINED;
- (id)_createTransformedImage:(CGAffineTransform *)transformation definition:(id)fp12 NS_RETURNS_RETAINED;
- (id)createTranslatedImageByX:(CGFloat)xTranslation Y:(CGFloat)yTranslation NS_RETURNS_RETAINED;
- (id)createScaledImageByX:(CGFloat)xScale Y:(CGFloat)yScale NS_RETURNS_RETAINED;
- (id)createScaledImageByX:(CGFloat)xScale Y:(CGFloat)yScale fromX:(CGFloat)xCenter Y:(CGFloat)yCenter NS_RETURNS_RETAINED;
- (id)createRotatedImageByDegrees:(CGFloat)theta NS_RETURNS_RETAINED;
- (id)createRotatedImageByDegrees:(CGFloat)theta aroundX:(CGFloat)xCenter Y:(CGFloat)yCenter NS_RETURNS_RETAINED;
- (id)createTransformedImage:(id)fp8 NS_RETURNS_RETAINED;
- (id)createPixelBufferForManager:(id)fp8 withFormat:(id)fp12 bounds:(NSRect)fp16 colorSpace:(CGColorSpaceRef)fp32 options:(id)fp36 NS_RETURNS_RETAINED;
- (QCImageTextureBuffer *)createTextureBufferForManager:(id)fp8 withFormat:(id)fp12 target:(GLuint)fp16 bounds:(NSRect)fp20 colorSpace:(CGColorSpaceRef)fp36 options:(id)fp40 NS_RETURNS_RETAINED;
- (id)createRepresentationOfType:(id)fp8 forManager:(id)fp12 withOptions:(id)fp16 NS_RETURNS_RETAINED;
- (NSString*)description;
@end

@interface QCImage (ExporterRegistry)
+ (void)registerImageExporterClass:(Class)fp8;
+ (id)imageExporterClasses;
+ (NSUInteger)imageExporterRegistryTimestamp;
@end

@interface QCImage (ImageFiles)
+ (id)imageFileExtensions;
+ (id)imageFileTypes;
@end

@interface QCImage (NSCoding) <NSCoding>
- (id)initWithCoder:(NSCoder *)aDecoder;
- (void)encodeWithCoder:(NSCoder *)aCoder;
@end

@interface QCImage (ProviderRegistry)
+ (void)registerImageProviderClass:(Class)fp8;
+ (id)imageProviderClasses;
+ (id)createImageWithSource:(id)fp8 options:(id)fp12 NS_RETURNS_RETAINED;
@end

@interface QCImage (QCExporter_CoreAnimation)
- (id)createCALayerForManager:(id)fp8 withOptions:(id)fp12 NS_RETURNS_RETAINED;
@end

@interface QCImage (QCExporter_CoreGraphics)
- (CGImageRef)createCGImageForManager:(id)fp8 withOptions:(id)fp12 NS_RETURNS_RETAINED;
- (id)createImageDataForManager:(id)fp8 withOptions:(id)fp12 NS_RETURNS_RETAINED;
- (BOOL)writeToFile:(NSString*)file forManager:(id)fp12 withOptions:(id)fp16;
- (BOOL)writeToURL:(NSURL*)url forManager:(id)fp12 withOptions:(id)fp16;
@end

@interface QCImage (QCExporter_CoreImage)
- (id)createCIImageForManager:(id)fp8 withOptions:(id)fp12 NS_RETURNS_RETAINED;
@end

@interface QCImage (QCExporter_CoreVideo)
- (CVBufferRef)createCVPixelBufferForManager:(id)fp8 withOptions:(id)fp12 NS_RETURNS_RETAINED;
- (CVBufferRef)createCVOpenGLBufferForManager:(id)fp8 withOptions:(id)fp12 NS_RETURNS_RETAINED;
@end

@interface QCImage (QCExporter_NSImage)
- (id)createNSImageForManager:(id)fp8 withOptions:(id)fp12 NS_RETURNS_RETAINED;
- (id)createNSBitmapImageRepForManager:(id)fp8 withOptions:(id)fp12 NS_RETURNS_RETAINED;
@end

@interface QCImage (QCExporter_OpenCL)
- (id)createQCStreamForManager:(id)fp8 withOptions:(id)fp12 NS_RETURNS_RETAINED;
@end

@interface QCImage (QCImageBufferProvider)
- (id)initWithQCImageBuffer:(id)fp8 options:(id)fp12;
@end

@interface QCImage (QCProvider_CoreGraphics)
+ (id)createAllImagesFromData:(id)fp8 options:(id)fp12 NS_RETURNS_RETAINED;
- (id)initWithPDFDocument:(CGPDFDocumentRef)fp8 pageNumber:(NSUInteger)fp12 options:(id)fp16;
- (id)initWithCGPath:(CGPathRef)fp8 options:(id)fp12;
- (id)initWithCGLayer:(CGLayerRef)fp8 options:(id)fp12;
- (id)initWithCGImage:(CGImageRef)fp8 options:(id)fp12;
- (id)initWithCGImageSource:(CGImageSourceRef)fp8 imageIndex:(NSUInteger)fp12 options:(id)fp16;
- (id)_initWithNSImageSource:(id)fp8 options:(id)fp12;
- (id)initWithNSImage:(NSImage*)image options:(id)fp12;
- (id)initWithNSBitmapImageRep:(NSBitmapImageRep*)imageRep options:(id)fp12;
- (id)initWithData:(NSData*)imageData options:(id)fp12;
- (id)initWithFile:(NSString*)imageFile options:(id)fp12;
- (id)initWithURL:(NSURL*)imageURL options:(id)fp12;
@end

@interface QCImage (QCProvider_CoreImage)
- (id)initWithCIImage:(CIImage*)ciImage options:(id)fp12;
- (id)CIImageRepresentation;
@end

@interface QCImage (QCProvider_CoreText)
- (id)initWithTextRenderer:(id)fp8 options:(id)fp12;
- (id)initWithString:(id)fp8 attributes:(id)fp12 layoutSize:(NSSize)fp16 options:(id)fp24;
@end

@interface QCImage (QCProvider_CoreVideo)
- (id)initWithCVImageBuffer:(CVBufferRef)cvImageBuffer options:(id)fp12;
@end

@interface QCImage (QCProvider_MeshKit)
- (id)initWithC3DImage:(struct __C3DImage *)fp8 options:(id)fp12;
- (struct __C3DImage *)C3DImageRepresentation;
@end

@interface QCImage (QCProvider_OpenCL)
- (id)initWithQCStream:(id)fp8 options:(id)fp12;
- (id)QCStreamRepresentation;
@end
