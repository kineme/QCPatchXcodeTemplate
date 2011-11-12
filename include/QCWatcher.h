@interface QCWatcher : QCPatch
{
	QCBooleanPort *outputSignal;	// 156 = 0x9c
	NSUInteger _lastTimestamp;	// 160 = 0xa0
	QCPort *_inPort;	// 164 = 0xa4
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
+ (id)serializedStateKeysWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)updateTimebase:(int)fp8;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (BOOL)setup:(QCOpenGLContext *)context;
- (double)nextExecutionTime:(id)fp8 time:(double)fp12 arguments:(id)fp20;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (Class)portClass;
- (void)setPortClass:(Class)fp8;
@end

@interface QCWatcher (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
