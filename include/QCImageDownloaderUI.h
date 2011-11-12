
#import "QCInspector.h"

@interface QCImageDownloaderUI : QCInspector
{
	IBOutlet NSTextField *cacheSize;	// 28 = 0x1c
	IBOutlet NSButton *syncButton;	// 32 = 0x20
}

+ (id)viewNibName;
- (void)setupViewForPatch:(id)fp8;
- (void)updateCache:(id)fp8;
- (void)updateSync:(id)fp8;

@end
