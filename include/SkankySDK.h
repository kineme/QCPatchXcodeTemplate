#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>
#import <OpenGL/OpenGL.h>
#import <OpenGL/CGLTypes.h>
#import <JavaScriptCore/JavaScriptCore.h>
#import <QuartzCore/QuartzCore.h>
#import <objc/runtime.h>

#if __clang__
#define NS_RETURNS_RETAINED __attribute__((ns_returns_retained))
#else
#define NS_RETURNS_RETAINED
#endif

#if MAC_OS_X_VERSION_MAX_ALLOWED >= 1060
#import <OpenCL/opencl.h>
#endif

#pragma mark Base
#import "QCTypes.h"
#import "QCProtocols.h"
#import "QCCFunctions.h"

#pragma mark NS Extensions
#import "NSExtensions.h"

#pragma mark Graph Foundation
#import "GraphFoundation.h"

#pragma mark Quartz Composer
#import "QuartzComposer-Internal.h"

#pragma mark QC Patches
#import "QCPatches.h"



#pragma mark GL 32/64 expansions

#if defined(__LP64__) && __LP64__
	#define KIGLColor4 glColor4d
	#define KIGLColor4v glColor4dv
	#define KIGLMultMatrix glMultMatrixd
#else
	#define KIGLColor4 glColor4f
	#define KIGLColor4v glColor4fv
	#define KIGLMultMatrix glMultMatrixf
#endif




#pragma mark Skanky Stuff

#define SL()                NSLog(@"[%@ %s]", [self class], _cmd)
#define SLog(format, ...)	NSLog([@"[%@ %s]  " stringByAppendingString:format], [self class], _cmd, ##__VA_ARGS__)
#define SLogVar(var)		NSLog(@"[%@ %s]  %s = '%@'", [self class], _cmd, #var, var)
#define SLogBacktrace()		NSLog(@"[%@ %s] %@", [self class], _cmd, [NSThread callStackSymbols])

static inline NSString *KIExpandPath(GFNode *patch,NSString *path)
{
	if([path length] < 1)
		return nil;

	// is it an absolute path?  if so, don't do anything
	unichar firstChar = [path characterAtIndex:0];
	if(firstChar == '/')
		return path;

	if(firstChar == '~')
		return [path stringByExpandingTildeInPath];

	// not absolute and not ~-ified, must be composition relative
	NSDictionary *options = [patch _getUserInfo:@".options"];
	NSURL *url = [options objectForKey:@"compositionURL"];
	return [[[url path] stringByDeletingLastPathComponent] stringByAppendingPathComponent:path];
}

static inline BOOL KIOnLeopard() __attribute__ ((pure));
static inline BOOL KIOnLeopard()
{
	SInt32 majorVersion, minorVersion; // bugfixVersion;
	Gestalt(gestaltSystemVersionMajor, &majorVersion);
	Gestalt(gestaltSystemVersionMinor, &minorVersion);
	//Gestalt(gestaltSystemVersionBugFix, &bugfixVersion);

	if(majorVersion == 10 && minorVersion == 5)
		return YES;
	
	return NO;
}

static inline BOOL KIOnSnowLeopard() __attribute__ ((pure));
static inline BOOL KIOnSnowLeopard()
{
	SInt32 majorVersion, minorVersion; // bugfixVersion;
	Gestalt(gestaltSystemVersionMajor, &majorVersion);
	Gestalt(gestaltSystemVersionMinor, &minorVersion);
	//Gestalt(gestaltSystemVersionBugFix, &bugfixVersion);

	if(majorVersion == 10 && minorVersion == 6)
		return YES;
	
	return NO;
}

static inline void KISetPatchInputValue(id patch,NSString *portKey,id value)
{
	QCPort *port = [patch valueForKey:portKey];
	[port setValue:value];
	object_setInstanceVariable([patch valueForKey:portKey],"_updated",(void *)YES);
}

#define KIRegisterPatch(patchClass) \
	if( ![manager isNodeRegisteredWithName: NSStringFromClass([patchClass class])] ) \
		[manager registerNodeWithClass:[patchClass class]]; \
	else \
		SLog(@"Class %@ is already registered.  Make sure you don't have multiple copies of this plugin installed.",NSStringFromClass([patchClass class]));

#define KIRegisterPatchIdentifier(patchClass,patchIdentifier) \
	if( ![manager isNodeRegisteredWithName: NSStringFromClass([patchClass class])] ) \
		[manager registerNodeWithClass:[patchClass class] identifier:patchIdentifier]; \
	else \
		SLog(@"Class %@:%@ is already registered.  Make sure you don't have multiple copies of this plugin installed.",NSStringFromClass([patchClass class]),patchIdentifier);
