// TODO: need to figure out what the type enum is

@interface QCArray : NSObject
{
	void *_array;	// 4 = 0x4
	int _type;	// 8 = 0x8
	NSUInteger _count;	// 12 = 0xc
	NSUInteger _elementSize;	// 16 = 0x10
	int _status;	// 20 = 0x14
	void *_backingCallback;	// 24 = 0x18
	void *_backingInfo;	// 28 = 0x1c
	void *_unused[4];	// 32 = 0x20
}
@property (readonly,assign) NSUInteger byteSize;
@property (readonly,assign) NSArray *NSArrayRepresentation;
@property (readonly,assign) int status;
@property (readwrite,assign) NSUInteger elementSize;
@property (readonly,assign) int type;
@property (readwrite,assign) NSUInteger count;
@property (readonly,assign) void *array;


- (NSUInteger)bytesPerValue;
- (id)initWithBaseAddress:(void *)base releaseCallback:(void *)callback releaseInfo:(void *)info count:(NSUInteger)count elementSize:(NSUInteger)size type:(int)type;
- (id)initWithCount:(NSUInteger)count elementSize:(NSUInteger)size type:(int)type;
- (void)finalize_QCArray;
- (void)finalize;
- (void)dealloc;
- (NSString*)description;
- (BOOL)isEqualToArray:(QCArray*)array;
- (void)_setArray:(void *)fp8 free:(BOOL)fp12;
- (BOOL)beginUpdateArray;
- (void)endUpdateArray;
- (NSUInteger)byteSize;
- (void)setCount:(NSUInteger)fp8;
- (void)setElementSize:(NSUInteger)fp8;
- (NSArray*)NSArrayRepresentation;
- (int)status;
- (NSUInteger)elementSize;
- (int)type;
- (NSUInteger)count;
- (void *)array;
@end

@interface QCArray (Extensions)
- (void)bindArrayToContext:(id)fp8 clientState:(int)fp12 savedState:(CDAnonymousStruct2 *)fp16;
- (void)unbindArrayFromContext:(id)fp8 clientState:(int)fp12 savedState:(CDAnonymousStruct2 *)fp16;
- (void)drawArrayWithContext:(id)fp8 glMode:(int)fp12 indices:(id)fp16;
@end
