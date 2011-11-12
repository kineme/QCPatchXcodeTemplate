@interface QCStringComponents : QCPatch
{
	QCStringPort *inputString;	// 156 = 0x9c
	QCStringPort *inputSeparator;	// 160 = 0xa0
	QCStructurePort *outputComponents;	// 164 = 0xa4
	BOOL _keylessStructures;	// 168 = 0xa8
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
