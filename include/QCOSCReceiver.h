@interface QCOSCReceiver : QCOSCPatch
{
	QCBooleanPort *outputSignal;	// 320 = 0x140
	QCDatagramReceiver *_receiver;	// 324 = 0x144
}

+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
- (BOOL)setup:(QCOpenGLContext *)context;
- (void)_receiverThread:(id)fp8;
- (void)setOscPortsConfiguration:(id)fp8;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (void)cleanup:(QCOpenGLContext *)context;
@end

@interface QCOSCReceiver (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
