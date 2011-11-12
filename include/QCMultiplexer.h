@interface QCMultiplexer : QCPatch
{
	QCIndexPort *inputIndex;	// 156 = 0x9c
	NSMutableArray *_inPorts;	// 160 = 0xa0
	QCPort *_outPort;	// 164 = 0xa4
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
+ (id)serializedStateKeysWithIdentifier:(id)fp8;
- (id)_activePort;
- (NSUInteger)inputCount;
- (void)setInputCount:(NSUInteger)fp8;
- (Class)portClass;
- (void)setPortClass:(Class)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)dealloc;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (void)_forwardRenderingFlag;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end

@interface QCMultiplexer (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
