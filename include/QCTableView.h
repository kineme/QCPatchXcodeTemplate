@interface QCTableView : NSTableView
{
	BOOL _cancelEditing;	// 228 = 0xe4
}

- (void)cancelOperation:(id)sender;
- (void)textDidEndEditing:(NSNotification*)notification;
@end
