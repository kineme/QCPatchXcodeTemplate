#import "MouseDeltaUI.h"

@implementation MouseDeltaUI

/* This method returns the NIB file to use for the inspector panel */
+(NSString*)viewNibName
{
    return @"MouseDeltaUI";
}

/* This method specifies the title for the patch */
+(NSString*)viewTitle
{
    return @"MouseDelta";
}
@end