@interface QCOSCBroadcaster : QCOSCPatch
{
	QCDatagramBroadcaster *_broadcaster;	// 320 = 0x140
	double _maxFrequency;	// 324 = 0x144
	char *_oscBuffer;	// 332 = 0x14c
}

+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (NSUInteger)stateVersionWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
+ (id)serializedStateKeysWithIdentifier:(id)fp8;
- (void)_broadcasterThread:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)dealloc;
- (BOOL)setState:(NSDictionary*)state;
- (BOOL)setup:(QCOpenGLContext *)context;
- (void)setOscPortsConfiguration:(id)fp8;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (void)cleanup:(QCOpenGLContext *)context;

@end

@interface QCOSCBroadcaster (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
