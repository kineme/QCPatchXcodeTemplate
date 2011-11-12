@interface QCOpenCLConverter : QCPatch
{
	QCStructurePort *_inputStream;	// 156 = 0x9c
	QCImagePort *_inputImage;	// 160 = 0xa0
	QCStructurePort *_inputImage3D;	// 164 = 0xa4
	QCStructurePort *_outputStream;	// 168 = 0xa8
	QCImagePort *_outputImage;	// 172 = 0xac
	QCStructurePort *_outputImage3D;	// 176 = 0xb0
	QCIndexPort *_outputWidth;	// 180 = 0xb4
	QCIndexPort *_outputHeight;	// 184 = 0xb8
	QCIndexPort *_outputDepth;	// 188 = 0xbc
	NSUInteger _copyType;	// 192 = 0xc0
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (BOOL)setup:(QCOpenGLContext *)context;
- (void)setCopyType:(NSUInteger)fp8;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end

@interface QCOpenCLConverter (QCInspector)
+ (id)inspectorNibNameWithIdentifier:(id)fp8;
@end
