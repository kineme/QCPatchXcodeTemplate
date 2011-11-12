@interface QCPlugIn : NSObject
{
	void *_private;	// 4 = 0x4
}

+ (id)allocWithZone:(NSZone *)zone;
+ (id)attributes;
+ (id)attributesForPropertyPortWithKey:(id)fp8;
+ (id)sortedPropertyPortKeys;
+ (int)executionMode;
+ (int)timeMode;
+ (id)plugInKeys;
- (void)dealloc;
- (void)_setPatch:(id)fp8;
- (QCPatch*)patch;
- (BOOL)startExecution:(QCOpenGLContext*)context;
- (void)enableExecution:(QCOpenGLContext*)context;
- (double)executionTimeForContext:(QCOpenGLContext*)context atTime:(double)time withArguments:(NSDictionary*)args;
- (double)nextRecommendedExecutionTime:(QCOpenGLContext*)context forTime:(double)time withArguments:(NSDictionary*)args;
- (BOOL)execute:(QCOpenGLContext*)context atTime:(double)time withArguments:(NSDictionary*)args;
- (void)disableExecution:(QCOpenGLContext*)context;
- (void)stopExecution:(QCOpenGLContext*)context;
- (id)serializedValueForKey:(id)fp8;
- (void)setSerializedValue:(id)fp8 forKey:(id)fp12;
- (void)setNilValueForKey:(id)key;
- (void)setValue:(id)value forKey:(id)key;
@end

@interface QCPlugIn (DynamicMethodResolution)
+ (BOOL)resolveInstanceMethod:(SEL)fp8;
- (id)_portFromSelector:(SEL)fp8;
@end

@interface QCPlugIn (Ports)
- (BOOL)didValueForInputKeyChange:(id)fp8;
- (id)_valueForInputPort:(id)fp8;
- (id)valueForInputKey:(id)fp8;
- (BOOL)_setValue:(id)fp8 forOutputPort:(id)fp12;
- (BOOL)setValue:(id)fp8 forOutputKey:(id)fp12;
- (void)addInputPortWithType:(id)fp8 forKey:(id)fp12 withAttributes:(id)fp16;
- (void)removeInputPortForKey:(id)fp8;
- (void)addOutputPortWithType:(id)fp8 forKey:(id)fp12 withAttributes:(id)fp16;
- (void)removeOutputPortForKey:(id)fp8;
@end

@interface QCPlugIn (QCPlugInContext) <QCPlugInContext>
- (id)compositionURL;
- (void)logMessage:(NSString*)format,...;
- (id)userInfo;
- (CGColorSpaceRef)colorSpace;
- (CGLContextObj)CGLContextObj;
- (NSRect)bounds;
- (id)outputImageProviderFromBufferWithPixelFormat:(id)fp8 pixelsWide:(NSUInteger)fp12 pixelsHigh:(NSUInteger)fp16 baseAddress:(const void *)fp20 bytesPerRow:(NSUInteger)fp24 releaseCallback:(void *)fp28 releaseContext:(void *)fp32 colorSpace:(CGColorSpaceRef)fp36 shouldColorMatch:(BOOL)fp40;
- (id)outputImageProviderFromTextureWithPixelFormat:(id)fp8 pixelsWide:(NSUInteger)fp12 pixelsHigh:(NSUInteger)fp16 name:(GLuint)fp20 flipped:(BOOL)fp24 releaseCallback:(void *)fp28 releaseContext:(void *)fp32 colorSpace:(CGColorSpaceRef)fp36 shouldColorMatch:(BOOL)fp40;
@end

@interface QCPlugIn (QCPlugInViewController)
- (id)createViewController;
@end

@interface QCPlugIn (Registry)
+ (void)initialize;
+ (Class)classForPlugInIdentifier:(id)fp8;
+ (void)loadAndRegisterAllPlugIns;
+ (BOOL)loadPlugInAtPath:(NSString*)path;
+ (void)registerPlugInClass:(Class)pluginClass;
@end
