
#import "QCVirtualPort.h"

@interface QCInteractionPort : QCVirtualPort


+ (Class)baseClass;
- (BOOL)acceptValuesOfClass:(Class)fp8;
- (Class)valueClass;
- (id)stateValue;
- (BOOL)setStateValue:(id)fp8;
- (BOOL)canConnectToPort:(id)fp8;
- (void)_setConnectedPort:(id)fp8;

@end
