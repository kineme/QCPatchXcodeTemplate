@interface QCKeyboard : QCPatch
{
	NSUInteger _keyCount;	// 156 = 0x9c
	unsigned short _keyList[64];	// 160 = 0xa0
	QCBooleanPort *_keyPortList[64];	// 288 = 0x120
}

+ (id)stringWithKey:(unsigned short)fp8;
+ (BOOL)isSafe;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (int)timeModeWithIdentifier:(id)fp8;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
+ (id)serializedStateKeysWithIdentifier:(id)fp8;
- (NSUInteger)keyCount;
- (id)observedKeys;
- (void)setObservedKeys:(id)fp8;
- (BOOL)_addKey:(unsigned short)fp8;
- (void)_removeKey:(unsigned short)fp8;
- (id)initWithIdentifier:(id)fp8;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (BOOL)setup:(QCOpenGLContext *)context;
- (double)nextExecutionTime:(id)fp8 time:(double)fp12 arguments:(id)fp20;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end

@interface QCKeyboard (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
