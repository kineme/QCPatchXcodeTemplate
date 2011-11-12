#import "GFTooltipView.h"

@class QCPort;

@interface QCPortTooltipView : GFTooltipView
{
	QCPort *_port;	// 84 = 0x54
	NSUInteger _timestamp;	// 88 = 0x58
	NSView *_extensionView;	// 92 = 0x5c
	NSTimer *_timer;	// 96 = 0x60
	NSSize _baseSize;	// 100 = 0x64
	NSString *_valueString;	// 108 = 0x6c
}

+ (id)valueTextAttributes;
- (id)initWithFrame:(NSRect)frameRect;
- (void)_timer:(id)fp8;
- (void)_startRendering:(id)fp8;
- (void)_stopRendering:(id)fp8;
- (id)initWithPort:(QCPort*)port;
- (void)finalize;
- (void)dealloc;
- (void)setString:(NSString*)string;
- (void)drawRect:(NSRect)rect;
- (void)refresh:(BOOL)fp8;
@end
