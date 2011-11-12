


@class GFNode;

@interface GFNodeInspectorViewsController : NSObject
{
	NSView *_informationView;	// 4 = 0x4
	NSTextField *_titleField;	// 8 = 0x8
	NSTextField *_noteField;	// 12 = 0xc
	NSTextField *_nameField;	// 16 = 0x10
	NSTextField *_descriptionField;	// 20 = 0x14
	GFNode *_targetNode;	// 24 = 0x18
}

+ (id)sharedController;
- (id)init;
- (void)resetTitle:(id)fp8;
- (void)titleEdited:(id)fp8;
- (void)noteEdited:(id)fp8;
- (void)__stateUpdated:(id)fp8;
- (id)setupViewsForNode:(id)fp8;
- (void)resetInspectorViews;

@end
