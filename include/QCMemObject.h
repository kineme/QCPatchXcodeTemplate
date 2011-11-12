#import "QCResource.h"

@class QCCLContext;

@interface QCMemObject : QCResource
{
	NSUInteger _identifier;	// 28 = 0x1c
	cl_mem *_stream;	// 32 = 0x20
	QCCLContext *_context;	// 36 = 0x24
	int _status;	// 40 = 0x28
	cl_device_id *_device;	// 44 = 0x2c
	cl_event *_event;	// 48 = 0x30
	unsigned long long _flags;	// 56 = 0x38
	unsigned int _acquired:1;	// 64 = 0x40
	void *_unused2[4];	// 68 = 0x44
}
@property (readonly,assign) cl_mem *memObject;
@property (readonly,assign) NSUInteger byteSize;
@property (readonly,assign) BOOL attached;
@property (readwrite,assign) cl_event *event;
@property (readonly,assign) NSUInteger identifier;
@property (readonly,assign) QCCLContext *context;

- (id)initWithContext:(QCCLContext*)context stream:(cl_mem *)stream;
- (void)finalize;
- (void)dealloc;
- (BOOL)acquireGLObject;
- (void)releaseGLObject;
- (BOOL)beginUpdateStream;
- (void)endUpdateStream;
- (cl_mem *)memObject;
- (NSUInteger)byteSize;
- (void)setEvent:(cl_event *)fp8;
- (BOOL)attached;
- (NSString*)description;
- (cl_event *)event;
- (NSUInteger)identifier;
- (QCCLContext*)context;

@end
