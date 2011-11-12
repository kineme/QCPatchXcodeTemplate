#import "MouseDelta.h"
#import "MouseDeltaUI.h"


@implementation MouseDelta : QCPatch

+ (int)executionModeWithIdentifier:(id)fp8
{
	return 2;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8
{
	return NO;
}

+ (int)timeModeWithIdentifier:(id)fp8
{
	return 0;
}

/*- (id)initWithIdentifier:(id)fp8
{
	if(self = [super initWithIdentifier:fp8])
	{
	}

	return self;
}*/

- (BOOL)execute:(QCOpenGLContext *)context time:(double)time arguments:(NSDictionary *)arguments
{
	NSEvent *e=[arguments objectForKey:@"QCRuntimeEventKey"];
	if( e )//&& ([e type] & NSScrollWheelMask) )
	{
		[outputDeltaX setDoubleValue:[e deltaX]];
		[outputDeltaY setDoubleValue:[e deltaY]];
	}
	else
	{
		[outputDeltaX setDoubleValue:0.0];
		[outputDeltaY setDoubleValue:0.0];
	}
	
	NSPoint mousePos = [[arguments objectForKey:@"QCRuntimeMouseLocationKey"] pointValue];
	[outputXPosition setDoubleValue:mousePos.x];
	[outputYPosition setDoubleValue:mousePos.y];
	
	return YES;
}

@end
