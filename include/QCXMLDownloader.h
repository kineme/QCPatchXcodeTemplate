@interface QCXMLDownloader : QCDownloadPatch
{
	QCStringPort *inputURL;	// 256 = 0x100
	QCBooleanPort *inputSignal;	// 260 = 0x104
	QCStructurePort *outputStructure;	// 264 = 0x108
	QCNumberPort *outputProgress;	// 268 = 0x10c
	QCBooleanPort *outputSignal;	// 272 = 0x110
	BOOL _synchronousMode;	// 276 = 0x114
	BOOL _lastSignal;	// 277 = 0x115
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (id)stateKeysWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)synchronousMode;
- (void)setSynchronousMode:(BOOL)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;
- (id)createResourceWithDownloadedData:(id)fp8 sourceURL:(id)fp12;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end

@interface QCXMLDownloader (QCInspector)
+ (id)inspectorNibNameWithIdentifier:(id)fp8;
@end
