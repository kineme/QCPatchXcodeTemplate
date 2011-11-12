
#import "QCPatchActor.h"

@interface QCSharedPatchActor : QCPatchActor
{
	NSMutableDictionary *_inspectorCache;	// 84 = 0x54
}

- (id)init;
- (void)dealloc;
- (id)inspectorForPatch:(id)fp8;
@end
