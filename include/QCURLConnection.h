@interface QCURLConnection : NSURLConnection
{
	NSURL *_url;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
}

- (id)initWithRequest:(NSURLRequest*)request delegate:(id)delegate startImmediately:(BOOL)startImmediately;
- (NSURL*)url;
- (void)dealloc;

@end
