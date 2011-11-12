

@class QCPatch;

@interface QCPatchController : NSController
{
	QCPatch *_patch;	// 60 = 0x3c
	void *_unused[4];	// 64 = 0x40
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)fp8;
- (void)dealloc;
- (id)patch;
- (void)_real_willChangeValueForKey:(id)fp8;
- (void)_real_didChangeValueForKey:(id)fp8;
- (void)setPatch:(id)fp8;
- (void)encodeWithCoder:(NSCoder *)aCoder;
- (id)initWithCoder:(NSCoder *)aDecoder;

@end
