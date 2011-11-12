@interface QCStructureSort : QCPatch
{
	QCStructurePort *inputStructure;	// 156 = 0x9c
	QCStringPort *inputSortingKey;	// 160 = 0xa0
	QCStructurePort *outputStructure;	// 164 = 0xa4
	NSMutableArray *_cachedSortingKey;	// 168 = 0xa8
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (void)cleanup:(QCOpenGLContext *)context;
@end
