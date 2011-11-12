@interface QCNoise : QCPatch
{
	NSMutableArray *_inPorts;	// 156 = 0x9c
	QCNumberPort *outputValue;	// 160 = 0xa0
	char *_perm;	// 164 = 0xa4
	double *_grad;	// 168 = 0xa8
	int _seed;	// 172 = 0xac
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;
- (void)_finalize_Noise;
- (void)dealloc;
- (void)finalize;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (NSUInteger)dimensions;
- (void)setDimensions:(NSUInteger)fp8;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (double)_noise1d:(double)fp8;
- (double)_noise2d:(double)fp8 y:(double)fp16;
- (double)_noise3d:(double)fp8 y:(double)fp16 z:(double)fp24;
@end

@interface QCNoise (QCInspector)
+ (id)inspectorNibNameWithIdentifier:(id)fp8;
@end
