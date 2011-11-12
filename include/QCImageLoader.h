@interface QCImageLoader : QCPatch
{
	BOOL _allImages;	// 156 = 0x9c
	BOOL _fillBackground;	// 157 = 0x9d
	QCPort *_outputPort;	// 160 = 0xa0
	NSData *_imageData;	// 164 = 0xa4
	BOOL _colorCorrection;	// 168 = 0xa8
	GLuint _target;	// 172 = 0xac
	NSUInteger _mipmapLevels;	// 176 = 0xb0
}

+ (BOOL)isSafe;
+ (NSUInteger)stateVersionWithIdentifier:(id)fp8;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
+ (id)serializedStateKeysWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)dealloc;
- (void)_configureImage:(id)fp8;
- (BOOL)_updateImage;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (id)imageData;
- (void)setImageData:(id)fp8;
- (void)setColorCorrection:(BOOL)fp8;
- (void)setAllImages:(BOOL)fp8;
- (void)setFillBackground:(BOOL)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;

@end

@interface QCImageLoader (File)
+ (BOOL)canInstantiateWithFile:(NSString*)filePath;
+ (id)instantiateWithFile:(NSString*)filePath;
@end

@interface QCImageLoader (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
