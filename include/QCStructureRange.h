@interface QCStructureRange : QCPatch
{
	QCStructurePort *inputStructure;	// 156 = 0x9c
	QCIndexPort *inputIndex;	// 160 = 0xa0
	QCIndexPort *inputLength;	// 164 = 0xa4
	QCStructurePort *outputStructure;	// 168 = 0xa8
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
