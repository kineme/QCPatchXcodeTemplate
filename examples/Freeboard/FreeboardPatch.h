/*
 *  FreeboardPatch.h
 *  FreeboardPatch
 *
 *  Created by Christopher Wright on 1/20/09.
 *  Copyright (c) 2009 Kosada Incorporated. All rights reserved.
 *
 */

@interface FreeboardPatch : QCPatch
{
	QCStringPort *outputChar;
	QCBooleanPort *outputCapsLockKey;
	QCBooleanPort *outputShiftKey;
	QCBooleanPort *outputFunctionKey;
	QCBooleanPort *outputControlKey;
	QCBooleanPort *outputOptionKey;
	QCBooleanPort *outputCommandKey;
}

- (id)initWithIdentifier:(id)fp8;

/*- (BOOL)setup:(QCOpenGLContext *)context;
- (void)cleanup:(QCOpenGLContext *)context;

- (void)enable:(QCOpenGLContext *)context;
- (void)disable:(QCOpenGLContext *)context;*/

- (BOOL)execute:(QCOpenGLContext *)context time:(double)time arguments:(NSDictionary *)arguments;
@end