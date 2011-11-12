@interface QCTextImage : QCPatch
{
	QCStringPort *inputString;	// 156 = 0x9c
	QCStringPort *inputFontName;	// 160 = 0xa0
	QCNumberPort *inputGlyphSize;	// 164 = 0xa4
	QCNumberPort *inputLeading;	// 168 = 0xa8
	QCNumberPort *inputKerning;	// 172 = 0xac
	QCNumberPort *inputWidth;	// 176 = 0xb0
	QCNumberPort *inputHeight;	// 180 = 0xb4
	QCImagePort *outputImage;	// 184 = 0xb8
	QCNumberPort *outputWidth;	// 188 = 0xbc
	QCNumberPort *outputHeight;	// 192 = 0xc0
	QCIndexPort *outputLineCount;	// 196 = 0xc4
	QCIndexPort *outputGlyphCount;	// 200 = 0xc8
	BOOL _pixelUnits;	// 204 = 0xcc
	QCTextRenderer *_renderer;	// 208 = 0xd0
	GLuint _target;	// 212 = 0xd4
	NSUInteger _mipmapLevels;	// 216 = 0xd8
}

+ (BOOL)isSafe;
+ (NSUInteger)stateVersionWithIdentifier:(id)fp8;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
+ (id)serializedStateKeysWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)dealloc;
- (BOOL)setup:(QCOpenGLContext *)context;
- (void)receiveMessage:(id)fp8 name:(id)fp12 attributes:(id)fp16;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (void)setFontName:(id)fp8;
- (void)setUsePixels:(BOOL)fp8;
- (BOOL)usePixels;
- (void)setHorizontalAlignment:(int)fp8;
- (int)horizontalAlignment;
- (void)setVerticalAlignment:(int)fp8;
- (int)verticalAlignment;
@end

@interface QCTextImage (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
