@interface QCObject : NSObject
{
    NSDictionary *_staticMetadata;
    NSDictionary *_forwardMetadata;
    void *_unused[4];
}

+ (id)allocWithZone:(NSZone *)fp8;
- (void)finalize;
- (void)dealloc;
- (void)setMetadata:(id)fp8 forKey:(id)fp12 shouldForward:(BOOL)fp16;
- (void)removeMetadataForKey:(id)fp8;
- (void)removeAllMetadata;
- (id)metadataForKey:(id)fp8;
- (NSDictionary *)_forwardMetadata;
- (void)forwardMetadataToObject:(id)fp8;
- (id)allMetadata;
- (id)allStaticMetadata;
- (id)allForwardedMetadata;

@end
