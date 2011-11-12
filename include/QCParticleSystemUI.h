
#import "QCInspector.h"

@interface QCParticleSystemUI : QCInspector
{
	IBOutlet NSTextField *delayField;	// 28 = 0x1c
}

+ (id)viewNibName;
- (void)setupViewForPatch:(id)fp8;
- (void)updateDelay:(id)fp8;

@end
