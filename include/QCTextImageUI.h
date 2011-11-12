@interface QCTextImageUI : QCInspector
{
	IBOutlet NSMatrix *layoutMatrix;	// 28 = 0x1c
	IBOutlet NSPopUpButton *fontMenu;	// 32 = 0x20
	IBOutlet NSPopUpButton *alignmentHMenu;	// 36 = 0x24
	IBOutlet NSPopUpButton *alignmentVMenu;	// 40 = 0x28
}

+ (id)viewNibName;
- (void)didLoadNib;
- (void)_updateText:(id)fp8;
- (void)setupViewForPatch:(id)fp8;
- (void)updateLayout:(id)fp8;
- (void)updateFont:(id)fp8;
- (void)updateAttributes:(id)fp8;
@end
