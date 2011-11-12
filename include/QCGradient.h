@interface QCGradient : QCRenderingPatch
{
	QCIndexPort *inputDirection;	// 176 = 0xb0
	QCOpenGLPort_Blending *inputBlending;	// 180 = 0xb4
	NSUInteger _numPoints;	// 184 = 0xb8
	BOOL _clearDepthBuffer;	// 188 = 0xbc
	NSMutableArray *_colorPorts;	// 192 = 0xc0
	NSMutableArray *_positionPorts;	// 196 = 0xc4
}

+ (BOOL)isSafe;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (NSUInteger)stateVersionWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)dealloc;
- (void)setNumberOfPoints:(NSUInteger)fp8;
- (NSUInteger)numberOfPoints;
- (void)setClearDepthBuffer:(BOOL)fp8;
- (BOOL)clearDepthBuffer;
- (BOOL)allowsScissors:(id)fp8;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;

@end

@interface QCGradient (QCInspector)
+ (id)inspectorNibNameWithIdentifier:(id)fp8;
@end
