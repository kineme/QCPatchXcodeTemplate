#import "GFList.h"

@interface QCList : GFList
+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)fp8;
- (void)setObject:(id)fp8 forKey:(id)fp12;
- (void)insertObject:(id)fp8 atIndex:(NSUInteger)fp12 forKey:(id)fp16;
- (void)removeObjectAtIndex:(NSUInteger)fp8;
- (void)removeAllObjects;
- (id)valueForKey:(id)fp8;
- (void)setObject:(id)fp8 atIndex:(NSUInteger)fp12;
- (void)setKey:(id)fp8 atIndex:(NSUInteger)fp12;
@end
