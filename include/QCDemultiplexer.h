@interface QCDemultiplexer : QCPatch
{
	QCIndexPort *inputIndex;	// 156 = 0x9c
	NSMutableArray *_outPorts;	// 160 = 0xa0
	QCPort *_inPort;	// 164 = 0xa4
	QCPort *_resetPort;	// 168 = 0xa8
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
+ (id)serializedStateKeysWithIdentifier:(id)fp8;
+ (BOOL)isSafe;
- (id)initWithIdentifier:(id)fp8;
- (NSUInteger)outputCount;
- (void)setOutputCount:(NSUInteger)fp8;
- (Class)portClass;
- (void)setPortClass:(Class)fp8;
- (void)setResetOutputs:(BOOL)fp8;
- (BOOL)resetOutputs;
- (void)dealloc;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;

@end

@interface QCDemultiplexer (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
