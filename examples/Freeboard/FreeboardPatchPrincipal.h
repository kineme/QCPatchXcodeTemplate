/*
 *  FreeboardPatchPrincipal.h
 *  FreeboardPatch
 *
 *  Created by Christopher Wright on 1/20/09.
 *  Copyright (c) 2009 Kosada Incorporated. All rights reserved.
 *
 */

@interface FreeboardPatchPlugin : NSObject <GFPlugInRegistration>
+ (void)registerNodesWithManager:(QCNodeManager*)manager;
@end
