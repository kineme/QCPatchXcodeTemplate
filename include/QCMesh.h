@interface QCMesh : QCObject <NSCoding>
{
	QCMeshInternal *_meshComponents;	// 28 = 0x1c
	QCImage *_texture[16];	// 32 = 0x20
	struct __C3DMesh *_c3DSourceMesh;	// 96 = 0x60
	struct _QCC3DMesh *_c3DMesh;	// 100 = 0x64
	int _mode;	// 104 = 0x68
	struct _QCMeshBoundingBox *_boundingBox;	// 108 = 0x6c
	CGFloat *_transformation;	// 112 = 0x70
	NSUInteger _flags;	// 116 = 0x74
	NSUInteger _componentDirtyFlag;	// 120 = 0x78
	NSUInteger _componentUpdatedFlag;	// 124 = 0x7c
	void *_unused5[4];	// 128 = 0x80
}
@property (readonly,assign) float pointSize;
@property (readonly,assign) NSUInteger volumeWidth;
@property (readonly,assign) NSUInteger volumeHeight;
@property (readonly,assign) NSUInteger volumeDepth;
@property (readonly,assign) struct _QCMeshBoundingBox *boundingBox;
@property (readwrite,assign) CGFloat *transformation;
@property (readwrite,assign) BOOL flipCulling;
@property (readonly,assign) int mode;


- (id)initWithMode:(int)fp8;
- (id)initWithMesh:(id)fp8 byReplacingStreamsAndTypes:(id)fp12;
- (id)initWithMesh:(id)fp8;
- (id)initWithMode:(int)fp8 streamsAndTypes:(id)fp12;
- (id)initWithC3DMesh:(struct __C3DMesh *)fp8;
- (void)finalize_QCMesh;
- (void)finalize;
- (void)dealloc;
- (id)streamOfType:(int)fp8 forManager:(id)fp12;
- (id)imageAtIndex:(NSUInteger)fp8 forManager:(id)fp12;
- (float)pointSize;
- (NSUInteger)volumeWidth;
- (NSUInteger)volumeHeight;
- (NSUInteger)volumeDepth;
- (struct _QCMeshBoundingBox *)boundingBox;
- (void)setTransformation:(CGFloat *)fp8;
- (CGFloat *)transformation;
- (BOOL)flipCulling;
- (void)setFlipCulling:(BOOL)fp8;
- (id)initWithCoder:(NSCoder *)aDecoder;
- (void)encodeWithCoder:(NSCoder *)aCoder;
- (int)mode;
@end

@interface QCMesh (Override)
- (NSString*)description;
@end

@interface QCMesh (QCC3DMeshExtensions)
- (struct _QCC3DMesh *)createC3DMeshForContext:(id)fp8 options:(id)fp12;
@end
