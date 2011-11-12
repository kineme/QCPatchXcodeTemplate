#import "QCTypes.h"

@interface GFList : NSObject <NSCopying, NSFastEnumeration>
{
    unsigned int _flags;
    unsigned int _capacity;
    unsigned int _count;
    id *_values;
    unsigned int *_hashValues;
    id *_keys;
    unsigned int *_hashKeys;
}

+ (id)list;
- (id)init;
- (id)initWithCapacity:(unsigned int)capacity;
- (id)initWithCapacity:(unsigned int)capacity optionFlags:(unsigned int)flags;
- (void)dealloc;
- (id)initWithList:(id)fp8;
- (id)initWithObjects:(id)fp8 keys:(id)fp12 optionFlags:(unsigned int)fp16;
- (id)copyWithZone:(NSZone*)zone;
- (unsigned int)optionFlags;
- (unsigned int)count;
- (unsigned int)flags;
- (void)setObject:(id)object forKey:(id)key;
- (void)insertObject:(id)object atIndex:(unsigned int)index forKey:(id)key;
- (void)addObject:(id)object forKey:(id)key;
- (void)addEntriesFromList:(id)list;
- (void)addEntriesFromDictionary:(NSDictionary*)dictionary;
- (void)removeAllObjects;
- (void)removeObject:(id)object;
- (void)removeObjectForKey:(id)key;
- (void)removeObjectAtIndex:(unsigned int)index;
- (id)objectForKey:(id)key;
- (id)keyForObject:(id)object;
- (id)objectAtIndex:(unsigned int)index;
- (unsigned int)indexOfObject:(id)object;
- (id)keyAtIndex:(unsigned int)index;
- (unsigned int)indexOfKey:(id)key;
- (id)description;
- (id)arrayOfKeys;
- (id)arrayOfObjects;
- (id)setOfObjects;
- (id)setOfKeys;
- (id)dictionary;
- (void)moveIndex:(unsigned int)origIndex toIndex:(unsigned int)newIndex;
- (void)setObject:(id)object atIndex:(unsigned int)index;
- (void)setKey:(id)fp8 atIndex:(unsigned int)index;
- (void)setIndex:(unsigned int)index ofObject:(id)object;
- (void)setIndex:(unsigned int)index ofKey:(id)key;
- (void)swapIndex:(unsigned int)origIndex withIndex:(unsigned int)newIndex;
- (void)makeObjectsPerformSelector:(SEL)fp8;
- (void)makeObjectsPerformSelector:(SEL)fp8 withObject:(id)fp12;
- (void)sortUsingFunction:(void *)fp8 context:(void *)fp12;
- (void)reverse;
- (void)applyFunction:(void *)fp8 context:(void *)fp12;
- (const id *)_values;
- (const id *)_keys;
- (unsigned int)countByEnumeratingWithState:(QCListState *)fp8 objects:(id *)fp12 count:(unsigned int)fp16;

@end
