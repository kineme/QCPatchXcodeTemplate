@interface QCRenderingPatch : QCPatch
{
	QCInteractionPort *_inputInteraction;	// 156 = 0x9c
	QCArray *_dod;	// 160 = 0xa0
	QCArray *_previousDod;	// 164 = 0xa4
	QCArray *_dodNeedsUpdate;	// 168 = 0xa8
	id <QCInteractionPatch> _savedInteractionPatch;	// 172 = 0xac
}

@property (readonly,assign) struct _QCDod *dod;
@property (readonly,assign) CGFloat depth;
@property (readonly,assign) CGFloat renderingDepth;
@property (readwrite,assign) CGFloat scaleY;
@property (readwrite,assign) CGFloat scaleX;
@property (readwrite,assign) CGFloat rotation;
@property (readwrite,assign) CGPoint position;

+ (BOOL)allowsInteraction;
- (id)nodeActorForView:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)finalize_QCRenderingPatch;
- (void)finalize;
- (void)dealloc;
- (struct _QCDod *)createDodForContext:(id)fp8;
- (BOOL)automaticStateSet:(id)fp8;
- (BOOL)allowsScissors:(id)fp8;
- (CGFloat)renderingDepth;
- (CGFloat)depth;
- (struct _QCDod *)dod;
- (void)_invalidateDod;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)_renderAtTime:(double)time arguments:(NSDictionary*)args;
- (BOOL)__execute:(double)time arguments:(NSDictionary*)args;
@end
