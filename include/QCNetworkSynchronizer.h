@interface QCNetworkSynchronizer : QCNetworkPatch
{
	QCStringPort *inputString;	// 312 = 0x138
	QCBooleanPort *outputBroadcasting;	// 316 = 0x13c
	QCStringPort *outputString;	// 320 = 0x140
	QCNumberPort *outputTimestamp;	// 324 = 0x144
	QCBooleanPort *outputSignal;	// 328 = 0x148
	double _maxFrequency;	// 332 = 0x14c
	BOOL _transmitting;	// 340 = 0x154
	BOOL _run;	// 341 = 0x155
	QCDatagramBroadcaster *_broadcaster;	// 344 = 0x158
	QCDatagramReceiver *_receiver;	// 348 = 0x15c
}

+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (NSUInteger)stateVersionWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
+ (id)serializedStateKeysWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)setState:(NSDictionary*)state;
- (void)_synchronizerThread:(id)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (void)cleanup:(QCOpenGLContext *)context;
@end

@interface QCNetworkSynchronizer (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
