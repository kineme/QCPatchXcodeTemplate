@interface QCRenderer : NSObject <QCCompositionRenderer>
{
	void *_QCRendererPrivate;	// 4 = 0x4
}

+ (id)defaultRenderingOptions;	// always returns nil
+ (id)_createAndRegisterUniqueContextForCGLContext:(CGLContextObj)context contextOwner:(id)fp12 pixelFormat:(CGLPixelFormatObj)fp16 formatOwner:(id)fp20 colorSpace:(CGColorSpaceRef)fp24 options:(id)fp28;
+ (void)_unregisterUniqueContext:(id)fp8;
- (id)initWithRenderingContext:(id)fp8 patch:(id)fp12;
- (id)init;
- (id)initOffScreenWithPixelFormat:(NSOpenGLPixelFormat*)pixelFormat size:(NSSize)size colorSpace:(CGColorSpaceRef)colorSpace patch:(QCPatch*)patch;
- (id)initWithCGLContext:(CGLContextObj)context pixelFormat:(CGLPixelFormatObj)pixelFormat colorSpace:(CGColorSpaceRef)colorSpace patch:(QCPatch*)patch;
- (id)initWithComposition:(QCComposition*)composition colorSpace:(CGColorSpaceRef)colorSpace;
- (id)initWithOpenGLContext:(NSOpenGLContext*)context pixelFormat:(NSOpenGLPixelFormat*)format file:(NSString*)path;
- (id)initWithCGLContext:(CGLContextObj)context pixelFormat:(CGLPixelFormatObj)pixelFormat colorSpace:(CGColorSpaceRef)colorSpace composition:(QCComposition*)composition;
- (id)initOffScreenWithSize:(NSSize)contextSize colorSpace:(CGColorSpaceRef)colorSpace composition:(QCComposition*)composition;
- (QCComposition*)composition;
- (void)finalize;
- (void)dealloc;
- (double)renderingTimeForTime:(double)time arguments:(NSDictionary*)args;
- (double)nextRecommendedRenderingTimeForTime:(double)time arguments:(NSDictionary*)args;
- (BOOL)renderAtTime:(double)time arguments:(NSDictionary*)args;
- (NSImage*)snapshotImage;
- (id)createSnapshotImageOfType:(NSString*)imageType; // @"NSBitmapImageRep", NSImage, CIImage, CGImage, CVOpenGLBuffer, CVPixelBuffer
- (NSDictionary*)attributes;
- (NSArray*)inputKeys;
- (NSArray*)outputKeys;
- (BOOL)setValue:(id)value forInputKey:(NSString*)key;
- (id)valueForInputKey:(NSString*)key;
- (id)valueForOutputKey:(NSString*)key;
- (id)valueForOutputKey:(NSString*)key ofType:(NSString*)type;
- (id)propertyListFromInputValues;
- (void)setInputValuesWithPropertyList:(id)plist;
- (id)renderingContext;
- (id)patch;
- (NSMutableDictionary*)userInfo;
- (void)setObservationInfo:(void *)observationInfo;
- (void *)observationInfo;

@end

@interface QCRenderer (Private)
- (BOOL)prerenderAtTime:(double)time imageSizeHint:(NSSize)sizeHint arguments:(NSDictionary*)args;
@end
