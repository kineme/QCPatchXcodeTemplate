


@interface QCDataImage : NSImage
{
	NSData *_data;	// 28 = 0x1c
}

- (id)initWithFile:(id)fp8;
- (id)initWithURL:(id)fp8;
- (id)initWithData:(id)fp8;
- (id)imageData;
- (void)encodeWithCoder:(NSCoder *)aCoder;
- (id)initWithCoder:(NSCoder *)aDecoder;
- (id)copyWithZone:(NSZone *)zone;
@end
