



@class QCImageManager;

@interface QCImageExporter : NSObject <QCImageExporter>
{
	QCImageManager *_manager;	// 4 = 0x4
	void *_unused[4];	// 8 = 0x8
}

+ (id)allocWithZone:(NSZone *)zone;
+ (id)exporterForImageManager:(id)fp8;
- (id)initWithImageManager:(id)fp8;
- (id)imageManager;
- (id)supportedRepresentationTypes;
- (id)createRepresentationOfType:(id)fp8 withProvider:(id)fp12 transformation:(id)fp16 bounds:(NSRect)fp20 colorSpace:(CGColorSpaceRef)fp36 options:(id)fp40;
- (NSString*)description;
@end

@interface QCImageExporter (Extensions)
- (NSRect)boundsForProvider:(id)fp8 withTransformation:(id)fp12;
- (id)bestPixelFormatWithCompatibility:(id)fp8 forProvider:(id)fp12 usingColorSpace:(CGColorSpaceRef *)fp16;
@end
