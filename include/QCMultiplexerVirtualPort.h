#import "QCVirtualPort.h"

@interface QCMultiplexerVirtualPort : QCVirtualPort
- (BOOL)_execute:(double)time arguments:(NSDictionary*)arguments;
@end
