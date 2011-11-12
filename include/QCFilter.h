@class QCImageKernel;

@interface QCFilter : CIFilter
{
	
	JSContextRef _jsContext;	// 36 = 0x24
	QCImageKernel *_patch;	// 40 = 0x28
}

- (void)dealloc;
- (void)finalize;
- (id)initWithQCImageKernelPatch:(id)fp8;
- (CGRect)QCImageKernelJavaScriptROIHandler:(int)fp8 destRect:(CGRect)fp12 userInfo:(id)fp28;
- (void)setROISelectorForKernel:(id)fp8 jsROIFunction:(JSValueRef)fp12;
- (void)setROIInfoForKernel:(id)fp8 jsROIInfo:(JSValueRef)fp12;

@end
