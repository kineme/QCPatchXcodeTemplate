@interface QCStructure : QCObject <NSCoding>
{
	GFList *_list;	// 28 = 0x1c
	void *_unused2[4];	// 32 = 0x20
}

- (NSUInteger)count;
- (id)memberForKey:(NSString*)key;
- (id)memberAtIndex:(NSUInteger)index;
- (id)keyAtIndex:(NSUInteger)index;
- (id)initWithCoder:(NSCoder *)aDecoder;
- (void)encodeWithCoder:(NSCoder *)aCoder;
@end

@interface QCStructure (QCProFX)
- (QCMD5Sum)md5WithTime:(double)time arguments:(NSDictionary*)args;
@end

@interface QCStructure (Override)
- (NSString*)description;
@end

@interface QCStructure (ExtendedStructure)
- (id)initWithStructure:(QCStructure*)structure;
- (id)initWithDictionary:(NSDictionary*)dictionary;
- (id)initWithArray:(NSArray*)array;
- (id)initWithMembers:(id)members, ...;
- (id)initWithMembers:(id)members keyPrefix:(NSString*)keyPrefix;
- (id)initWithMembersAndKeys:(id)fp8, ...;
- (id)initWithMembers:(const id *)members forKeys:(const id *)keys count:(NSUInteger)count;
- (id)init;
- (void)dealloc;
- (void)addMember:(id)member forKey:(NSString*)key;
- (void)setMember:(id)member forKey:(NSString*)key;
- (void)removeMemberForKey:(NSString*)key;
- (void)removeMemberAtIndex:(NSUInteger)index;
- (void)removeAllMembers;
- (void)replaceMemberAtIndex:(NSUInteger)index withMember:(id)member;
- (NSArray*)arrayRepresentation;
- (NSDictionary*)dictionaryRepresentation;
- (GFList*)_list;
#if MAC_OS_X_VERSION_MAX_ALLOWED >= 1060
- (NSArray*)arrayRepresentationOfType:(int)type;
- (void)_setList:(GFList*)list;
#endif
@end
