@interface QCFlameImage : QCPatch
{
	QCColorPort *inputColorStart;	// 156 = 0x9c
	QCColorPort *inputColorMiddle;	// 160 = 0xa0
	QCColorPort *inputColorEnd;	// 164 = 0xa4
	QCImagePort *outputImage;	// 168 = 0xa8
	NSUInteger _width;	// 172 = 0xac
	NSUInteger _height;	// 176 = 0xb0
	BOOL _colorCorrection;	// 180 = 0xb4
	unsigned int _clut[256];	// 184 = 0xb8
	char *_bufferAddress;	// 1208 = 0x4b8
	NSUInteger _bufferRowBytes;	// 1212 = 0x4bc
	GLuint _target;	// 1216 = 0x4c0
	NSUInteger _mipmapLevels;	// 1220 = 0x4c4
}

+ (BOOL)isSafe;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)setWidth:(NSUInteger)fp8 height:(NSUInteger)fp12;
- (NSUInteger)width;
- (NSUInteger)height;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (void)cleanup:(QCOpenGLContext *)context;
@end

@interface QCFlameImage (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
