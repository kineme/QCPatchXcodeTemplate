

@interface QCImageConversionSequence : NSObject
{
	NSArray *_sequence;	// 4 = 0x4
}

- (double)_computeStepsInSequence:(id)fp8 withConverters:(id)fp12 softwareOnly:(BOOL)fp16 accelerated:(BOOL)fp20 sourceTarget:(GLuint)fp24 sourceFormat:(id)fp28 sourceColorSpace:(CGColorSpaceRef)fp32 destinationTarget:(GLuint)fp36 destinationFormat:(id)fp40 destinationColorSpace:(CGColorSpaceRef)fp44 transformation:(int)fp48 bestScore:(double)fp52 baseCost:(float)fp60 inLoop:(BOOL)fp64;
- (NSString*)description;
- (id)initWithConverters:(id)fp8 softwareOnly:(BOOL)fp12 sourceTarget:(GLuint)fp16 sourceFormat:(id)fp20 sourceColorSpace:(CGColorSpaceRef)fp24 destinationTarget:(GLuint)fp28 destinationFormat:(id)fp32 destinationColorSpace:(CGColorSpaceRef)fp36 transformationType:(int)fp40;
- (void)dealloc;
- (id)applyWithManager:(id)fp8 buffer:(id)fp12 transformation:(id)fp16 bounds:(NSRect)fp20 options:(id)fp36;
@end
