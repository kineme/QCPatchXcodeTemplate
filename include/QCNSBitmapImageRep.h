

@interface QCNSBitmapImageRep : NSBitmapImageRep
{
	id _owner;	// 52 = 0x34
}

- (void)setOwner:(id)fp8;
- (void)dealloc;
- (void)encodeWithCoder:(NSCoder *)aCoder;
- (id)initWithCoder:(NSCoder *)aDecoder;
- (id)copyWithZone:(NSZone *)zone;
@end
