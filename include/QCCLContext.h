
#import "QCCache.h"

@interface QCCLContext : NSObject
{
	cl_context *_context;	// 4 = 0x4
	unsigned long long *_deviceType;	// 8 = 0x8
	cl_device_id **_devices;	// 12 = 0xc
	cl_device_id *_bestDevice;	// 16 = 0x10
	NSUInteger _deviceCount;	// 20 = 0x14
	BOOL _isAccelerated;	// 24 = 0x18
	BOOL _isAsynchronous;	// 25 = 0x19
	QCCache *_programCache;	// 28 = 0x1c
	void *_unused[2];	// 32 = 0x20
}
@property (readonly,assign) unsigned long long deviceType;
@property (readonly,assign) NSString *deviceName;
@property (readonly,assign) NSString *deviceVendor;
@property (readonly,assign) NSString *deviceVersion;
@property (readonly,assign) cl_uint deviceMaxComputeUnits;
@property (readonly,assign) cl_uint deviceMaxWorkItemDimensions;
@property (readonly,assign) NSUInteger deviceMaxWorkGroupSize;
@property (readonly,assign) cl_uint deviceMaxReadImageArgs;
@property (readonly,assign) cl_uint deviceMaxWriteImageArgs;
@property (readonly,assign) cl_uint deviceMaxSamplers;
@property (readonly,assign) cl_uint deviceMaxConstantsArgs;
@property (readonly,assign) NSUInteger deviceMaxConstantBufferSize;
@property (readonly,assign) NSUInteger deviceGlobalMemSize;
@property (readonly,assign) NSUInteger deviceLocalMemSize;
@property (readonly,assign) NSUInteger deviceImage2DMaxWidth;
@property (readonly,assign) NSUInteger deviceImage2DMaxHeight;
@property (readonly,assign) CFArrayRef deviceNames;
@property (readwrite,assign) cl_device_id *device;
@property (readonly,assign) cl_command_queue *commandQueue;
@property (readonly,assign) BOOL isAsynchronous;
@property (readonly,assign) BOOL isAccelerated;
@property (readonly,assign) NSUInteger deviceCount;
@property (readonly,assign) cl_device_id **devices;
@property (readonly,assign) cl_context *context;


+ (void)initialize;
- (id)initWithContext:(cl_context *)fp8 options:(id)fp12;
- (NSUInteger)indexOfDevice:(cl_device_id *)fp8;
- (cl_command_queue *)commandQueue;
- (cl_device_id *)device;
- (void)setDevice:(cl_device_id *)fp8;
- (cl_program *)createProgramWithSource:(id)fp8 error:(NSError**)fp12;
- (void)finalize;
- (void)dealloc;
- (CFArrayRef)deviceNames;
- (BOOL)isAsynchronous;
- (BOOL)isAccelerated;
- (NSUInteger)deviceCount;
- (cl_device_id **)devices;
- (cl_context *)context;
@end

@interface QCCLContext (Utilities)
- (unsigned long long)deviceType;
- (NSString*)deviceName;
- (NSString*)deviceVendor;
- (NSString*)deviceVersion;
- (cl_uint)deviceMaxComputeUnits;
- (cl_uint)deviceMaxWorkItemDimensions;
- (NSUInteger)deviceMaxWorkGroupSize;
- (cl_uint)deviceMaxReadImageArgs;
- (cl_uint)deviceMaxWriteImageArgs;
- (cl_uint)deviceMaxSamplers;
- (cl_uint)deviceMaxConstantsArgs;
- (NSUInteger)deviceMaxConstantBufferSize;
- (NSUInteger)deviceGlobalMemSize;
- (NSUInteger)deviceLocalMemSize;
- (NSUInteger)deviceImage2DMaxWidth;
- (NSUInteger)deviceImage2DMaxHeight;
@end
