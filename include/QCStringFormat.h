@interface QCStringFormat : QCPatch
{
	NSString *_format;	// 156 = 0x9c
	int _mode;	// 160 = 0xa0
	NSArray *_formatComponents;	// 164 = 0xa4
	QCStringPort *_stringPort;	// 168 = 0xa8
	NSMutableArray *_stringPorts;	// 172 = 0xac
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
- (void)setFormat:(id)fp8;
- (id)format;
- (id)initWithIdentifier:(id)fp8;
- (void)dealloc;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end

@interface QCStringFormat (QCInspector)
+ (id)inspectorNibNameWithIdentifier:(id)fp8;
@end
