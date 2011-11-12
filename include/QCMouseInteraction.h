@interface QCMouseInteraction : QCPatch <QCInteractionPatch>
{
	QCInteractionPort *outputInteraction;	// 156 = 0x9c
	QCBooleanPort *outputMouseDown;	// 160 = 0xa0
	QCNumberPort *_outputXLocal;	// 164 = 0xa4
	QCNumberPort *_outputYLocal;	// 168 = 0xa8
	QCNumberPort *_inputInitialXDrag;	// 172 = 0xac
	QCNumberPort *_inputInitialYDrag;	// 176 = 0xb0
	QCNumberPort *_inputInitialRotateValue;	// 180 = 0xb4
	QCNumberPort *_inputInitialMagnifyValue;	// 184 = 0xb8
	QCNumberPort *_outputXDrag;	// 188 = 0xbc
	QCNumberPort *_outputYDrag;	// 192 = 0xc0
	QCBooleanPort *_outputRotate;	// 196 = 0xc4
	QCNumberPort *_outputRotateValue;	// 200 = 0xc8
	QCBooleanPort *_outputMagnify;	// 204 = 0xcc
	QCNumberPort *_outputMagnifyValue;	// 208 = 0xd0
	QCNumberPort *_outputSwipeX;	// 212 = 0xd4
	QCNumberPort *_outputSwipeY;	// 216 = 0xd8
	QCArray *_input;	// 220 = 0xdc
	BOOL _needRedraw;	// 224 = 0xe0
	BOOL _multitouch;	// 225 = 0xe1
	BOOL _useFeedback;	// 226 = 0xe2
	CFArrayRef _interactionManagers;	// 228 = 0xe4
	NSEvent *_lastEvent;	// 232 = 0xe8
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (int)timeModeWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)setState:(NSDictionary*)state;
- (NSDictionary*)state;
- (id)nodeActorForView:(id)fp8;
- (void)finalize;
- (void)dealloc;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)multitouch;
- (void)setMultitouch:(BOOL)fp8;
- (void)setUseFeedback:(BOOL)fp8;
- (void)setRenderingPatch:(id)fp8 iteration:(NSUInteger)fp12;
- (double)nextExecutionTime:(id)fp8 time:(double)fp12 arguments:(id)fp20;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end

@interface QCMouseInteraction (QCInspector)
+ (id)inspectorNibNameWithIdentifier:(id)fp8;
@end
