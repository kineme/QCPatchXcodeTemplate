/* QCSharedTimers drive all the QCViews -- they register as clients, and this class sets up the timer. */
@interface QCSharedTimers : NSObject
{
	CFArrayRef _timers;	// 4 = 0x4
}

+ (id)sharedTimers;
- (id)init;
- (void)addClient:(id)client selector:(SEL)selector frequency:(float)timerFrequency;
- (void)removeClient:(id)client selector:(SEL)selector;
- (NSString*)description;

@end
