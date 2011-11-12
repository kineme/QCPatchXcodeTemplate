@interface QCPlugInViewController : NSViewController
{
	void *_private;	// 52 = 0x34
}

- (id)initWithPlugIn:(id)plugin viewNibName:(NSString*)nibName;
- (id)plugIn;
- (id)initWithNibName:(NSString*)nibName bundle:(NSBundle*)bundle;
- (NSString*)description;
@end
