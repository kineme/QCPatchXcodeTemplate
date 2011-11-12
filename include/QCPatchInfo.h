@interface QCPatchInfo : QCPatch
{
	QCStringPort *inputPath;	// 156 = 0x9c
	QCStructurePort *outputMetadata;	// 160 = 0xa0
	QCStructurePort *outputInputList;	// 164 = 0xa4
	QCStructurePort *outputOutputList;	// 168 = 0xa8
	NSString *_compositionLocation;	// 172 = 0xac
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (void)_setComposition:(id)fp8 context:(id)fp12;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (void)cleanup:(QCOpenGLContext *)context;
@end
