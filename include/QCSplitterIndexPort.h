
#import "QCIndexPort.h"

@interface QCSplitterIndexPort : QCIndexPort
{
	NSArray *_labels;	// 128 = 0x80
}

- (Class)class;
- (void)setLabels:(id)fp8;
- (void)dealloc;
- (id)attributes;

@end
