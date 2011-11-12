/*
 *  FreeboardPatchPrincipal.m
 *  FreeboardPatch
 *
 *  Created by Christopher Wright on 1/20/09.
 *  Copyright (c) 2009 Kosada Incorporated. All rights reserved.
 *
 */

#import "FreeboardPatchPrincipal.h"
#import "FreeboardPatch.h"

@implementation FreeboardPatchPlugin
+ (void)registerNodesWithManager:(QCNodeManager*)manager
{
	// each pattern checks to see if it's already registered.  Follow the pattern with additional patches.
	//if( [manager isNodeRegisteredWithName: NSStringFromClass([FreeboardPatch class])] == FALSE )
		[manager registerNodeWithClass:[FreeboardPatch class]];
}
@end
