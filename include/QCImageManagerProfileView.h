#import "QCProfileView.h"

@class QCImageManager;

@interface QCImageManagerProfileView : QCProfileView
{
	QCImageManager *_manager;	// 140 = 0x8c
	NSUInteger _virtualScreen;	// 144 = 0x90
	BOOL _purgeable;	// 148 = 0x94
	void *_unused2[4];	// 152 = 0x98
}

- (id)initWithFrame:(NSRect)fp8;
- (void)dealloc;
- (void)setSampleSize:(NSUInteger)fp8;
- (void)addSample:(const double *)fp8;
- (void)_updateProfile;
- (void)setImageManager:(id)fp8;
- (id)imageManager;
- (void)setVirtualScreen:(NSUInteger)fp8;
- (void)setShowPurgeable:(BOOL)fp8;
@end
