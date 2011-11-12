
#import "GFNodeClassDescription.h"

@interface QCPatchClassDescription : GFNodeClassDescription
{
	CFArrayRef _stateKeysCache;	// 76 = 0x4c
	CFDictionaryRef _stateKeysCaches;	// 80 = 0x50
}

- (id)stateKeysForIdentifier:(id)fp8;
- (void)finalize;
- (void)dealloc;

@end
