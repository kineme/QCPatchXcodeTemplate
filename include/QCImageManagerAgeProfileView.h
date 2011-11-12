
#import "QCAgeProfileView.h"

@class QCImageManager;

@interface QCImageManagerAgeProfileView : QCAgeProfileView
{
	NSUInteger _binCount;	// 96 = 0x60
	NSUInteger _statCount;	// 100 = 0x64
	NSUInteger _selectedIndex;	// 104 = 0x68
	NSArray *_names;	// 108 = 0x6c
	double *_buffer;	// 112 = 0x70
	double _maxAge;	// 116 = 0x74
	double _maxAgePurgeable;	// 124 = 0x7c
	double _binSize;	// 132 = 0x84
	double _stdDev;	// 140 = 0x8c
	double _querySuccess;	// 148 = 0x94
	QCImageManager *_manager;	// 156 = 0x9c
	void *_unused2[4];	// 160 = 0xa0
}

- (id)initWithFrame:(NSRect)fp8;
- (void)finalize;
- (void)dealloc;
- (void)clearAllSamples;
- (NSUInteger)nameCount;
- (id)nameForIndex:(NSUInteger)fp8;
- (void)setSelectedCache:(id)fp8;
- (id)selectedCache;
- (void)setImageManager:(id)fp8;
- (id)imageManager;
- (void)_updateProfile;
- (void)drawRect:(NSRect)fp8;
@end
