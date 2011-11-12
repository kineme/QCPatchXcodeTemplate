@interface QCAppleRemote : QCRunLoopPatch
{
	QCBooleanPort *outputAvailable;	// 172 = 0xac
	QCBooleanPort *outputUpSignal;	// 176 = 0xb0
	QCBooleanPort *outputDownSignal;	// 180 = 0xb4
	QCBooleanPort *outputPreviousSignal;	// 184 = 0xb8
	QCBooleanPort *outputNextSignal;	// 188 = 0xbc
	QCBooleanPort *outputPlaySignal;	// 192 = 0xc0
	QCBooleanPort *outputMenuSignal;	// 196 = 0xc4
	BOOL _exclusive;	// 200 = 0xc8
	void *_hidDeviceInterface;	// 204 = 0xcc
	void *_queueInterface;	// 208 = 0xd0
	CFRunLoopSourceRef _hidEventSource;	// 212 = 0xd4
	CFDictionaryRef _cookies;	// 216 = 0xd8
	unsigned char _buttonsState;	// 220 = 0xdc
}

+ (BOOL)isSafe;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
- (void)_setUp;
- (void)_processEvents;
- (void)_cleanUp;
- (void)setExclusiveAccess:(BOOL)fp8;
- (BOOL)exclusiveAccess;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (void)cleanup:(QCOpenGLContext *)context;

@end

@interface QCAppleRemote (QCInspector)
+ (id)inspectorNibNameWithIdentifier:(id)fp8;
@end
