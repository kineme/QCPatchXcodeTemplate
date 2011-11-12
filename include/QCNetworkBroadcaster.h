@interface QCNetworkBroadcaster : QCNetworkPatch
{
	QCStringPort *inputString;	// 312 = 0x138
	double _maxFrequency;	// 316 = 0x13c
	BOOL _run;	// 324 = 0x144
	QCDatagramBroadcaster *_broadcaster;	// 328 = 0x148
}

+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (NSUInteger)stateVersionWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
+ (id)serializedStateKeysWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)setState:(NSDictionary*)state;
- (void)_broadcasterThread:(id)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (void)cleanup:(QCOpenGLContext *)context;
@end

@interface QCNetworkBroadcaster (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
