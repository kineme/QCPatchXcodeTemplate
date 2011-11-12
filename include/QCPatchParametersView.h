


@class GFList, QCPatch;

@interface QCPatchParametersView : NSView
{
	QCPatch *_patch;	// 80 = 0x50
	NSUInteger _mask;	// 84 = 0x54
	BOOL _autosize;	// 88 = 0x58
	GFList *_patches;	// 92 = 0x5c
	NSMutableArray *_ports;	// 96 = 0x60
	GFList *_labels;	// 100 = 0x64
	NSMutableArray *_views;	// 104 = 0x68
	NSSize _size;	// 108 = 0x6c
	void *_unused[4];	// 116 = 0x74
}

+ (void)initialize;
- (Class)valueClassForBinding:(id)fp8;
- (void)_setView:(id)fp8 enabled:(BOOL)fp12;
- (void)_layoutUpdated:(id)fp8;
- (void)observeValueForKeyPath:(id)fp8 ofObject:(id)fp12 change:(id)fp16 context:(void *)fp20;
- (void)_cleanup;
- (void)resizeSubviewsWithOldSize:(NSSize)fp8;
- (void)_setup;
- (void)_stateUpdated:(id)fp8;
- (void)_attributesUpdated:(id)fp8;
- (void)_finishInitialization;
- (id)initWithFrame:(NSRect)fp8;
- (void)finalize;
- (void)dealloc;
- (BOOL)isInputPortVisible:(id)fp8;
- (void)localizePortInfo:(id)fp8;
- (id)patch;
- (void)setPatch:(id)fp8;
- (NSUInteger)inputsVisibilityMask;
- (void)setInputsVisibilityMask:(NSUInteger)fp8;
- (void)setAutoresize:(BOOL)fp8;
- (BOOL)autoresize;
- (NSUInteger)visibleInputs;
- (NSSize)bestSize;
- (BOOL)isFlipped;
- (void)encodeWithCoder:(NSCoder *)aCoder;
- (id)initWithCoder:(NSCoder *)aDecoder;
- (void)drawRect:(NSRect)fp8;
- (id)_labels;

@end
