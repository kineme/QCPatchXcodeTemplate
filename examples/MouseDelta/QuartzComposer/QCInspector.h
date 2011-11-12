#import <QCPatch.h>

@interface QCInspector : NSObject
{
    NSView *view;
    QCPatch *_patch;
    NSSize _minSize;
    void *_unused2[2];
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)viewNibName;
- (id)initWithBundle:(id)fp8 nibName:(id)fp12;
- (void)didLoadNib;
- (id)patch;
- (void)setupViewForPatch:(id)fp8;
- (void)resetView;
- (id)view;
- (id)viewTitle;

@end

