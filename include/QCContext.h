// TODO: some stuff was added here in 10.6 -- guard it out

@interface QCContext : NSObject
{
	QCIterationManager *_iterationManager;	// 4 = 0x4
	NSMutableDictionary *_optimizedRendering;	// 8 = 0x8
	NSDictionary *_options;	// 12 = 0xc
	NSMutableDictionary *_userInfo;	// 16 = 0x10
	CFSetRef _renderingPatches;	// 20 = 0x14
	id _proExtension;	// 24 = 0x18
	void *_unused[1];	// 28 = 0x1c
}

+ (void)initialize;
+ (Class)renderStateClass;
- (void)_drawDirtyRectForPatch:(id)fp8;
- (id)init;
- (id)initWithOptions:(id)fp8;
- (void)finalize;
- (void)dealloc;
- (NSDictionary*)options;
- (NSMutableDictionary*)userInfo;
- (BOOL)startRenderingPatch:(id)fp8 options:(id)fp12;
- (void)pauseRenderingPatch:(id)fp8;
- (double)nextExecutionTimeForPatch:(id)fp8 time:(double)time arguments:(NSDictionary*)args;
- (BOOL)renderPatch:(id)fp8 time:(double)time arguments:(NSDictionary*)args;
- (void)resumeRenderingPatch:(id)fp8;
- (void)stopRenderingPatch:(id)fp8;
- (NSSet*)renderingPatches;
- (BOOL)willPushRenderState:(id)fp8;
- (void)didPushRenderState:(id)fp8;
- (void)willPopRenderState:(id)fp8;
- (void)didPopRenderState:(id)fp8;
- (void)sendRenderState:(id)fp8 didChangeMessage:(id)fp12 withAttributes:(id)fp16;
- (NSString*)description;
- (BOOL)prerenderPatch:(id)fp8 time:(double)time imageSizeHint:(NSSize)sizeHint arguments:(NSDictionary*)arguments;

@end

@interface QCContext (QCProFX)
- (double)scaleValue:(double)fp8;
- (void)setScale:(double)fp8;
@end
