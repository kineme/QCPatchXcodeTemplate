#import "QCMemObject.h"

@class QCImageBuffer, QCPixelFormat;

@interface QCImage2DMemObject : QCMemObject
{
	QCImageBuffer *_backing;	// 84 = 0x54
	QCPixelFormat *_format;	// 88 = 0x58
	NSUInteger _width;	// 92 = 0x5c
	NSUInteger _height;	// 96 = 0x60
	void *_backingCallback;	// 100 = 0x64
	void *_backingInfo;	// 104 = 0x68
	void *_hostPtr;	// 108 = 0x6c
	void *_unused3[4];	// 112 = 0x70
}
@property (readonly,assign) QCImageBuffer *imageBuffer;
@property (readonly,assign) QCImageBuffer *backing;
@property (readonly,assign) QCPixelFormat *pixelFormat;
@property (readonly,assign) NSUInteger pixelsHigh;
@property (readonly,assign) NSUInteger pixelsWide;

- (id)initWithContext:(id)fp8 format:(id)fp12 hostPtr:(void *)fp16 releaseCallback:(void *)fp20 releaseInfo:(void *)fp24 pixelsWide:(NSUInteger)fp28 pixelsHigh:(NSUInteger)fp32 options:(id)fp36;
- (id)initWithContext:(id)fp8 format:(id)fp12 pixelsWide:(NSUInteger)fp16 pixelsHigh:(NSUInteger)fp20 options:(id)fp24;
- (id)initWithContext:(id)fp8 imageBuffer:(id)fp12 options:(id)fp16;
- (BOOL)beginUpdateStream;
- (BOOL)_readbackImage;
- (void)endUpdateStream;
- (QCImageBuffer*)imageBuffer;
- (BOOL)attached;
- (NSUInteger)byteSize;
- (void)finalize_QCImage2DMemObject;
- (void)finalize;
- (void)dealloc;
- (NSString*)description;
- (QCImageBuffer*)backing;
- (QCPixelFormat*)pixelFormat;
- (NSUInteger)pixelsHigh;
- (NSUInteger)pixelsWide;

@end
