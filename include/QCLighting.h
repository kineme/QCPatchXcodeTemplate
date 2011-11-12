@interface QCLighting : QCPatch
{
	QCNumberPort *inputObjectSpecular;	// 156 = 0x9c
	QCNumberPort *inputObjectShininess;	// 160 = 0xa0
	QCColorPort *inputAmbientColor;	// 164 = 0xa4
	BOOL _separateSpecular;	// 168 = 0xa8
	BOOL _twoSideLighting;	// 169 = 0xa9
	float _polygonOffset;	// 172 = 0xac
	NSMutableArray *_lightPorts;	// 176 = 0xb0
	NSMutableArray *_shadowBuffers;	// 180 = 0xb4
}

+ (BOOL)isSafe;
+ (NSUInteger)stateVersionWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
+ (id)serializedStateKeysWithIdentifier:(id)fp8;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
- (id)initWithIdentifier:(id)fp8;
- (void)dealloc;
- (NSUInteger)numberOfLights;
- (void)setNumberOfLights:(NSUInteger)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (id)_lightPortList;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;

@end

@interface QCLighting (QCInspector)
+ (id)inspectorNibNameWithIdentifier:(id)fp8;
@end
