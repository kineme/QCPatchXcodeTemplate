@interface GFList : NSObject <NSCopying, NSFastEnumeration>
{
	NSUInteger _flags;	// 4 = 0x4
	NSUInteger _capacity;	// 8 = 0x8
	NSUInteger _count;	// 12 = 0xc
	id *_values;	// 16 = 0x10
	NSUInteger *_hashValues;	// 20 = 0x14
	id *_keys;	// 24 = 0x18
	NSUInteger *_hashKeys;	// 28 = 0x1c
}

+ (id)list;
- (id)init;
- (id)initWithCapacity:(NSUInteger)capacity;
- (id)initWithCapacity:(NSUInteger)capacity optionFlags:(NSUInteger)flags;
- (void)dealloc;
- (id)initWithList:(GFList *)list;
- (id)initWithObjects:(id)fp8 keys:(id)fp12 optionFlags:(NSUInteger)flags;
- (id)copyWithZone:(NSZone *)zone;
- (NSUInteger)optionFlags;
- (NSUInteger)count;
- (NSUInteger)flags;
- (void)setObject:(id)object forKey:(id)key;
- (void)insertObject:(id)object atIndex:(NSUInteger)index forKey:(id)key;
- (void)addObject:(id)object forKey:(NSString *)key;
- (void)addEntriesFromList:(GFList*)list;
- (void)addEntriesFromDictionary:(NSDictionary*)dictionary;
- (void)removeAllObjects;
- (void)removeObject:(id)object;
- (void)removeObjectForKey:(id)key;
- (void)removeObjectAtIndex:(NSUInteger)index;
- (id)objectForKey:(NSString *)key;
- (NSString *)keyForObject:(id)object;
- (id)objectAtIndex:(NSUInteger)index;
- (NSUInteger)indexOfObject:(id)object;		// NSNotFound if DNE
- (NSString *)keyAtIndex:(NSUInteger)index;
- (NSUInteger)indexOfKey:(NSString *)key;	// NSNotFound if DNE
- (NSString*)description;
- (NSArray*)arrayOfKeys;
- (NSArray*)arrayOfObjects;
- (NSSet*)setOfObjects;
- (NSSet*)setOfKeys;
- (NSDictionary*)dictionary;
- (void)moveIndex:(NSUInteger)sourceIndex toIndex:(NSUInteger)destIndex;
- (void)setObject:(id)object atIndex:(NSUInteger)index;
- (void)setKey:(id)fp8 atIndex:(NSUInteger)index;
- (void)setIndex:(NSUInteger)index ofObject:(id)object;
- (void)setIndex:(NSUInteger)index ofKey:(id)key;
- (void)swapIndex:(NSUInteger)indexA withIndex:(NSUInteger)indexB;
- (void)makeObjectsPerformSelector:(SEL)fp8;
- (void)makeObjectsPerformSelector:(SEL)fp8 withObject:(id)fp12;
- (void)sortUsingFunction:(void *)fp8 context:(void *)ctx;
- (void)reverse;
- (void)applyFunction:(void *)fp8 context:(void *)ctx;
- (const id *)_values;
- (const id *)_keys;
- (NSUInteger)countByEnumeratingWithState:(NSFastEnumerationState *)state objects:(id *)objects count:(NSUInteger)count;

@end
