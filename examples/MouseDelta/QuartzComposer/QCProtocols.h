/* Convenience header for protocols used within QC */

#import <QCTypes.h>

@protocol GFBase
- (id)attributes;
- (id)userInfo;
- (id)state;
- (BOOL)setState:(id)fp8;
- (void)stateUpdated;
@end

@protocol GFPlugInRegistration
+ (void)registerNodesWithManager:(id)fp8;
@end

/*  -- included in QC Leopard, not on Tiger.  uncomment to test build-cleanliness on a tiger machine.
@protocol NSFastEnumeration
- (unsigned int)countByEnumeratingWithState:(QCListState *)fp8 objects:(id *)fp12 count:(unsigned int)fp16;
@end*/

@protocol QCCache
- (id)initWithMaximumSize:(double)fp8 maximumResourceAge:(double)fp16 options:(id)fp24;
- (void)addResource:(id)fp8 withSize:(double)fp12 cost:(double)fp20 md5List:(QCMD5Sum *)fp28 count:(unsigned int)fp32;
- (void)removeResource:(id)fp8;
- (void)removeAllResources;
- (void)collectResources;
- (id)subcacheMatchingMd5List:(QCMD5Sum *)fp8 forIndices:(unsigned int *)fp12 count:(unsigned int)fp16;
- (id)subcacheUsingFilteringFunction:(void *)fp8 userInfo:(void *)fp12 userInfoReleaseCallback:(void *)fp16;
- (id)copyBestResource:(float *)fp8;
- (id)copyAnyResource;
- (id)copyAllResources;
@end

@protocol QCCompositionRenderer
- (id)attributes;
- (id)inputKeys;
- (id)outputKeys;
- (BOOL)setValue:(id)fp8 forInputKey:(id)fp12;
- (id)valueForInputKey:(id)fp8;
- (id)valueForOutputKey:(id)fp8;
- (id)valueForOutputKey:(id)fp8 ofType:(id)fp12;
- (id)propertyListFromInputValues;
- (void)setInputValuesWithPropertyList:(id)fp8;
- (id)userInfo;
@end

@protocol QCImageBufferConverter
+ (id)converterForImageManager:(id)fp8;
- (BOOL)supportsCropping;
- (BOOL)supportsTransformation;
- (BOOL)supportsColorMatching;
- (id)supportedPixelBufferFormatsForFormat:(id)fp8;
- (id)createPixelBufferFromImageBuffer:(id)fp8 withFormat:(id)fp12 transformation:(id)fp16 bounds:(NSRect)fp20 colorSpace:(struct CGColorSpace *)fp36 options:(id)fp40;
- (id)supportedTextureBufferFormatsForFormat:(id)fp8;
- (id)createTextureBufferFromImageBuffer:(id)fp8 withFormat:(id)fp12 target:(unsigned int)fp16 transformation:(id)fp20 bounds:(NSRect)fp24 colorSpace:(struct CGColorSpace *)fp40 options:(id)fp44;
@end

@protocol QCImageExporter
+ (id)exporterForImageManager:(id)fp8;
- (id)supportedRepresentationTypes;
- (id)createRepresentationOfType:(id)fp8 withProvider:(id)fp12 transformation:(id)fp16 bounds:(NSRect)fp20 colorSpace:(struct CGColorSpace *)fp36 options:(id)fp40;
@end

@protocol QCImageProvider
+ (BOOL)isCompatibleWithSource:(id)fp8 sourceMD5:(QCMD5Sum *)fp12;
+ (id)createProviderWithSource:(id)fp8 options:(id)fp12;
- (QCMD5Sum)providerMD5;
- (id)sourceRepresentationType;
- (id)sourceRepresentation;
- (id)domainOfDefinition;
- (struct CGColorSpace *)colorSpace;
- (BOOL)hasAlpha;
- (id)nativePixelFormat;
- (unsigned int)nativeTextureTarget;
- (BOOL)supportsCropping;
- (BOOL)supportsTransformation;
- (BOOL)supportsColorMatching;
- (id)supportedPixelBufferFormatsForManager:(id)fp8;
- (id)createPixelBufferForManager:(id)fp8 withFormat:(id)fp12 transformation:(id)fp16 bounds:(NSRect)fp20 colorSpace:(struct CGColorSpace *)fp36 options:(id)fp40;
- (id)supportedTextureBufferTargetsForManager:(id)fp8;
- (id)supportedTextureBufferFormatsForManager:(id)fp8;
- (id)createTextureBufferForManager:(id)fp8 withFormat:(id)fp12 target:(unsigned int)fp16 transformation:(id)fp20 bounds:(NSRect)fp24 colorSpace:(struct CGColorSpace *)fp40 options:(id)fp44;
@end

@protocol QCOpenGLPort
- (void)setOnOpenGLContext:(id)fp8;
- (void)unsetOnOpenGLContext:(id)fp8;
@end

@protocol QCPlugInContext
- (id)compositionURL;
- (void)logMessage:(id)fp8;
- (id)userInfo;
- (struct CGColorSpace *)colorSpace;
- (NSRect)bounds;
- (struct _CGLContextObject *)CGLContextObj;
- (id)outputImageProviderFromBufferWithPixelFormat:(id)fp8 pixelsWide:(unsigned int)fp12 pixelsHigh:(unsigned int)fp16 baseAddress:(const void *)fp20 bytesPerRow:(unsigned int)fp24 releaseCallback:(void *)fp28 releaseContext:(void *)fp32 colorSpace:(struct CGColorSpace *)fp36 shouldColorMatch:(BOOL)fp40;
- (id)outputImageProviderFromTextureWithPixelFormat:(id)fp8 pixelsWide:(unsigned int)fp12 pixelsHigh:(unsigned int)fp16 name:(unsigned int)fp20 flipped:(BOOL)fp24 releaseCallback:(void *)fp28 releaseContext:(void *)fp32 colorSpace:(struct CGColorSpace *)fp36 shouldColorMatch:(BOOL)fp40;
@end

@protocol QCPlugInInputImageSource
- (NSRect)imageBounds;
- (struct CGColorSpace *)imageColorSpace;
- (BOOL)shouldColorMatch;
- (BOOL)lockBufferRepresentationWithPixelFormat:(id)fp8 colorSpace:(struct CGColorSpace *)fp12 forBounds:(NSRect)fp16;
- (unsigned int)bufferPixelsWide;
- (unsigned int)bufferPixelsHigh;
- (id)bufferPixelFormat;
- (struct CGColorSpace *)bufferColorSpace;
- (const void *)bufferBaseAddress;
- (unsigned int)bufferBytesPerRow;
- (void)unlockBufferRepresentation;
- (BOOL)lockTextureRepresentationWithColorSpace:(struct CGColorSpace *)fp8 forBounds:(NSRect)fp12;
- (unsigned int)texturePixelsWide;
- (unsigned int)texturePixelsHigh;
- (unsigned int)textureTarget;
- (unsigned int)textureName;
- (struct CGColorSpace *)textureColorSpace;
- (BOOL)textureFlipped;
- (const float *)textureMatrix;
- (void)bindTextureRepresentationToCGLContext:(struct _CGLContextObject *)fp8 textureUnit:(unsigned int)fp12 normalizeCoordinates:(BOOL)fp16;
- (void)unbindTextureRepresentationFromCGLContext:(struct _CGLContextObject *)fp8 textureUnit:(unsigned int)fp12;
- (void)unlockTextureRepresentation;
@end

@protocol QCPlugInOutputImageProvider
- (NSRect)imageBounds;
- (struct CGColorSpace *)imageColorSpace;
@end
