@class QCPatch;

/* when subclassing QCInspector, be sure to connect your XIB view to the NSView *view outlet.
 * when setupViewForPatch: is called, be sure to call [super setupViewForPatch:patch] as well.
 * when resetView is called, be sure to call [super resetView] as well.
 */

@interface QCInspector : NSObject
{
	IBOutlet NSView *view;	// 4 = 0x4
	QCPatch *_patch;	// 8 = 0x8
	NSSize _minSize;	// 12 = 0xc
	void *_unused2[2];	// 20 = 0x14
}

+ (BOOL)accessInstanceVariablesDirectly;

// Determines the XIB name to load for the view.
+ (id)viewNibName;

- (id)initWithBundle:(NSBundle*)bundle nibName:(NSString*)nibName;

- (void)didLoadNib;

- (QCPatch *)patch;

// called when user selects a patch -- assumes to state of thePatch
- (void)setupViewForPatch:(QCPatch*)thePatch;

// called when user selects a different patch (or none at all) -- do cleanup
- (void)resetView;

- (id)view;

// called to get the title of the view (@"Settings" is the default unless no patch is selected, then it's "Not Applicable")
- (id)viewTitle;
@end
