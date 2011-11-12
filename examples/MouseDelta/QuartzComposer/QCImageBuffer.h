#import <QCResource.h>
#import <QCPixelFormat.h>

@interface QCImageBuffer : QCResource
{
    unsigned int _identifier;
    int _status;
    struct CGColorSpace *_colorspace;
    QCPixelFormat *_format;
    unsigned int _width;
    unsigned int _height;
    BOOL _flipped;
    void *_backing;
    void *_backingCallback;
    void *_backingInfo;
    double _cost;
    unsigned int _cacheRetainCount;
    struct __CFArray *_caches;
    pthread_mutex_t _cachesMutex;
    void *_unused1[4];
}

+ (id)allocWithZone:(NSZone *)fp8;
- (id)initWithFormat:(id)fp8 pixelsWide:(unsigned int)fp12 pixelsHigh:(unsigned int)fp16 options:(id)fp20;
- (void)_finalize_QCImageBuffer;
- (void)finalize;
- (void)dealloc;
- (unsigned int)identifier;
- (int)status;
- (id)pixelFormat;
- (struct CGColorSpace *)colorSpace;
- (unsigned int)pixelsWide;
- (unsigned int)pixelsHigh;
- (BOOL)isFlipped;
- (BOOL)beginUpdateBuffer:(BOOL)fp8 colorSpace:(struct CGColorSpace *)fp12;
- (void)endUpdateBuffer:(BOOL)fp8;
- (id)pixelBufferRepresentation;
- (void)setBacking:(void *)fp8 releaseCallback:(void *)fp12 releaseInfo:(void *)fp16;
- (void *)backing;
- (void *)backingReleaseCallback;
- (void *)backingReleaseInfo;
- (void)willRecycleResource:(id)fp8;
- (BOOL)didRecycleResource:(id)fp8;
- (id)description;

@end

@interface QCImageBuffer (Extensions)
- (NSRect)bounds;
- (unsigned int)byteSize;
- (void)setCost:(double)fp8;
- (double)cost;
- (id)cacheRetain:(id)fp8;
- (void)cacheRelease:(id)fp8;
- (unsigned int)cacheRetainCount;
- (BOOL)writeToFile:(id)fp8;
- (void)clearBuffer;
@end

