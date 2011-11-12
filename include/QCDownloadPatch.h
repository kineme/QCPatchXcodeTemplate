@interface QCDownloadPatch : QCRunLoopPatch
{
	pthread_mutex_t _urlMutex;	// 172 = 0xac
	QCURLConnection *_urlConnection;	// 216 = 0xd8
	NSMutableData *_urlData;	// 220 = 0xdc
	NSUInteger _urlDataLength;	// 224 = 0xe0
	float _urlDownloadProgress;	// 228 = 0xe4
	id _urlResource;	// 232 = 0xe8
	void *_unused5[5];	// 236 = 0xec
}

+ (id)allocWithZone:(NSZone *)zone;
- (id)initWithIdentifier:(id)fp8;
- (void)dealloc;
- (void)finalize;
- (void)_cleanUp:(id)fp8;
- (id)connection:(id)fp8 willSendRequest:(id)fp12 redirectResponse:(id)fp16;
- (void)connection:(id)fp8 didReceiveResponse:(id)fp12;
- (void)connection:(id)fp8 didReceiveData:(id)fp12;
- (void)connectionDidFinishLoading:(id)fp8;
- (void)connection:(id)fp8 didFailWithError:(id)fp12;
- (BOOL)downloadResource:(id)fp8;
- (BOOL)isDownloading;
- (float)downloadProgress;
- (void)cancelDownload;
- (id)getDownloadedResource;
- (id)createResourceWithDownloadedData:(id)fp8 sourceURL:(id)fp12;
- (void)cleanup:(QCOpenGLContext *)context;
@end
