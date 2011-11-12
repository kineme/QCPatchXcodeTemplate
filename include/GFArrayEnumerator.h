@interface GFArrayEnumerator : NSObject
{
	id _objectBuffer[32];	// 4 = 0x4
	id *_objects;	// 132 = 0x84
	NSInteger _count;	// 136 = 0x88
	NSInteger _index;	// 140 = 0x8c
}

+ (id)enumeratorWithArray:(NSArray*)array;
- (id)init;
- (id)initWithArray:(NSArray*)array;
- (void)dealloc;
- (BOOL)next;
- (id)nextObject;
- (id)object;
- (void)reset;
- (NSUInteger)count;
@end
