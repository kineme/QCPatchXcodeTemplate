/*
 *  FreeboardPatch.m
 *  FreeboardPatch
 *
 *  Created by Christopher Wright on 1/20/09.
 *  Copyright (c) 2009 Kosada Incorporated. All rights reserved.
 *
 */

#import "FreeboardPatch.h"


@implementation FreeboardPatch : QCPatch

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
	return 1;
}

- (id)initWithIdentifier:(id)fp8
{
	if(self=[super initWithIdentifier:fp8])
		[[self userInfo] setObject:@"Kineme Freeboard" forKey:@"name"];

	return self;
}

- (BOOL)execute:(QCOpenGLContext *)context time:(double)time arguments:(NSDictionary *)arguments
{
	[outputChar setStringValue:@""];
	NSEvent *evt = [arguments objectForKey:@"QCRuntimeEventKey"];
	if(evt)
	{
		NSEventType type = [evt type];
		if(type == NSKeyDown)
			[outputChar setStringValue:[evt characters]];
		else if(type == NSFlagsChanged)
		{
			NSUInteger flags = [evt modifierFlags];
			// (BOOL)65536 = FALSE... lame-O
			[outputCapsLockKey setBooleanValue:(flags & NSAlphaShiftKeyMask)!=0];
			[outputShiftKey setBooleanValue:   (flags & NSShiftKeyMask)!=0];
			[outputFunctionKey setBooleanValue:(flags & NSFunctionKeyMask)!=0];
			[outputControlKey setBooleanValue: (flags & NSControlKeyMask)!=0];
			[outputOptionKey setBooleanValue:  (flags & NSAlternateKeyMask)!=0];
			[outputCommandKey setBooleanValue: (flags & NSCommandKeyMask)!=0];
		}
	}
	//NSLog(@"arguments @ %f: %@", time, arguments);
	return YES;
}

@end
