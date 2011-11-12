@interface QCLine : QCRenderingPatch
{
	QCNumberPort *inputStartX;	// 176 = 0xb0
	QCNumberPort *inputStartY;	// 180 = 0xb4
	QCNumberPort *inputStartZ;	// 184 = 0xb8
	QCColorPort *inputStartColor;	// 188 = 0xbc
	QCNumberPort *inputEndX;	// 192 = 0xc0
	QCNumberPort *inputEndY;	// 196 = 0xc4
	QCNumberPort *inputEndZ;	// 200 = 0xc8
	QCColorPort *inputEndColor;	// 204 = 0xcc
	QCNumberPort *inputLineWidth;	// 208 = 0xd0
	QCOpenGLPort_ZBuffer *inputZBuffer;	// 212 = 0xd4
}

+ (BOOL)isSafe;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (BOOL)allowsScissors:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
