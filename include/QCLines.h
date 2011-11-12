@interface QCLines : QCPatch
{
	QCNumberPort *inputStartX;	// 156 = 0x9c
	QCNumberPort *inputStartY;	// 160 = 0xa0
	QCNumberPort *inputStartZ;	// 164 = 0xa4
	QCNumberPort *inputStartRX;	// 168 = 0xa8
	QCNumberPort *inputStartRY;	// 172 = 0xac
	QCNumberPort *inputStartRZ;	// 176 = 0xb0
	QCNumberPort *inputStartLength;	// 180 = 0xb4
	QCColorPort *inputStartColor;	// 184 = 0xb8
	QCNumberPort *inputAttractionAmount;	// 188 = 0xbc
	QCNumberPort *inputAttractionX;	// 192 = 0xc0
	QCNumberPort *inputAttractionY;	// 196 = 0xc4
	QCNumberPort *inputAttractionZ;	// 200 = 0xc8
	QCNumberPort *inputEndX;	// 204 = 0xcc
	QCNumberPort *inputEndY;	// 208 = 0xd0
	QCNumberPort *inputEndZ;	// 212 = 0xd4
	QCNumberPort *inputEndRX;	// 216 = 0xd8
	QCNumberPort *inputEndRY;	// 220 = 0xdc
	QCNumberPort *inputEndRZ;	// 224 = 0xe0
	QCNumberPort *inputEndLength;	// 228 = 0xe4
	QCColorPort *inputEndColor;	// 232 = 0xe8
	QCNumberPort *inputPhase;	// 236 = 0xec
	QCNumberPort *inputNumLines;	// 240 = 0xf0
	QCOpenGLPort_ZBuffer *inputZBuffer;	// 244 = 0xf4
}

+ (BOOL)isSafe;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
