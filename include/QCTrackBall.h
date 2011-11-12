@interface QCTrackBall : QCPatch
{
	QCBooleanPort *inputTrack;	// 156 = 0x9c
	QCBooleanPort *inputResetSignal;	// 160 = 0xa0
	QCNumberPort *inputOriginX;	// 164 = 0xa4
	QCNumberPort *inputOriginY;	// 168 = 0xa8
	QCNumberPort *inputOriginZ;	// 172 = 0xac
	float _sensibility;	// 176 = 0xb0
	float _inertia;	// 180 = 0xb4
	float _friction;	// 184 = 0xb8
	BOOL _lastResetSignal;	// 188 = 0xbc
	BOOL _tracking;	// 189 = 0xbd
	BOOL _wasTracking;	// 190 = 0xbe
	QCVector3 _start;	// 192 = 0xc0
	QCVector3 _last;	// 204 = 0xcc
	QCVector4 _orientation;	// 216 = 0xd8
	QCVector4 _saveOrientation;	// 232 = 0xe8
	float _rotationSpeed;	// 248 = 0xf8
	QCVector3 _rotationAxis;	// 252 = 0xfc
	double _lastTime;	// 264 = 0x108
	double _moveTime;	// 272 = 0x110
	CGFloat _modelview[16];	// 280 = 0x118
}

+ (BOOL)isSafe;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (BOOL)supportsOptimizedExecutionForIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)updateTimebase:(int)fp8;
- (void)setSensibility:(float)fp8;
- (float)sensibility;
- (void)setInertia:(float)fp8;
- (float)inertia;
- (void)setFriction:(float)fp8;
- (float)friction;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (BOOL)setup:(QCOpenGLContext *)context;
- (void)enable:(QCOpenGLContext*)context;
- (double)nextExecutionTime:(id)fp8 time:(double)fp12 arguments:(id)fp20;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end

@interface QCTrackBall (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
