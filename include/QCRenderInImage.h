@interface QCRenderInImage : QCPatch
{
	QCBooleanPort *inputRender;	// 156 = 0x9c
	QCIndexPort *inputTarget;	// 160 = 0xa0
	QCBooleanPort *inputMipmaps;	// 164 = 0xa4
	QCIndexPort *inputWidth;	// 168 = 0xa8
	QCIndexPort *inputHeight;	// 172 = 0xac
	QCImagePort *outputImage;	// 176 = 0xb0
	QCPixelFormat *_format;	// 180 = 0xb4
	BOOL _noDepthBuffer;	// 184 = 0xb8
	BOOL _noFeedback;	// 185 = 0xb9
	BOOL _colorCorrection;	// 186 = 0xba
	QCPixelFormat *_renderFormat;	// 188 = 0xbc
	QCImageTextureBuffer *_renderedImage;	// 192 = 0xc0
	QCImageTextureBuffer *_currentImage;	// 196 = 0xc4
	QCCGLContext *_activeContext;	// 200 = 0xc8
}

+ (BOOL)isSafe;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (NSUInteger)stateVersionWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
+ (BOOL)usesLocalContextForIdentifier:(id)fp8;
+ (BOOL)supportsOptimizedExecutionForIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)setPixelFormat:(id)fp8;
- (id)pixelFormat;
- (void)setNoDepthBuffer:(BOOL)fp8;
- (BOOL)noDepthBuffer;
- (void)setNoFeedback:(BOOL)fp8;
- (BOOL)noFeedback;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (void)_updateRenderFormat:(id)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;
- (void)receiveMessage:(id)fp8 name:(id)fp12 attributes:(id)fp16;
- (BOOL)_executeSubpatches:(double)fp8 arguments:(id)fp16;
- (BOOL)executeSubpatches:(double)fp8 arguments:(id)fp16;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (void)cleanup:(QCOpenGLContext *)context;
@end

@interface QCRenderInImage (QCProFX)
- (QCMD5Sum)md5WithTime:(double)fp8 arguments:(id)fp16;
@end

@interface QCRenderInImage (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
