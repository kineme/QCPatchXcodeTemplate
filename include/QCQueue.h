@interface QCQueue : QCPatch
{
	QCVirtualPort *inputValue;	// 156 = 0x9c
	QCIndexPort *inputSize;	// 160 = 0xa0
	QCBooleanPort *inputFilling;	// 164 = 0xa4
	QCBooleanPort *inputResetSignal;	// 168 = 0xa8
	QCStructurePort *outputQueue;	// 172 = 0xac
	BOOL _continuous;	// 176 = 0xb0
	NSMutableArray *_queue;	// 180 = 0xb4
	BOOL _lastResetSignal;	// 184 = 0xb8
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)updateTimebase:(int)fp8;
- (void)setContinuous:(BOOL)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;
- (void)_forwardRenderingFlag;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (void)cleanup:(QCOpenGLContext *)context;
@end

@interface QCQueue (QCInspector)
+ (id)inspectorNibNameWithIdentifier:(id)fp8;
@end
