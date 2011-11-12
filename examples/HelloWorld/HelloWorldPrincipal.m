#import "HelloWorldPrincipal.h"
#import "HelloWorld.h"

@implementation HelloWorldPrincipal

+(void)registerNodesWithManager:(QCNodeManager*)manager
{
	KIRegisterPatch(HelloWorld); 
}

@end
