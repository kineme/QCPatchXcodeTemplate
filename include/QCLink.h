#import "GFConnection.h"

@interface QCLink : GFConnection
{
	id _proExtension;	// 40 = 0x28
	void *_unused2[3];	// 44 = 0x2c
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)fp8;
- (id)sourcePatch;
- (id)destinationPatch;
- (id)parentPatch;
@end

@interface QCLink (Override)
- (id)initWithGraph:(GFGraph*)graph sourcePort:(QCPort*)sourcePort destinationPort:(QCPort*)destPort arguments:(NSDictionary*)args;
- (void)dealloc;
- (void)connectionWillDeleteFromGraph;
@end
