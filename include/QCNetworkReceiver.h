@interface QCNetworkReceiver : QCNetworkPatch
{
	QCStringPort *outputString;	// 312 = 0x138
	QCNumberPort *outputTimestamp;	// 316 = 0x13c
	QCBooleanPort *outputSignal;	// 320 = 0x140
	BOOL _run;	// 324 = 0x144
	QCDatagramReceiver *_receiver;	// 328 = 0x148
}

+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
- (void)_receiverThread:(id)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (void)cleanup:(QCOpenGLContext *)context;
@end

@interface QCNetworkReceiver (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
