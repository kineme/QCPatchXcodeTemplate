@interface QCNumberFormatter : QCPatch
{
	QCNumberPort *inputNumber;	// 156 = 0x9c
	QCStringPort *outputString;	// 160 = 0xa0
	NSInteger _style;	// 164 = 0xa4
	NSString *_format;	// 168 = 0xa8
	CFNumberFormatterRef _formatter;	// 172 = 0xac
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (void)cleanup:(QCOpenGLContext *)context;
- (void)setStyle:(NSInteger)fp8;
- (NSInteger)style;
- (void)setFormatString:(id)fp8;
- (id)formatString;
@end

@interface QCNumberFormatter (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
