

@interface QCIndexMenuValueTransformer : NSValueTransformer
{
	NSArray *_items;	// 4 = 0x4
}

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;
+ (id)transformerWithItems:(id)fp8;
- (id)initWithItems:(id)fp8;
- (void)dealloc;
- (id)transformedValue:(id)fp8;
- (id)reverseTransformedValue:(id)fp8;
@end
