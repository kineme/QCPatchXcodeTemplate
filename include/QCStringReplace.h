@interface QCStringReplace : QCPatch
{
	QCStringPort *inputSourceString;	// 156 = 0x9c
	QCStringPort *inputSearchString;	// 160 = 0xa0
	QCStringPort *inputReplaceString;	// 164 = 0xa4
	QCBooleanPort *inputCaseSensitive;	// 168 = 0xa8
	QCStringPort *outputString;	// 172 = 0xac
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
