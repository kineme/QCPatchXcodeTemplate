



@interface QCCompositionLayer : CAOpenGLLayer <QCCompositionRenderer>
{
	void *_QCCompositionLayerPrivate;	// 52 = 0x34
}

+ (BOOL)automaticRedisplay;
+ (BOOL)implicitParameterAnimations;
+ (id)defaultRenderingOptions;
+ (id)defaultValueForKey:(id)fp8;
+ (id)compositionLayerWithFile:(id)fp8;
+ (id)compositionLayerWithComposition:(id)fp8;
- (id)init;
- (id)initWithFile:(id)fp8;
- (id)initWithComposition:(id)fp8;
- (void)__portUpdated:(id)fp8;
- (id)_parameterValues;
- (void)_finishInitialization;
- (id)initWithLayer:(id)fp8;
- (id)initWithPatch:(id)fp8;
- (id)initWithCoder:(NSCoder *)aDecoder;
- (void)encodeWithCoder:(NSCoder *)aCoder;
- (void)setAsynchronous:(BOOL)fp8;
- (void)_releaseOpenGLContext;
- (void)invalidate;
- (void)finalize;
- (void)dealloc;
- (id)patch;
- (id)composition;
- (id)renderingContext;
- (void)setRenderingAspectRatio:(NSSize)fp8;
- (NSSize)renderingAspectRatio;
- (CGLPixelFormatObj)copyCGLPixelFormatForDisplayMask:(unsigned int)fp8;
- (void)releaseCGLPixelFormat:(CGLPixelFormatObj)fp8;
- (CGLContextObj)copyCGLContextForPixelFormat:(CGLPixelFormatObj)fp8;
- (void)releaseCGLContext:(CGLContextObj)fp8;
- (BOOL)needsRender:(double)fp8 arguments:(id)fp16;
- (BOOL)renderAtTime:(double)fp8 arguments:(id)fp16;
- (BOOL)canDrawInCGLContext:(CGLContextObj)fp8 pixelFormat:(CGLPixelFormatObj)fp12 forLayerTime:(double)fp16 displayTime:(const CVTimeStamp *)fp24;
- (void)drawInCGLContext:(CGLContextObj)fp8 pixelFormat:(CGLPixelFormatObj)fp12 forLayerTime:(double)fp16 displayTime:(const CVTimeStamp *)fp24;
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
- (id)actionForKey:(id)fp8;
- (void)layerDidBecomeVisible:(BOOL)fp8;
- (void)setValue:(id)fp8 forKeyPath:(id)fp12;
- (id)valueForKeyPath:(id)fp8;
- (void)setObservationInfo:(void *)fp8;
- (void *)observationInfo;

@end
