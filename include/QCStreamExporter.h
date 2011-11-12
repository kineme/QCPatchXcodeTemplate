



@class QCStreamManager;

@interface QCStreamExporter : NSObject <QCStreamExporter>
{
	QCStreamManager *_manager;	// 4 = 0x4
	void *_unused[4];	// 8 = 0x8
}

+ (id)exporterForStreamManager:(id)fp8;
- (id)initWithStreamManager:(id)fp8;
- (id)streamManager;
- (id)supportedRepresentationTypes;
- (id)createRepresentationOfType:(id)fp8 withProvider:(id)fp12 withCount:(NSUInteger)fp16 elementSize:(NSUInteger)fp20 type:(int)fp24 options:(id)fp28;
- (NSString*)description;

@end
