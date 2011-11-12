@interface QCScreenInfo : QCPatch
{
	QCNumberPort *outputWidth;	// 156 = 0x9c
	QCNumberPort *outputHeight;	// 160 = 0xa0
	QCIndexPort *outputPixelsWide;	// 164 = 0xa4
	QCIndexPort *outputPixelsHigh;	// 168 = 0xa8
	QCNumberPort *outputRatio;	// 172 = 0xac
	QCNumberPort *outputResolution;	// 176 = 0xb0
	BOOL _cleanAperture;	// 180 = 0xb4
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)setUseCleanAperture:(BOOL)fp8;
- (BOOL)useCleanAperture;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (BOOL)setup:(QCOpenGLContext *)context;
- (void)receiveMessage:(id)fp8 name:(id)fp12 attributes:(id)fp16;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end

@interface QCScreenInfo (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
