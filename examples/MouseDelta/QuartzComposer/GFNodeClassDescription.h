#import <GFList.h>

@interface GFNodeClassDescription : NSObject
{
    Class _class;
    GFList *_inputs;
    GFList *_outputs;
    BOOL _attributesInitialized;
    NSMutableDictionary *_attributes;
    NSMutableDictionary *_identifierAttributes;
    NSMutableDictionary *_userInfo;
}

- (id)initWithNodeClass:(Class)class;
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

