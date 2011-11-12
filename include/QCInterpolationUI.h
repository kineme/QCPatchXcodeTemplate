
#import "QCInspector.h"

@class QCInterpolationView;

@interface QCInterpolationUI : QCInspector
{
	IBOutlet NSMatrix *interpolationMatrix;	// 28 = 0x1c
	IBOutlet QCInterpolationView *splineView;	// 32 = 0x20
}

+ (id)viewNibName;
- (void)setupViewForPatch:(id)fp8;
- (void)resetView;
- (void)updateInterpolation:(id)fp8;

@end
