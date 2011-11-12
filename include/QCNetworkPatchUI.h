
#import "QCInspector.h"

@interface QCNetworkPatchUI : QCInspector
{
	IBOutlet NSMatrix *protocolMatrix;	// 28 = 0x1c
	IBOutlet NSTextField *ipField_1;	// 32 = 0x20
	IBOutlet NSTextField *ipField_2;	// 36 = 0x24
	IBOutlet NSTextField *ipField_3;	// 40 = 0x28
	IBOutlet NSTextField *ipField_4;	// 44 = 0x2c
	IBOutlet NSTextField *portField;	// 48 = 0x30
}

- (void)_updateUI:(id)fp8;
- (void)setupViewForPatch:(id)fp8;
- (void)updateProtocol:(id)fp8;
- (void)updatePort:(id)fp8;

@end
