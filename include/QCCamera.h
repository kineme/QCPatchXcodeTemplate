@interface QCCamera : QCPatch
{
	QCNumberPort *inputOriginX;	// 156 = 0x9c
	QCNumberPort *inputOriginY;	// 160 = 0xa0
	QCNumberPort *inputOriginZ;	// 164 = 0xa4
	QCNumberPort *inputRotateX;	// 168 = 0xa8
	QCNumberPort *inputRotateY;	// 172 = 0xac
	QCNumberPort *inputRotateZ;	// 176 = 0xb0
	QCNumberPort *inputTranslateX;	// 180 = 0xb4
	QCNumberPort *inputTranslateY;	// 184 = 0xb8
	QCNumberPort *inputTranslateZ;	// 188 = 0xbc
	QCNumberPort *inputScaleX;	// 192 = 0xc0
	QCNumberPort *inputScaleY;	// 196 = 0xc4
	QCNumberPort *inputScaleZ;	// 200 = 0xc8
}

+ (BOOL)isSafe;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(NSString*)identifier;
+ (BOOL)supportsOptimizedExecutionForIdentifier:(NSString*)identifier;
- (id)initWithIdentifier:(NSString*)identifier;
- (BOOL)setup:(QCOpenGLContext *)context;
- (double)nextExecutionTimeForSubpatches:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;

@end
