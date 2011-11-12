@interface QCOpenCLInfo : QCPatch
{
	QCIndexPort *inputDevices;	// 156 = 0x9c
	QCIndexPort *outputDeviceCount;	// 160 = 0xa0
	QCStringPort *outputDeviceType;	// 164 = 0xa4
	QCStringPort *outputDeviceName;	// 168 = 0xa8
	QCStringPort *outputDeviceVendor;	// 172 = 0xac
	QCStringPort *outputDeviceVersion;	// 176 = 0xb0
	QCIndexPort *outputDeviceMaxComputeUnits;	// 180 = 0xb4
	QCIndexPort *outputDeviceMaxWorkItemDimensions;	// 184 = 0xb8
	QCIndexPort *outputDeviceMaxWorkGroupSize;	// 188 = 0xbc
	QCIndexPort *outputDeviceMaxReadImageArgs;	// 192 = 0xc0
	QCIndexPort *outputDeviceMaxWriteImageArgs;	// 196 = 0xc4
	QCIndexPort *outputDeviceMaxSamplers;	// 200 = 0xc8
	QCIndexPort *outputDeviceMaxConstantsArgs;	// 204 = 0xcc
	QCIndexPort *outputDeviceMaxConstantBufferSize;	// 208 = 0xd0
	QCIndexPort *outputDeviceGlobalMemSize;	// 212 = 0xd4
	QCIndexPort *outputDeviceLocalMemSize;	// 216 = 0xd8
	QCIndexPort *outputDeviceImage2DMaxWidth;	// 220 = 0xdc
	QCIndexPort *outputDeviceImage2DMaxHeight;	// 224 = 0xe0
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)_updateContextInfo:(id)fp8;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
