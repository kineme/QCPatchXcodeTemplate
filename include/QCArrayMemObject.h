#import "QCMemObject.h"

@class QCArray;

@interface QCArrayMemObject : QCMemObject
{
	NSUInteger _elementSize;	// 84 = 0x54
	NSUInteger _bytesPerValue;	// 88 = 0x58
	NSUInteger _count;	// 92 = 0x5c
	int _type;	// 96 = 0x60
	QCArray *_backing;	// 100 = 0x64
	void *_backingCallback;	// 104 = 0x68
	void *_backingInfo;	// 108 = 0x6c
	void *_hostPtr;	// 112 = 0x70
	void *_unused3[4];	// 116 = 0x74
}
@property (readonly,assign) QCArray *array;
@property (readonly,assign) QCArray *backing;
@property (readonly,assign) int type;
@property (readwrite,assign) NSUInteger count;
@property (readwrite,assign) NSUInteger elementSize;

- (id)initWithContext:(id)fp8 hostPtr:(void *)fp12 releaseCallback:(void *)fp16 releaseInfo:(void *)fp20 count:(NSUInteger)fp24 elementSize:(NSUInteger)fp28 type:(int)fp32 options:(id)fp36;
- (id)initWithContext:(id)fp8 count:(NSUInteger)fp12 elementSize:(NSUInteger)fp16 type:(int)fp20 options:(id)fp24;
- (id)initWithContext:(id)fp8 array:(id)fp12 options:(id)fp16;
- (void)finalize_QCArrayBufferObject;
- (void)finalize;
- (void)dealloc;
- (void)setElementSize:(NSUInteger)fp8;
- (BOOL)beginUpdateStream;
- (void)endUpdateStream;
- (BOOL)attached;
- (QCArray*)array;
- (NSUInteger)byteSize;
- (NSString*)description;
- (QCArray*)backing;
- (int)type;
- (NSUInteger)count;
- (void)setCount:(NSUInteger)fp8;
- (NSUInteger)elementSize;

@end
