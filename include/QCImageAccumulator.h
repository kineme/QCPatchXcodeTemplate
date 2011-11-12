@interface QCImageAccumulator : QCPatch
{
	QCIndexPort *inputWidth;	// 156 = 0x9c
	QCIndexPort *inputHeight;	// 160 = 0xa0
	QCBooleanPort *inputAccumulate;	// 164 = 0xa4
	QCImagePort *inputImage;	// 168 = 0xa8
	QCNumberPort *inputDirtyOriginX;	// 172 = 0xac
	QCNumberPort *inputDirtyOriginY;	// 176 = 0xb0
	QCNumberPort *inputDirtyWidth;	// 180 = 0xb4
	QCNumberPort *inputDirtyHeight;	// 184 = 0xb8
	QCImagePort *outputImage;	// 188 = 0xbc
	CIFormat _accumulatorFormat;	// 192 = 0xc0
	BOOL _continuous;	// 196 = 0xc4
	CIImageAccumulator *_accumulator;	// 200 = 0xc8
	GLuint _target;	// 204 = 0xcc
	NSUInteger _mipmapLevels;	// 208 = 0xd0
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (NSUInteger)stateVersionWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)updateTimebase:(int)fp8;
- (BOOL)_updateAccumulator:(id)fp8;
- (CIFormat)accumulatorFormat;
- (void)setAccumulatorFormat:(CIFormat)fp8;
- (BOOL)isContinuous;
- (void)setIsContinuous:(BOOL)fp8;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (BOOL)setup:(QCOpenGLContext *)context;
- (void)receiveMessage:(id)fp8 name:(id)fp12 attributes:(id)fp16;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (void)cleanup:(QCOpenGLContext *)context;
@end

@interface QCImageAccumulator (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
