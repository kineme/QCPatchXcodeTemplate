@interface QCImageDownloader : QCDownloadPatch
{
	QCStringPort *inputURL;	// 256 = 0x100
	QCImagePort *outputImage;	// 260 = 0x104
	QCNumberPort *outputProgress;	// 264 = 0x108
	QCBooleanPort *outputSignal;	// 268 = 0x10c
	BOOL _synchronousMode;	// 272 = 0x110
	NSUInteger _maxCacheSize;	// 276 = 0x114
	BOOL _colorCorrection;	// 280 = 0x118
	QCBooleanPort *_signalPort;	// 284 = 0x11c
	BOOL _lastSignal;	// 288 = 0x120
	QCCache *_cache;	// 292 = 0x124
	GLuint _target;	// 296 = 0x128
	NSUInteger _mipmapLevels;	// 300 = 0x12c
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (NSUInteger)stateVersionWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
+ (id)serializedStateKeysWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (NSUInteger)maximumCacheSize;
- (void)setMaximumCacheSize:(NSUInteger)fp8;
- (BOOL)synchronousMode;
- (void)setSynchronousMode:(BOOL)fp8;
- (void)setColorCorrection:(BOOL)fp8;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (BOOL)setup:(QCOpenGLContext *)context;
- (id)createResourceWithDownloadedData:(id)fp8 sourceURL:(id)fp12;
- (void)_addImageToCache:(id)fp8;
- (double)nextExecutionTime:(id)fp8 time:(double)fp12 arguments:(id)fp20;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (void)cleanup:(QCOpenGLContext *)context;
@end

@interface QCImageDownloader (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
