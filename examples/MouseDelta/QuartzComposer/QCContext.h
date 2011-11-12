@interface QCContext : NSObject
{
    NSDictionary *_options;
    NSMutableDictionary *_userInfo;
    struct __CFSet *_renderingPatches;
    id _proExtension;
    void *_unused[3];
}

+ (Class)renderStateClass;
- (id)init;
- (id)initWithOptions:(id)fp8;
- (void)finalize;
- (void)dealloc;
- (id)options;
- (id)userInfo;
- (BOOL)startRenderingPatch:(id)fp8 options:(id)fp12;
- (void)pauseRenderingPatch:(id)fp8;
- (BOOL)renderPatch:(id)fp8 time:(double)fp12 arguments:(id)fp20;
- (void)resumeRenderingPatch:(id)fp8;
- (void)stopRenderingPatch:(id)fp8;
- (id)renderingPatches;
- (BOOL)willPushRenderState:(id)fp8;
- (void)didPushRenderState:(id)fp8;
- (void)willPopRenderState:(id)fp8;
- (void)didPopRenderState:(id)fp8;
- (void)sendRenderState:(id)fp8 didChangeMessage:(id)fp12 withAttributes:(id)fp16;
- (id)description;

@end

@interface QCContext (QCProFX)
- (double)scaleValue:(double)fp8;
- (void)setScale:(double)fp8;
@end

