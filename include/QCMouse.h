@interface QCMouse : QCPatch
{
	QCNumberPort *outputX;	// 156 = 0x9c
	QCNumberPort *outputY;	// 160 = 0xa0
	QCBooleanPort *outputButton1;	// 164 = 0xa4
	QCBooleanPort *outputButton2;	// 168 = 0xa8
	QCBooleanPort *outputButton3;	// 172 = 0xac
	QCNumberPort *outputScrollX;	// 176 = 0xb0
	QCNumberPort *outputScrollY;	// 180 = 0xb4
	QCNumberPort *outputScrollZ;	// 184 = 0xb8
	QCNumberPort *_outputRotation;	// 188 = 0xbc
	QCNumberPort *_outputMagnification;	// 192 = 0xc0
	QCNumberPort *_outputSwipeX;	// 196 = 0xc4
	QCNumberPort *_outputSwipeY;	// 200 = 0xc8
	QCBooleanPort *_inputResetScroll;	// 204 = 0xcc
	QCNumberPort *_inputScrollFactor;	// 208 = 0xd0
	QCBooleanPort *_inputResetRotation;	// 212 = 0xd4
	QCBooleanPort *_inputResetMagnification;	// 216 = 0xd8
	NSRect _bounds;	// 220 = 0xdc
	BOOL _integrate;	// 236 = 0xec
	BOOL _multitouch;	// 237 = 0xed
	BOOL _integrateRotation;	// 238 = 0xee
	BOOL _integrateMagnification;	// 239 = 0xef
}

+ (NSUInteger)stateVersionWithIdentifier:(id)fp8;
+ (BOOL)isSafe;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (int)timeModeWithIdentifier:(id)fp8;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;
- (void)receiveMessage:(id)fp8 name:(id)fp12 attributes:(id)fp16;
- (double)nextExecutionTime:(id)fp8 time:(double)fp12 arguments:(id)fp20;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (void)setIntegrate:(BOOL)fp8;
- (BOOL)integrate;
- (void)setIntegrateRotation:(BOOL)fp8;
- (void)setIntegrateMagnification:(BOOL)fp8;
- (void)setMultitouch:(BOOL)fp8;
@end

@interface QCMouse (QCInspector)
+ (id)inspectorNibNameWithIdentifier:(id)fp8;
@end
