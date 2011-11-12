@interface QCImageFilter : QCPatch
{
	QCImagePort *outputImage;	// 156 = 0x9c
	BOOL _normalizeCoordinates;	// 160 = 0xa0
	NSUInteger _filterVersion;	// 164 = 0xa4
	CIFilter *_ciFilter;	// 168 = 0xa8
	GFList *_paramList;	// 172 = 0xac
	QCBooleanPort *_bypassPort;	// 176 = 0xb0
	QCImagePort *_imagePort;	// 180 = 0xb4
	BOOL _rerun;	// 184 = 0xb8
	GLuint _target;	// 188 = 0xbc
	NSUInteger _mipmapLevels;	// 192 = 0xc0
}

+ (void)initialize;
+ (BOOL)isSafe;
+ (NSUInteger)stateVersionWithIdentifier:(id)fp8;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (id)attributesWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
+ (BOOL)isCIFilterCompatible:(id)fp8;
- (id)_baseKey;
- (id)_inputPortAttributesWithKey:(id)fp8 index:(NSUInteger)fp12 count:(NSUInteger)fp16 type:(id)fp20;
- (id)initWithIdentifier:(id)fp8;
- (void)dealloc;
- (void)setNormalizeCoordinates:(BOOL)fp8;
- (BOOL)hasBypass;
- (void)setHasBypass:(BOOL)fp8;
- (void)receiveMessage:(id)fp8 name:(id)fp12 attributes:(id)fp16;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (void)cleanup:(QCOpenGLContext *)context;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
@end

@interface QCImageFilter (QCInspector)
+ (id)inspectorNibNameWithIdentifier:(id)fp8;
@end
