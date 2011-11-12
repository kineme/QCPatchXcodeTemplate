#import <QCObject.h>
#import <GFList.h>

@interface QCStructure : QCObject <NSCoding>
{
    GFList *_list;
    void *_unused2[4];
}

- (unsigned int)count;
- (id)memberForKey:(id)fp8;
- (id)memberAtIndex:(unsigned int)fp8;
- (id)keyAtIndex:(unsigned int)fp8;
- (id)initWithCoder:(id)fp8;
- (void)encodeWithCoder:(id)fp8;

@end

@interface QCStructure (Override)
- (id)description;
@end

@interface QCStructure (ExtendedStructure)
- (id)initWithStructure:(id)fp8;
- (id)initWithDictionary:(id)fp8;
- (id)initWithArray:(id)fp8;
- (id)initWithMembers:(id)fp8;
- (id)initWithMembers:(id)fp8 keyPrefix:(id)fp12;
- (id)initWithMembersAndKeys:(id)fp8;
- (id)initWithMembers:(const id *)fp8 forKeys:(const id *)fp12 count:(unsigned int)fp16;
- (id)init;
- (void)dealloc;
- (void)addMember:(id)fp8 forKey:(id)fp12;
- (void)setMember:(id)fp8 forKey:(id)fp12;
- (void)removeMemberForKey:(id)fp8;
- (void)removeMemberAtIndex:(unsigned int)fp8;
- (void)removeAllMembers;
- (void)replaceMemberAtIndex:(unsigned int)fp8 withMember:(id)fp12;
- (id)arrayRepresentation;
- (id)dictionaryRepresentation;
- (id)_list;
@end

@interface QCStructure (QCProFX)
- (QCMD5Sum)md5WithTime:(double)fp8 arguments:(id)fp16;
@end
