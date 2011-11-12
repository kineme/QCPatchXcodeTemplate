@interface QCContact : NSObject
{
	QCContactInfo _info;	// 4 = 0x4
	NSUInteger _index;	// 24 = 0x18
}
@property (readonly,assign) CGFloat x;
@property (readonly,assign) CGFloat y;
@property (readonly,assign) int state;
@property (readonly,assign) NSUInteger index;


+ (id)contactWithInfo:(QCContactInfo)fp8 index:(NSUInteger)fp28;
- (id)initWithInfo:(QCContactInfo)fp8 index:(NSUInteger)fp28;
- (CGFloat)x;
- (CGFloat)y;
- (int)state;
- (NSString*)description;
- (NSUInteger)index;

@end
