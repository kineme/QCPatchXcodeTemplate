@interface QCRegion : NSObject
{
	CGRect _bounds;	// 4 = 0x4
	void *_region;	// 20 = 0x14
	void *_unused[4];	// 24 = 0x18
}

+ (void)initialize;
+ (id)emptyRegion;
+ (id)infiniteRegion;
+ (id)regionWithCGRect:(CGRect)rect;
+ (id)regionWithCGSRegion:(void *)fp8;
+ (id)regionWithRect:(NSRect)fp8;
- (void)finalize;
- (void)dealloc;
- (id)initWithCGRect:(CGRect)fp8;
- (CGRect)CGRect;
- (id)initWithCGSRegion:(void *)fp8;
- (void *)CGSRegion;
- (id)initWithRect:(NSRect)fp8;
- (NSRect)bounds;
- (BOOL)isEmpty;
- (BOOL)isInfinite;
- (BOOL)isRectangular;
- (BOOL)containsPoint:(NSPoint)point;
- (BOOL)containsRect:(NSRect)rect;
- (BOOL)containsRegion:(id)fp8;
- (BOOL)intersectsRect:(NSRect)rect;
- (BOOL)intersectsRegion:(id)fp8;
- (id)listRects;
- (id)pixelBufferRepresentation;
- (void *)enumerateRects:(void *)fp8 outRect:(NSRect *)fp12;
- (id)transformWith:(CGAffineTransform *)tranform;
- (id)transformBy:(id)fp8;
- (id)offsetByX:(CGFloat)fp8 Y:(CGFloat)fp12;
- (id)scaleByX:(CGFloat)fp8 Y:(CGFloat)fp12;
- (id)rotateByDegrees:(CGFloat)fp8;
- (id)insetByX:(CGFloat)fp8 Y:(CGFloat)fp12;
- (id)unionWithRect:(NSRect)rect;
- (id)intersectWithRect:(NSRect)rect;
- (id)subtractRect:(NSRect)rect;
- (id)unionWithRegion:(id)fp8;
- (id)intersectWithRegion:(id)fp8;
- (id)subtractRegion:(id)fp8;
- (NSString*)description;
@end

@interface QCRegion (CIFilterShape)
+ (id)regionWithCIFilterShape:(id)fp8;
- (id)initWithCIFilterShape:(id)fp8;
- (id)CIFilterShape;
@end
