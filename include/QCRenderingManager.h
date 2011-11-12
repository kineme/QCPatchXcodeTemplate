

@class QCPatch;

@interface QCRenderingManager : NSObject
{
	QCExecutionArray *_patches;	// 4 = 0x4
	QCExecutionStride *_iterationStride;	// 8 = 0x8
	QCIterationStack *_iterationStack;	// 12 = 0xc
	double _nextIdleTime;	// 16 = 0x10
	double _previousExecutionTime;	// 24 = 0x18
	NSDictionary *_previousArguments;	// 32 = 0x20
	NSUInteger _previousPatchCount;	// 36 = 0x24
	NSUInteger _subpatchesCount;	// 40 = 0x28
	NSUInteger _iteration;	// 44 = 0x2c
	NSUInteger *_indices;	// 48 = 0x30
	NSUInteger _indicesCapacity;	// 52 = 0x34
	BOOL _canReset;	// 56 = 0x38
	CGRect _dirtyRect;	// 60 = 0x3c
	CGRect _previousDirtyRect;	// 76 = 0x4c
	CGRect _dod;	// 92 = 0x5c
	QCPatch *_rootPatch;	// 108 = 0x6c
	BOOL _needsRender;	// 112 = 0x70
	BOOL _isIterator;	// 113 = 0x71
	void *_unused[4];	// 116 = 0x74
}

+ (void)initialize;
- (id)initWithPatch:(id)fp8;
- (void)finalize_QCRenderingManager;
- (void)finalize;
- (void)dealloc;
- (BOOL)needsRender;
- (double)nextIdleTime;
- (double)nextExecutionTime:(double)fp8 arguments:(id)fp16;
- (BOOL)renderAtTime:(double)fp8 arguments:(id)fp16;
- (BOOL)addPatch:(id)fp8 context:(id)fp12 time:(double)fp16 arguments:(id)fp24 nextExecutionTime:(double)fp28;
- (NSUInteger)currentIteration;

@end

@interface QCRenderingManager (Private)
- (void)_reset;
- (void)_nextFrame;
- (id)_renderTree;
- (void)_nextIteration;
- (NSUInteger)_currentIteration;
@end
