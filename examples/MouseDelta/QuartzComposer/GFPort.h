#import <GFNode.h>
#import <GFPort.h>

@interface GFPort : NSObject <GFBase>
{
    unsigned int _flags;
    GFNode *_owner;
    GFPort *_originalPort;
    NSDictionary *_attributes;
    NSMutableDictionary *_userInfo;
    void *_unused[4];
}

- (id)init;
- (id)initWithNode:(id)fp8 arguments:(id)fp12;
- (void)dealloc;
- (void)portWillDeleteFromNode;
- (id)node;
- (id)attributes;
- (id)userInfo;
- (id)state;
- (BOOL)setState:(id)fp8;
- (void)stateUpdated;
- (id)description;
- (id)key;
- (id)originalPort;

@end

@interface GFPort (MessageForwarding)
- (BOOL)respondsToSelector:(SEL)fp8;
- (id)methodSignatureForSelector:(SEL)fp8;
- (void)forwardInvocation:(id)fp8;
@end

@interface GFPort (Private)
- (unsigned int)_flags;
- (void)_setFlags:(unsigned int)fp8;
- (void)_unsetFlags:(unsigned int)fp8;
- (id)_userInfo;
@end

@interface GFPort (ProxyNameEditing)
- (id)editName:(id)fp8 inView:(id)fp12;
@end

@interface GFPort (GFNodeActor)
- (id)tooltipString;
- (id)setupTooltipView;
- (void)resetTooltipView;
@end

