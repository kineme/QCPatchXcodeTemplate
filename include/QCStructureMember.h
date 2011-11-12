@interface QCStructureMember : QCPatch
{
	QCStructurePort *inputStructure;	// 156 = 0x9c
	QCVirtualPort *outputMember;	// 160 = 0xa0
	QCPort *_inPort;	// 164 = 0xa4
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (void)_forwardRenderingFlag;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
