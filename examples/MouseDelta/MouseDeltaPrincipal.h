#import "QCProtocols.h"
#import "GFNodeManager.h"

@interface MouseDeltaPlugin : NSObject <GFPlugInRegistration>
+ (void)registerNodesWithManager:(GFNodeManager*)manager;
@end
