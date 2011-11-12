
#import "QCInspector.h"

@class QCProgrammablePatchView;

@interface QCGLSLShaderUI : QCInspector
{
	IBOutlet QCProgrammablePatchView *vertexView;	// 28 = 0x1c
	IBOutlet QCProgrammablePatchView *fragmentView;	// 32 = 0x20
}

+ (id)viewNibName;
- (void)setupViewForPatch:(id)fp8;
- (void)resetView;

@end
