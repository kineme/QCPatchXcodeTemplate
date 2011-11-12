@interface QCOpenGLInfo : QCPatch
{
	QCStringPort *outputVendor;	// 156 = 0x9c
	QCStringPort *outputRenderer;	// 160 = 0xa0
	QCNumberPort *outputVersion;	// 164 = 0xa4
	QCIndexPort *outputVRAM;	// 168 = 0xa8
	QCIndexPort *outputTextureUnits;	// 172 = 0xac
	QCIndexPort *outputMaxTextureSize;	// 176 = 0xb0
	QCIndexPort *outputMaxRenderSize;	// 180 = 0xb4
	QCIndexPort *outputBitsPerPixel;	// 184 = 0xb8
	QCBooleanPort *outputFloatComponents;	// 188 = 0xbc
	QCBooleanPort *outputCIAccelerated;	// 192 = 0xc0
	NSMutableArray *_extensionPorts;	// 196 = 0xc4
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
+ (id)serializedStateKeysWithIdentifier:(id)fp8;
- (id)extensions;
- (void)setExtensions:(id)fp8;
- (BOOL)_addExtension:(id)fp8;
- (void)_removeExtension:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (void)_updateInfo:(id)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;
- (void)receiveMessage:(id)fp8 name:(id)fp12 attributes:(id)fp16;
- (void)dealloc;
@end

@interface QCOpenGLInfo (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
