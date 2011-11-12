
#import "QCInspector.h"

@interface QCQuadricUI : QCInspector
{
	IBOutlet NSTextField *slicesField;	// 28 = 0x1c
	IBOutlet NSTextField *stacksField;	// 32 = 0x20
}

+ (id)viewNibName;
- (void)setupViewForPatch:(id)fp8;
- (void)update:(id)fp8;

@end
