


@class QCKeyFrameEditorWindow;

@interface QCKeyFrameEditor : NSObject
{
	NSView *view;	// 4 = 0x4
	NSTextField *tField;	// 8 = 0x8
	NSTextField *vField;	// 12 = 0xc
	QCKeyFrameEditorWindow *_window;	// 16 = 0x10
}

- (void)dealloc;
- (void)awakeFromNib;
- (BOOL)runEditorForTimeLine:(id)fp8 atKeyFrame:(NSInteger)fp12 forTimeLine:(NSInteger)fp16 controlType:(int)fp20 inView:(id)fp24 atPoint:(NSPoint)fp28;
- (void)cancel:(id)fp8;
- (void)done:(id)fp8;

@end
