#import "QCProfileView.h"

@class QCPatch;

@interface QCPatchProfileView : QCProfileView
{
	QCPatch *_patch;	// 140 = 0x8c
	double _lastFrameTime;	// 144 = 0x90
	NSUInteger _lastFrameID;	// 152 = 0x98
	NSUInteger _lastPatchCount;	// 156 = 0x9c
	void *_unused2[4];	// 160 = 0xa0
}

- (id)initWithFrame:(NSRect)fp8;
- (void)dealloc;
- (void)drawRect:(NSRect)fp8;
- (void)setSampleSize:(NSUInteger)fp8;
- (void)addSample:(const double *)fp8;
- (void)clearAllSamples;
- (void)_didStart:(id)fp8;
- (void)__addStats:(id)fp8;
- (void)_didRender:(id)fp8;
- (void)setPatch:(QCPatch*)patch;
- (QCPatch*)patch;

@end
