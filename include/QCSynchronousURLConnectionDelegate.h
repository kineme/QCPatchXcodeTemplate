@interface QCSynchronousURLConnectionDelegate : NSObject
{
	NSURLRequest *_request;	// 4 = 0x4
	NSURLResponse *_response;	// 8 = 0x8
	NSMutableData *_resourceData;	// 12 = 0xc
	NSError *_error;	// 16 = 0x10
	BOOL _done;	// 20 = 0x14
	BOOL _allowRedirections;	// 21 = 0x15
}

- (id)initWithRequest:(NSURLRequest*)request allowRedirections:(BOOL)allowRedirections;
- (void)dealloc;
- (void)run:(id)fp8;
- (NSURLResponse*)response;
- (NSError*)error;
- (NSData*)resourceData;
- (id)connection:(id)fp8 willSendRequest:(id)fp12 redirectResponse:(id)fp16;
// NSURLConnectionDelegate methods
- (void)connectionDidFinishLoading:(NSURLConnection*)connection;
- (void)connection:(NSURLConnection*)connection didReceiveResponse:(NSURLResponse*)response;
- (void)connection:(NSURLConnection*)connection didReceiveData:(NSData*)data;
- (void)connection:(NSURLConnection*)connection didFailWithError:(NSError*)error;
@end
