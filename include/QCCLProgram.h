@interface QCCLProgram : NSObject
{
	cl_program *_program;	// 4 = 0x4
}

- (id)initWithProgram:(cl_program *)program;
- (void)finalize;
- (void)dealloc;

@end
