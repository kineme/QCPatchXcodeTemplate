@class QCBooleanPort, QCIndexPort, QCPatch, QCStructurePort;

@interface QCSlideShowController : NSObject
{
	QCPatch *_patch;	// 4 = 0x4
	QCBooleanPort *_signalPort;	// 8 = 0x8
	QCStructurePort *_structurePort;	// 12 = 0xc
	QCIndexPort *_countPort;	// 16 = 0x10
	QCIndexPort *_swapPort;	// 20 = 0x14
	id _source;	// 24 = 0x18
	BOOL _hasNames;	// 28 = 0x1c
	NSMutableArray *_imageCache;	// 32 = 0x20
	NSRange _imageRange;	// 36 = 0x24
	NSUInteger _imageSwap;	// 44 = 0x2c
	BOOL _updating;	// 48 = 0x30
	NSUInteger _pendingLoads;	// 52 = 0x34
	void *_unused[4];	// 56 = 0x38
}

- (id)init;
- (id)initWithPatch:(id)fp8 dataSource:(id)fp12;
- (void)finalize;
- (void)dealloc;
- (id)patch;
- (id)dataSource;
- (void)willRenderPatch;
- (void)_startLoadingImage:(id)fp8;
- (void)_doneLoadingImage:(id)fp8;
- (void)didRenderPatch;

@end
