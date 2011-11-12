@class QCPatch;

extern NSString * const QCLogViewNewMessageNotification;

@interface QCLogView : NSView
{
	NSView *_insideView;	// 80 = 0x50
	NSScrollView *_scrollView;	// 84 = 0x54
	NSTextView *_textView;	// 88 = 0x58
	QCPatch *_rootPatch;	// 92 = 0x5c
	void *_unused[4];	// 96 = 0x60
}

+ (void)initialize;
- (Class)valueClassForBinding:(id)fp8;
- (void)_appendLog:(id)fp8;
- (void)_message:(id)fp8;
- (void)_finishInitialization;
- (id)initWithFrame:(NSRect)frameRect;
- (void)dealloc;
- (void)encodeWithCoder:(NSCoder *)aCoder;
- (id)initWithCoder:(NSCoder *)aDecoder;
- (void)setRootPatch:(QCPatch*)patch;
- (id)rootPatch;
- (void)clear:(id)fp8;
@end
