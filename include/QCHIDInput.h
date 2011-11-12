#import <IOKit/IOKitLib.h>

@interface QCHIDInput : QCRunLoopPatch
{
	QCBooleanPort *outputAvailable;	// 172 = 0xac
	NSString *_deviceID;	// 176 = 0xb0
	BOOL _exclusive;	// 180 = 0xb4
	GFList *_elementPorts;	// 184 = 0xb8
	void *_hidDeviceInterface;	// 188 = 0xbc
	void *_queueInterface;	// 192 = 0xc0
	CFRunLoopSourceRef _hidEventSource;	// 196 = 0xc4
	CFDictionaryRef _cookies;	// 200 = 0xc8
	IONotificationPortRef _notificationPort;	// 204 = 0xcc
	unsigned int _addNotification;	// 208 = 0xd0
	unsigned int _removeNotification;	// 212 = 0xd4
	BOOL _reset;	// 216 = 0xd8
}

+ (id)deviceIDList:(BOOL)fp8;
+ (id)allElementsForDeviceID:(id)fp8;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)dealloc;
- (void)_setNeedsReset;
- (void)_setUp;
- (void)_processEvents;
- (void)_cleanUp;
- (id)deviceID;
- (void)setDeviceID:(id)fp8;
- (void)setDeviceElements:(id)fp8;
- (id)deviceElements;
- (void)setExclusiveAccess:(BOOL)fp8;
- (BOOL)exclusiveAccess;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (void)cleanup:(QCOpenGLContext *)context;
@end

@interface QCHIDInput (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
