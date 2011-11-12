

@interface QCNumericalFormatter : NSFormatter
{
	BOOL _allowsFloats;	// 4 = 0x4
	double _min;	// 8 = 0x8
	double _max;	// 16 = 0x10
}

- (id)init;
- (void)setAllowsFloats:(BOOL)fp8;
- (BOOL)allowsFloats;
- (double)minimum;
- (void)setMinimum:(double)fp8;
- (double)maximum;
- (void)setMaximum:(double)fp8;
- (BOOL)getObjectValue:(id *)fp8 forString:(id)fp12 errorDescription:(id *)fp16;
- (id)stringForObjectValue:(id)fp8;

@end
