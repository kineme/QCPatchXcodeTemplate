@interface QCDateFormatter : QCPatch
{
	QCNumberPort *inputTime;	// 156 = 0x9c
	QCStringPort *outputString;	// 160 = 0xa0
	NSString *_zoneName;	// 164 = 0xa4
	NSInteger _dateStyle;	// 168 = 0xa8
	NSInteger _timeStyle;	// 172 = 0xac
	NSString *_format;	// 176 = 0xb0
	double _lastTime;	// 180 = 0xb4
	double _resolution;	// 188 = 0xbc
	CFDateFormatterRef _formatter;	// 196 = 0xc4
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (id)timeZoneNames;
- (id)initWithIdentifier:(id)fp8;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (void)cleanup:(QCOpenGLContext *)context;
- (void)setTimeZoneName:(id)fp8;
- (id)timeZoneName;
- (void)setDateStyle:(NSInteger)fp8;
- (NSInteger)dateStyle;
- (void)setTimeStyle:(NSInteger)fp8;
- (NSInteger)timeStyle;
- (void)setFormatString:(id)fp8;
- (id)formatString;
@end

@interface QCDateFormatter (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
