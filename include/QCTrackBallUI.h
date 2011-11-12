

#import "QCInspector.h"

@interface QCTrackBallUI : QCInspector
{
	IBOutlet NSSlider *sensibilitySlider;	// 28 = 0x1c
	IBOutlet NSButton *autorotationButton;	// 32 = 0x20
	IBOutlet NSSlider *inertiaSlider;	// 36 = 0x24
	IBOutlet NSSlider *frictionSlider;	// 40 = 0x28
}

+ (id)viewNibName;
- (void)setupViewForPatch:(id)fp8;
- (void)updateTracking:(id)fp8;
- (void)updateAutorotation:(id)fp8;
@end
