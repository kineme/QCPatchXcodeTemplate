#import "QCMemObject.h"

@class QCArray;

@interface QCImage3DMemObject : QCMemObject
{
	QCArray *_backing;	// 84 = 0x54
	NSUInteger _elementSize;	// 88 = 0x58
	int _type;	// 92 = 0x5c
	NSUInteger _width;	// 96 = 0x60
	NSUInteger _height;	// 100 = 0x64
	NSUInteger _depth;	// 104 = 0x68
	void *_backingCallback;	// 108 = 0x6c
	void *_backingInfo;	// 112 = 0x70
	void *_hostPtr;	// 116 = 0x74
	void *_unused3[4];	// 120 = 0x78
}
@property (readonly,assign) QCArray *array;
@property (readonly,assign) QCArray *backing;
@property (readonly,assign) int type;
@property (readonly,assign) NSUInteger elementSize;
@property (readonly,assign) NSUInteger pixelsDeep;
@property (readonly,assign) NSUInteger pixelsHigh;
@property (readonly,assign) NSUInteger pixelsWide;

- (id)initWithContext:(id)fp8 hostPtr:(void *)fp12 releaseCallback:(void *)fp16 releaseInfo:(void *)fp20 pixelsWide:(NSUInteger)fp24 pixelsHigh:(NSUInteger)fp28 pixelsDeep:(NSUInteger)fp32 elementSize:(NSUInteger)fp36 type:(int)fp40 options:(id)fp44;
- (id)initWithContext:(id)fp8 pixelsWide:(NSUInteger)fp12 pixelsHigh:(NSUInteger)fp16 pixelsDeep:(NSUInteger)fp20 elementSize:(NSUInteger)fp24 type:(int)fp28 options:(id)fp32;
- (id)initWithContext:(id)fp8 array:(id)fp12 pixelsWide:(NSUInteger)fp16 pixelsHigh:(NSUInteger)fp20 pixelsDeep:(NSUInteger)fp24 elementSize:(NSUInteger)fp28 type:(int)fp32 options:(id)fp36;
- (BOOL)beginUpdateStream;
- (BOOL)_readbackImage3D:(id)fp8;
- (void)endUpdateStream;
- (QCArray*)array;
- (BOOL)attached;
- (NSUInteger)byteSize;
- (void)finalize_QCImage3DMemObject;
- (void)finalize;
- (void)dealloc;
- (NSString*)description;
- (QCArray*)backing;
- (int)type;
- (NSUInteger)elementSize;
- (NSUInteger)pixelsDeep;
- (NSUInteger)pixelsHigh;
- (NSUInteger)pixelsWide;

@end
