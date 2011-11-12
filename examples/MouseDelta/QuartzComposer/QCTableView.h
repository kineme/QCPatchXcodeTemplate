@interface QCTableView : NSTableView
{
    BOOL _cancelEditing;
}

- (void)cancelOperation:(id)fp8;
- (void)textDidEndEditing:(id)fp8;

@end

