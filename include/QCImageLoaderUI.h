
#import "QCInspector.h"

@class QCImageLoaderView;

@interface QCImageLoaderUI : QCInspector
{
	IBOutlet QCImageLoaderView *imageView;	// 28 = 0x1c
}

+ (id)viewNibName;
- (void)didLoadNib;
- (void)_updatePreview;
- (void)setupViewForPatch:(id)fp8;
- (void)_importFile:(id)fp8;
- (void)export:(id)fp8;
- (void)import:(id)fp8;

@end
