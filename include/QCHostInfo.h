@interface QCHostInfo : QCPatch
{
	QCStringPort *outputUserName;	// 156 = 0x9c
	QCStringPort *outputLongUserName;	// 160 = 0xa0
	QCStringPort *outputComputerName;	// 164 = 0xa4
	QCStringPort *outputHostName;	// 168 = 0xa8
	QCStringPort *outputIPAddress;	// 172 = 0xac
	QCStringPort *outputMachineName;	// 176 = 0xb0
	QCStringPort *outputOSVersion;	// 180 = 0xb4
	QCStringPort *outputKernelVersion;	// 184 = 0xb8
	QCIndexPort *outputRAMSize;	// 188 = 0xbc
	QCStringPort *outputCPUType;	// 192 = 0xc0
	QCStructurePort *_cpuLoadPort;	// 196 = 0xc4
	QCIndexPort *_CPUCountPort;	// 200 = 0xc8
	QCNumberPort *_CPULoadPort_1;	// 204 = 0xcc
	QCNumberPort *_CPULoadPort_2;	// 208 = 0xd0
	processor_cpu_load_info_t _savedTicks;	// 212 = 0xd4
	unsigned int _savedSize;	// 216 = 0xd8
}

+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
+ (NSUInteger)stateVersionWithIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (void)setUseCPUStructure:(BOOL)fp8;
- (BOOL)useCPUStructure;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (BOOL)setup:(QCOpenGLContext *)context;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (void)cleanup:(QCOpenGLContext *)context;
@end
