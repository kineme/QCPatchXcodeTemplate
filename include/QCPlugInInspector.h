#import "QCInspector.h"

@class QCPlugInViewController;

@interface QCPlugInInspector : QCInspector
{
	QCPlugInViewController *_viewController;	// 28 = 0x1c
}

+ (NSString*)viewNibName;
- (void)observeValueForKeyPath:(id)fp8 ofObject:(id)fp12 change:(id)fp16 context:(void *)fp20;
- (id)initWithBundle:(NSBundle*)bundle nibName:(NSString*)nibName;
- (void)setupViewForPatch:(id)fp8;
- (id)view;
- (id)viewTitle;
- (void)resetView;

@end
