@interface QCRangeValue : QCPatch
{
	QCNumberPort *inputValue;	// 156 = 0x9c
	QCNumberPort *inputMin;	// 160 = 0xa0
	QCNumberPort *inputMax;	// 164 = 0xa4
	QCNumberPort *outputClip;	// 168 = 0xa8
	QCNumberPort *outputRoll;	// 172 = 0xac
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
