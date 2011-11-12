@interface QCIterator : QCPatch
{
	QCIndexPort *inputCount;	// 156 = 0x9c
	NSUInteger _currentIndex;	// 160 = 0xa0
}

+ (BOOL)isSafe;
+ (QCPatchExecutionMode)executionModeWithIdentifier:(id)identifier;
+ (BOOL)supportsOptimizedExecutionForIdentifier:(id)fp8;
- (id)initWithIdentifier:(id)fp8;
- (double)nextExecutionTimeForSubpatches:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end
