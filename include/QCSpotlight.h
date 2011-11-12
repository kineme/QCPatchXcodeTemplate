@interface QCSpotlight : QCThreadPatch
{
	QCStringPort *inputQuery;	// 304 = 0x130
	QCBooleanPort *inputSignal;	// 308 = 0x134
	QCStructurePort *outputFiles;	// 312 = 0x138
	QCBooleanPort *outputSignal;	// 316 = 0x13c
	BOOL _keylessStructures;	// 320 = 0x140
	BOOL _lastSignal;	// 321 = 0x141
	BOOL _rerun;	// 322 = 0x142
	BOOL _gathering;	// 323 = 0x143
}

+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;
- (void)__finish:(id)fp8;
- (void)_matadorThread:(id)fp8;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (void)cleanup:(QCOpenGLContext *)context;
@end
