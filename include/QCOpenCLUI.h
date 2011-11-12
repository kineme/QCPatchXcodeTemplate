
#import "QCInspector.h"

@class QCProgrammablePatchView;

@interface QCOpenCLUI : QCInspector
{
	IBOutlet QCProgrammablePatchView *sourceView;	// 28 = 0x1c
	IBOutlet NSTabView *tabView;	// 32 = 0x20
	IBOutlet NSPopUpButton *kernelNames;	// 36 = 0x24
	IBOutlet NSPopUpButton *functionNames;	// 40 = 0x28
	BOOL _private;	// 44 = 0x2c
	NSRect _savedFrame;	// 48 = 0x30
	NSSize _savedMaxSize;	// 64 = 0x40
	NSSize _savedMinSize;	// 72 = 0x48
}

+ (id)viewNibName;
- (void)didLoadNib;
- (void)_updateUI;
- (BOOL)settingsVisible;
- (void)setSettingsVisible:(BOOL)fp8;
- (void)moveToLine:(id)fp8;
- (void)sampleKernel:(id)fp8;
- (void)setupViewForPatch:(id)fp8;
- (void)resetView;

@end
