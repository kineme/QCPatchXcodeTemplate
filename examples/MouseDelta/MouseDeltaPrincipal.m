#import "MouseDeltaPrincipal.h"
#import "MouseDelta.h"

@implementation MouseDeltaPlugin
+ (void)registerNodesWithManager:(GFNodeManager*)manager
{
	// each pattern checks to see if it's already registered.  Follow the pattern with additional patches.
	if( [manager isNodeRegisteredWithName: [MouseDelta className]] == FALSE )
		[manager registerNodeWithClass:[MouseDelta class]];
}
@end
