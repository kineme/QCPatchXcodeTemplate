
#import "QCRenderState.h"

@interface QCGraphicsRenderState : QCRenderState
{
	CGColorSpaceRef currentColorSpace;	// 28 = 0x1c
	int currentQuality;	// 32 = 0x20
	NSRect currentFrame;	// 36 = 0x24
	NSRect currentBounds;	// 52 = 0x34
	NSRect saveFullFrame;	// 68 = 0x44
	NSRect saveCleanFrame;	// 84 = 0x54
	NSRect saveFullBounds;	// 100 = 0x64
	NSRect saveCleanBounds;	// 116 = 0x74
	NSSize savePixelAspectRatio;	// 132 = 0x84
	NSRect saveCleanAperture;	// 140 = 0x8c
}

- (void)finalize;
- (void)dealloc;

@end
