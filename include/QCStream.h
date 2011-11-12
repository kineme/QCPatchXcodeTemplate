#import "QCStructure.h"

@interface QCStream : QCStructure
{
	id <QCStreamProvider> _provider;	// 48 = 0x30
}
@property (readonly,assign) NSUInteger elementSize;
@property (readonly,assign) NSUInteger pixelsWide;
@property (readonly,assign) NSUInteger pixelsHigh;
@property (readonly,assign) NSUInteger pixelsDeep;
@property (readonly,assign) QCPixelFormat *pixelFormat;
@property (readonly,assign) int type;


+ (void)initialize;
+ (id)streamWithStructure:(id)fp8;
- (id)initWithProvider:(id)fp8 options:(id)fp12;
- (void)dealloc;
- (id)provider;
- (id)createArrayMemObjectForManager:(id)fp8 withCount:(NSUInteger)fp12 elementSize:(NSUInteger)fp16 type:(int)fp20 options:(id)fp24;
- (id)createImage2DMemObjectForManager:(id)fp8 withFormat:(id)fp12 options:(id)fp16;
- (id)createImage3DMemObjectForManager:(id)fp8 options:(id)fp12;
- (id)createRepresentationOfType:(id)fp8 forManager:(id)fp12 withCount:(NSUInteger)fp16 elementSize:(NSUInteger)fp20 type:(int)fp24 options:(id)fp28;
- (NSUInteger)elementSize;
- (NSUInteger)pixelsWide;
- (NSUInteger)pixelsHigh;
- (NSUInteger)pixelsDeep;
- (QCPixelFormat*)pixelFormat;
- (int)type;

@end

@interface QCStream (ExporterRegistry)
+ (void)registerStreamExporterClass:(Class)fp8;
+ (id)streamExporterClasses;
+ (NSUInteger)streamExporterRegistryTimestamp;
@end

@interface QCStream (ProviderRegisry)
+ (void)registerStreamProviderClass:(Class)fp8;
+ (id)streamProviderClasses;
+ (id)createImageWithSource:(id)fp8 options:(id)fp12;
@end

@interface QCStream (QCExporter_OpenCL)
- (id)createQCArrayForManager:(id)fp8 withCount:(NSUInteger)fp12 elementSize:(NSUInteger)fp16 type:(int)fp20 options:(id)fp24;
- (id)createQCArrayBufferObjectForManager:(id)fp8 withTarget:(GLuint)fp12 count:(NSUInteger)fp16 elementSize:(NSUInteger)fp20 type:(int)fp24 options:(id)fp28;
- (id)createQCArrayTexture3DForManager:(id)fp8 withWidth:(NSUInteger)fp12 height:(NSUInteger)fp16 depth:(NSUInteger)fp20 options:(id)fp24;
@end

@interface QCStream (QCProvider_Core3D)
- (id)initWithC3DMesh:(struct __C3DMesh *)fp8 options:(id)fp12;
- (struct __C3DMesh *)C3DMeshRepresentation;
@end

@interface QCStream (QCProvider_QCArray)
- (id)initWithArray:(id)fp8 options:(id)fp12;
- (id)initWithList:(id)fp8 options:(id)fp12;
- (id)QCArrayRepresentation;
@end

@interface QCStream (QCProvider_QCMemObject)
- (id)initWithMemObject:(id)fp8 options:(id)fp12;
- (id)QCMemObjectRepresentation;
@end

@interface QCStream (QCStructure)
- (void)_populateWithStream;
- (id)initWithStructure:(id)fp8;
- (NSUInteger)count;
- (id)memberForKey:(id)fp8;
- (id)memberAtIndex:(NSUInteger)fp8;
- (id)keyAtIndex:(NSUInteger)fp8;
- (void)encodeWithCoder:(NSCoder *)aCoder;
- (void)addMember:(id)fp8 forKey:(id)fp12;
- (void)setMember:(id)fp8 forKey:(id)fp12;
- (void)removeMemberForKey:(id)fp8;
- (void)removeMemberAtIndex:(NSUInteger)fp8;
- (void)removeAllMembers;
- (void)replaceMemberAtIndex:(NSUInteger)fp8 withMember:(id)fp12;
- (id)arrayRepresentation;
- (id)dictionaryRepresentation;
- (id)_list;
@end
