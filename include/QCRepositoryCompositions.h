@interface QCRepositoryCompositions : QCPatch
{
	QCIndexPort *inputProtocol;	// 156 = 0x9c
	QCStructurePort *inputAttributes;	// 160 = 0xa0
	QCStructurePort *outputCompositions;	// 164 = 0xa4
}

+ (BOOL)isSafe;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (int)timeModeWithIdentifier:(id)fp8;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
