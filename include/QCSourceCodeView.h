#import "QCSourceTextView.h"

@class QCPatch;

@interface QCSourceCodeView : QCSourceTextView
{
	QCPatch *_rootPatch;	// 128 = 0x80
	NSTextField *_statusField;	// 132 = 0x84
	NSImageView *_statusImage;	// 136 = 0x88
	NSPopUpButton *_functionList;	// 140 = 0x8c
	NSTimer *_typingTimer;	// 144 = 0x90
	void *_unused2[5];	// 148 = 0x94
}

+ (id)_keywordsFromString:(id)fp8;
+ (id)_keywordsAndColorsFromXML:(id)fp8;
- (void)_finalize_Initialization;
- (id)initWithFrame:(NSRect)fp8;
- (id)initWithCoder:(NSCoder *)aDecoder;
- (void)dealloc;
- (void)setSourceFromPatch;
- (void)_setFunctionListValue:(id)fp8;
- (void)_setCompileResult:(id)fp8;
- (void)_updateSource:(id)fp8;
- (void)setRootPatch:(id)fp8;
- (id)rootPatch;
- (void)setStatusField:(id)fp8;
- (id)statusField;
- (void)textDidChange:(id)fp8;
- (void)setStatusImage:(id)fp8;
- (id)statusImage;
- (void)setFunctionList:(id)fp8;
- (id)functionList;
- (NSUInteger)lineOfSelectedFunction;

@end
