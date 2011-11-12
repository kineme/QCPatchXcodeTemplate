

@class GFList;

@interface GFNodeClassDescription : NSObject
{
	Class _class;	// 4 = 0x4
	pthread_mutex_t _mutex;	// 8 = 0x8
	GFList *_inputs;	// 52 = 0x34
	GFList *_outputs;	// 56 = 0x38
	BOOL _attributesInitialized;	// 60 = 0x3c
	NSMutableDictionary *_attributes;	// 64 = 0x40
	NSMutableDictionary *_identifierAttributes;	// 68 = 0x44
	NSMutableDictionary *_userInfo;	// 72 = 0x48
}

- (id)initWithNodeClass:(Class)fp8;
- (Class)nodeClass;
- (void)_initializeAttributes;
- (id)xmlAttributes;
- (id)xmlAttributesForNodeIdentifier:(id)fp8;
- (id)attributesForNodeIdentifier:(id)fp8;
- (id)attributesForInputPort:(id)fp8 nodeIdentifier:(id)fp12;
- (id)attributesForOutputPort:(id)fp8 nodeIdentifier:(id)fp12;
- (id)ivarInputPorts;
- (id)ivarOutputPorts;
- (void)dealloc;
@end
