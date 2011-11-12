@interface QCReplicator : QCPatch
{
	QCIndexPort *inputCopies;	// 156 = 0x9c
	QCInterpolationPort *inputInterpolation;	// 160 = 0xa0
	QCNumberPort *inputScale;	// 164 = 0xa4
	QCNumberPort *inputOrientationX;	// 168 = 0xa8
	QCNumberPort *inputOrientationY;	// 172 = 0xac
	QCNumberPort *inputOrientationZ;	// 176 = 0xb0
	QCNumberPort *inputOriginX;	// 180 = 0xb4
	QCNumberPort *inputOriginY;	// 184 = 0xb8
	QCNumberPort *inputOriginZ;	// 188 = 0xbc
	QCNumberPort *inputRotationX;	// 192 = 0xc0
	QCNumberPort *inputRotationY;	// 196 = 0xc4
	QCNumberPort *inputRotationZ;	// 200 = 0xc8
	QCNumberPort *inputTranslationX;	// 204 = 0xcc
	QCNumberPort *inputTranslationY;	// 208 = 0xd0
	QCNumberPort *inputTranslationZ;	// 212 = 0xd4
}

+ (BOOL)isSafe;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (BOOL)supportsOptimizedExecutionForIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
