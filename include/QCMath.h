@interface QCMath : QCPatch
{
	QCNumberPort *inputValue;	// 156 = 0x9c
	QCNumberPort *outputValue;	// 160 = 0xa0
	NSMutableArray *_operationPorts;	// 164 = 0xa4
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
+ (NSUInteger)stateVersionWithIdentifier:(id)fp8;
- (NSUInteger)numberOfOperations;
- (void)setNumberOfOperations:(NSUInteger)fp8;
- (id)nodeActorForView:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)dealloc;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end

@interface QCMath (QCInspector)
+ (id)inspectorNibNameWithIdentifier:(id)fp8;
@end
