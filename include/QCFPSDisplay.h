@interface QCFPSDisplay : QCPatch
{
	QCIndexPort *inputMode;	// 156 = 0x9c
	NSUInteger _frameCount;	// 160 = 0xa0
	float _fps;	// 164 = 0xa4
	float _fpsMin;	// 168 = 0xa8
	double _lastTime;	// 172 = 0xac
	double _fpsTime;	// 180 = 0xb4
}

+ (BOOL)isSafe;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;
- (void)enable:(QCOpenGLContext*)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
