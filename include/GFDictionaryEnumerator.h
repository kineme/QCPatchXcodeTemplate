@interface GFDictionaryEnumerator : NSObject
{
	id _keyBuffer[32];	// 4 = 0x4
	id _valueBuffer[32];	// 132 = 0x84
	id *_keys;	// 260 = 0x104
	id *_values;	// 264 = 0x108
	NSInteger _count;	// 268 = 0x10c
	NSInteger _index;	// 272 = 0x110
}

+ (id)enumeratorWithDictionary:(NSDictionary*)dict;
- (id)init;
- (id)initWithDictionary:(NSDictionary*)dict;
- (void)dealloc;
- (BOOL)next;
- (id)nextKey;
- (id)nextObject;
- (id)key;
- (id)object;
- (void)reset;
- (NSUInteger)count;
@end
