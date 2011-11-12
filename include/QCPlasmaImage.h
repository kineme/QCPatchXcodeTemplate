@interface QCPlasmaImage : QCPatch
{
	QCBooleanPort *inputSaturate;	// 156 = 0x9c
	QCNumberPort *inputScale;	// 160 = 0xa0
	QCNumberPort *inputX;	// 164 = 0xa4
	QCNumberPort *inputY;	// 168 = 0xa8
	QCNumberPort *inputAmplitude;	// 172 = 0xac
	QCColorPort *inputColorStart;	// 176 = 0xb0
	QCColorPort *inputColorMiddle;	// 180 = 0xb4
	QCColorPort *inputColorEnd;	// 184 = 0xb8
	QCImagePort *outputImage;	// 188 = 0xbc
	NSUInteger _width;	// 192 = 0xc0
	NSUInteger _height;	// 196 = 0xc4
	BOOL _colorCorrection;	// 200 = 0xc8
	unsigned int _clut[256];	// 204 = 0xcc
	char *_bufferAddress;	// 1228 = 0x4cc
	NSUInteger _bufferRowBytes;	// 1232 = 0x4d0
	GLuint _target;	// 1236 = 0x4d4
	NSUInteger _mipmapLevels;	// 1240 = 0x4d8
}

+ (BOOL)isSafe;
+ (int)timeModeWithIdentifier:(id)fp8;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
+ (NSUInteger)stateVersionWithIdentifier:(id)fp8;
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

@interface QCPlasmaImage (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
