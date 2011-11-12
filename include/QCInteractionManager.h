@class QCPatch, QCRenderingPatch;

@interface QCInteractionManager : NSObject
{
	QCContactInfo _contacts[64];	// 4 = 0x4
	CGFloat _rotation;	// 1284 = 0x504
	CGFloat _feedbackRotation;	// 1288 = 0x508
	CGFloat _rotationOffset;	// 1292 = 0x50c
	CGFloat _feedbackScaleX;	// 1296 = 0x510
	CGFloat _scaleX;	// 1300 = 0x514
	CGFloat _scaleOffsetX;	// 1304 = 0x518
	CGFloat _feedbackScaleY;	// 1308 = 0x51c
	CGFloat _scaleY;	// 1312 = 0x520
	CGFloat _scaleOffsetY;	// 1316 = 0x524
	CGPoint _translation;	// 1320 = 0x528
	CGPoint _feedbackTranslation;	// 1328 = 0x530
	CGPoint _translationOffset;	// 1336 = 0x538
	CGPoint _origin;	// 1344 = 0x540
	NSUInteger _activeContactCount;	// 1352 = 0x548
	NSUInteger _maxActiveContacts;	// 1356 = 0x54c
	NSUInteger _flags;	// 1360 = 0x550
	NSUInteger _timestamp;	// 1364 = 0x554
	NSUInteger _previousTimestamp;	// 1368 = 0x558
	BOOL _updated;	// 1372 = 0x55c
	BOOL _useFeedback;	// 1373 = 0x55d
	BOOL _exposeScale;	// 1374 = 0x55e
	BOOL _exposeRotation;	// 1375 = 0x55f
	BOOL _allowNonUniformScaling;	// 1376 = 0x560
	struct _QCDod *_roi;	// 1380 = 0x564
	CGAffineTransform _transform;	// 1384 = 0x568
	QCRenderingPatch *_renderingPatch;	// 1408 = 0x580
	QCPatch *_parent;	// 1412 = 0x584
	void *_unused[6];	// 1416 = 0x588
}
@property (readonly,assign) BOOL translating;
@property (readonly,assign) BOOL scaling;
@property (readonly,assign) BOOL rotating;
@property (readonly,assign) NSArray *activeContacts;
@property (readonly,assign) CGFloat renderingDepth;
@property (readonly,assign) NSUInteger activeContactCount;
@property (readwrite,assign) BOOL allowNonUniformScaling;
@property (readwrite,assign) BOOL exposeRotation;
@property (readwrite,assign) BOOL exposeScale;
@property (readwrite,assign) BOOL useFeedback;
@property (readonly,assign) BOOL updated;
@property (readonly,assign) CGAffineTransform transform;
@property (readonly,assign) CGFloat scaleY;
@property (readonly,assign) CGFloat scaleX;
@property (readonly,assign) CGFloat rotation;
@property (readonly,assign) CGPoint origin;
@property (readonly,assign) CGPoint translation;

+ (NSUInteger)maxActiveContacts;
- (void)reset;
- (void)_setValuesFromRenderingPatch;
- (void)setRenderingPatch:(id)fp8;
- (id)init;
- (id)initWithParentPatch:(id)fp8;
- (void)_computeAffineTransform;
- (BOOL)hitTest:(CGPoint)fp8;
- (void)setContactX:(CGFloat)fp8 Y:(CGFloat)fp12 state:(int)fp16 forIndex:(NSUInteger)fp20;
- (void)setContactOffsetX:(CGFloat)fp8 Y:(CGFloat)fp12;
- (void)addDeltaContactX:(CGFloat)fp8 Y:(CGFloat)fp12 forIndex:(NSUInteger)fp16;
- (void)setScaleX:(CGFloat)fp8 Y:(CGFloat)fp12 state:(int)fp16;
- (void)setScaleOffsetX:(CGFloat)fp8 Y:(CGFloat)fp12;
- (void)addDeltaScale:(CGFloat)fp8;
- (void)setRotation:(CGFloat)fp8 state:(int)fp12;
- (void)setRotationOffset:(CGFloat)fp8;
- (void)addDeltaRotation:(CGFloat)fp8;
- (CGPoint)contactForIndex:(NSUInteger)fp8;
- (BOOL)translating;
- (BOOL)scaling;
- (BOOL)rotating;
- (CGPoint)translation;
- (CGFloat)scaleX;
- (CGFloat)scaleY;
- (CGFloat)rotation;
- (CGPoint)origin;
- (CGAffineTransform)transform;
- (CGFloat)renderingDepth;
- (NSArray*)activeContacts;
- (void)setExposeRotation:(BOOL)fp8;
- (NSUInteger)activeContactCount;
- (BOOL)allowNonUniformScaling;
- (void)setAllowNonUniformScaling:(BOOL)fp8;
- (BOOL)exposeRotation;
- (BOOL)exposeScale;
- (void)setExposeScale:(BOOL)fp8;
- (BOOL)useFeedback;
- (void)setUseFeedback:(BOOL)fp8;
- (BOOL)updated;
@end

@interface QCInteractionManager (Private)
- (BOOL)_selected;
- (BOOL)_updated;
@end
