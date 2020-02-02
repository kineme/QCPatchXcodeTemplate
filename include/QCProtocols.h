@class GFNodeManager, QCOpenGLContext;

@protocol GFBase
- (NSDictionary*)attributes;
- (NSMutableDictionary*)userInfo;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)stateDictionary;
- (void)stateUpdated;
@end
@protocol GFPlugInRegistration
+ (void)registerNodesWithManager:(GFNodeManager*)manager;
@end
@protocol QCCache
- (id)initWithMaximumSize:(double)fp8 maximumResourceAge:(double)fp16 options:(id)fp24;
- (void)addResource:(id)fp8 withSize:(double)fp12 cost:(double)fp20 md5List:(QCMD5Sum *)fp28 count:(NSUInteger)fp32;
- (void)removeResource:(id)fp8;
- (void)removeAllResources;
- (void)collectResources;
- (id)subcacheMatchingMd5List:(QCMD5Sum *)fp8 forIndices:(NSUInteger *)fp12 count:(NSUInteger)fp16;
- (id)subcacheUsingFilteringFunction:(void *)fp8 userInfo:(void *)fp12 userInfoReleaseCallback:(void *)fp16;
- (id)copyBestResource:(float *)fp8;
- (id)copyAnyResource;
- (id)copyAllResources;
@end
@protocol QCCompositionRenderer
- (NSDictionary*)attributes;
- (NSArray*)inputKeys;
- (NSArray*)outputKeys;
- (BOOL)setValue:(id)value forInputKey:(NSString*)key;
- (id)valueForInputKey:(NSString*)key;
- (id)valueForOutputKey:(NSString*)key;
- (id)valueForOutputKey:(NSString*)key ofType:(NSString*)type;
- (id)propertyListFromInputValues;
- (void)setInputValuesWithPropertyList:(id)plist;
- (NSMutableDictionary*)userInfo;
@end
@protocol QCImageBufferConverter
+ (id)converterForImageManager:(id)fp8;
- (BOOL)supportsCropping;
- (BOOL)supportsTransformation;
- (BOOL)supportsColorMatching;
- (id)supportedPixelBufferFormatsForFormat:(id)fp8;
- (id)createPixelBufferFromImageBuffer:(id)fp8 withFormat:(id)fp12 transformation:(id)fp16 bounds:(NSRect)fp20 colorSpace:(CGColorSpaceRef)fp36 options:(id)fp40;
- (id)supportedTextureBufferFormatsForFormat:(id)fp8;
- (id)createTextureBufferFromImageBuffer:(id)fp8 withFormat:(id)fp12 target:(GLuint)fp16 transformation:(id)fp20 bounds:(NSRect)fp24 colorSpace:(CGColorSpaceRef)fp40 options:(id)fp44;
@end
@protocol QCImageExporter
+ (id)exporterForImageManager:(id)fp8;
- (id)supportedRepresentationTypes;
- (id)createRepresentationOfType:(id)fp8 withProvider:(id)fp12 transformation:(id)fp16 bounds:(NSRect)fp20 colorSpace:(CGColorSpaceRef)fp36 options:(id)fp40;
@end
@protocol QCImageProvider
+ (BOOL)isCompatibleWithSource:(id)fp8 sourceMD5:(QCMD5Sum *)fp12;
+ (id)createProviderWithSource:(id)fp8 options:(id)fp12;
- (QCMD5Sum)providerMD5;
- (NSString *)sourceRepresentationType;
- (id)sourceRepresentation;
- (id)domainOfDefinition;
- (CGColorSpaceRef)colorSpace;
- (BOOL)hasAlpha;
- (id)nativePixelFormat;
- (GLuint)nativeTextureTarget;
- (BOOL)supportsCropping;
- (BOOL)supportsTransformation;
- (BOOL)supportsColorMatching;
- (id)supportedPixelBufferFormatsForManager:(id)fp8;
- (id)createPixelBufferForManager:(id)fp8 withFormat:(id)fp12 transformation:(id)fp16 bounds:(NSRect)fp20 colorSpace:(CGColorSpaceRef)fp36 options:(id)fp40;
- (id)supportedTextureBufferTargetsForManager:(id)fp8;
- (id)supportedTextureBufferFormatsForManager:(id)fp8;
- (id)createTextureBufferForManager:(id)fp8 withFormat:(id)fp12 target:(GLuint)fp16 transformation:(id)fp20 bounds:(NSRect)fp24 colorSpace:(CGColorSpaceRef)fp40 options:(id)fp44;
@end
@protocol QCInteractionPatch
- (void)setRenderingPatch:(id)fp8 iteration:(NSUInteger)fp12;
@end
@protocol QCOpenGLPort
- (void)setOnOpenGLContext:(QCOpenGLContext*)context;
- (void)unsetOnOpenGLContext:(QCOpenGLContext*)context;
@end
@protocol QCPlugInContext
- (NSString*)compositionURL;
- (void)logMessage:(id)fp8,...;
- (id)userInfo;
- (CGColorSpaceRef)colorSpace;
- (NSRect)bounds;
- (CGLContextObj)CGLContextObj;
- (id)outputImageProviderFromBufferWithPixelFormat:(id)fp8 pixelsWide:(NSUInteger)fp12 pixelsHigh:(NSUInteger)fp16 baseAddress:(const void *)fp20 bytesPerRow:(NSUInteger)fp24 releaseCallback:(void *)fp28 releaseContext:(void *)fp32 colorSpace:(CGColorSpaceRef)fp36 shouldColorMatch:(BOOL)fp40;
- (id)outputImageProviderFromTextureWithPixelFormat:(id)fp8 pixelsWide:(NSUInteger)fp12 pixelsHigh:(NSUInteger)fp16 name:(GLuint)fp20 flipped:(BOOL)fp24 releaseCallback:(void *)fp28 releaseContext:(void *)fp32 colorSpace:(CGColorSpaceRef)fp36 shouldColorMatch:(BOOL)fp40;
@end
@protocol QCPlugInInputImageSource
- (NSRect)imageBounds;
- (CGColorSpaceRef)imageColorSpace;
- (BOOL)shouldColorMatch;
- (BOOL)lockBufferRepresentationWithPixelFormat:(id)fp8 colorSpace:(CGColorSpaceRef)colorspace forBounds:(NSRect)bounds;
- (NSUInteger)bufferPixelsWide;
- (NSUInteger)bufferPixelsHigh;
- (id)bufferPixelFormat;
- (CGColorSpaceRef)bufferColorSpace;
- (const void *)bufferBaseAddress;
- (NSUInteger)bufferBytesPerRow;
- (void)unlockBufferRepresentation;
- (BOOL)lockTextureRepresentationWithColorSpace:(CGColorSpaceRef)colorspace forBounds:(NSRect)bounds;
- (NSUInteger)texturePixelsWide;
- (NSUInteger)texturePixelsHigh;
- (NSUInteger)textureTarget;
- (NSUInteger)textureName;
- (CGColorSpaceRef)textureColorSpace;
- (BOOL)textureFlipped;
- (const float *)textureMatrix;
- (void)bindTextureRepresentationToCGLContext:(CGLContextObj)context textureUnit:(GLuint)unit normalizeCoordinates:(BOOL)normalize;
- (void)unbindTextureRepresentationFromCGLContext:(CGLContextObj)context textureUnit:(GLuint)unit;
- (void)unlockTextureRepresentation;
@end
@protocol QCPlugInOutputImageProvider
- (NSRect)imageBounds;
- (CGColorSpaceRef)imageColorSpace;
@end
@protocol QCStreamExporter
+ (id)exporterForStreamManager:(id)fp8;
- (id)supportedRepresentationTypes;
- (id)createRepresentationOfType:(id)fp8 withProvider:(id)fp12 withCount:(NSUInteger)fp16 elementSize:(NSUInteger)fp20 type:(int)fp24 options:(id)fp28;
@end
@protocol QCStreamProvider
+ (BOOL)isCompatibleWithSource:(id)fp8 sourceMD5:(QCMD5Sum *)fp12;
+ (id)createProviderWithSource:(id)fp8 options:(id)fp12;
- (QCMD5Sum)providerMD5;
- (id)sourceRepresentationType;
- (id)sourceRepresentation;
- (id)createArrayMemObjectForManager:(id)fp8 withCount:(NSUInteger)fp12 elementSize:(NSUInteger)fp16 type:(int)fp20 options:(id)fp24;
- (id)createImage2DMemObjectForManager:(id)fp8 withFormat:(id)fp12 options:(id)fp16;
- (BOOL)supportsConversion;
- (int)type;
- (id)pixelFormat;
- (NSUInteger)pixelsDeep;
- (NSUInteger)pixelsHigh;
- (NSUInteger)pixelsWide;
- (NSUInteger)elementSize;
- (NSUInteger)count;
@end
