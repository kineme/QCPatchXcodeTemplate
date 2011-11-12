
#import "GFNodeActor.h"

@class QCInspector, QCPatch, QCTableView;

@interface QCPatchActor : GFNodeActor
{
	NSView *noSettingsView;	// 24 = 0x18
	NSView *noPublishingView;	// 28 = 0x1c
	NSView *notApplicableView;	// 32 = 0x20
	NSView *noParametersView;	// 36 = 0x24
	NSView *publishingView;	// 40 = 0x28
	QCTableView *inputsTableView;	// 44 = 0x2c
	QCTableView *outputsTableView;	// 48 = 0x30
	NSTableColumn *_inputsKeyColumn;	// 52 = 0x34
	NSTableColumn *_outputsKeyColumn;	// 56 = 0x38
	QCPatch *_currentPatch;	// 60 = 0x3c
	QCInspector *_currentInspector;	// 64 = 0x40
	void *_unused2[4];	// 68 = 0x44
}

+ (void)initialize;
- (id)init;
- (void)dealloc;
- (CGColorRef)_overlayColorForNode:(id)fp8 view:(id)fp12;
- (void)_drawTitle:(id)fp8 inContext:(CGContextRef)fp12 atPoint:(NSPoint)fp16 withAttributes:(id)fp24;
- (void)_drawString:(id)fp8 inContext:(CGContextRef)fp12 atPoint:(NSPoint)fp16 withAttributes:(id)fp24;
- (id)_colorForNode:(id)fp8;
- (id)_titleTextAttributesForNode:(id)fp8;
- (id)_portTextAttributesForNode:(id)fp8;
- (void)_makeCGPathForNode:(id)fp8 bounds:(NSRect)fp12 inContext:(CGContextRef)fp28;
- (void)_makeSelectionPathForNode:(id)fp8 border:(float)fp12 bounds:(NSRect)fp16 inContext:(CGContextRef)fp32;
- (void)_drawBackgroundGradientLayerForNode:(id)fp8 bounds:(NSRect)fp12 reflectionHeight:(CGFloat)fp28 inContext:(CGContextRef)fp32;
- (id)portForPoint:(NSPoint)fp8 inNode:(id)fp16 bounds:(NSRect)fp20;
- (id)_portForPoint:(NSPoint)fp8 inNode:(id)fp16 bounds:(NSRect)fp20 outBounds:(NSRect *)fp36;
- (NSPoint)pointForPort:(id)fp8 inNode:(id)fp12 bounds:(NSRect)fp16;
- (void)_drawHighLightForNode:(id)fp8 bounds:(NSRect)fp12 inContext:(CGContextRef)fp28;
- (void)_drawSelectionForNode:(id)fp8 bounds:(NSRect)fp12 inContext:(CGContextRef)fp28;
- (void)_drawNode:(id)fp8 bounds:(NSRect)fp12 inContext:(CGContextRef)fp28;
- (CGFloat)_drawBadgeForNode:(id)fp8 bounds:(NSRect)fp12 inContext:(CGContextRef)fp28;
- (CGFloat)_drawOrderForNode:(id)fp8 bounds:(NSRect)fp12 inContext:(CGContextRef)fp28;
- (void)_drawTitleForNode:(id)fp8 bounds:(NSRect)fp12 inContext:(CGContextRef)fp28;
- (void)_drawNameForPort:(id)fp8 node:(id)fp12 atPoint:(NSPoint)fp16 bounds:(NSRect)fp24 inContext:(CGContextRef)fp40;
- (CGLayerRef)_createPortRingWithColor:(CGColorRef)fp8 inContext:(CGContextRef)fp12 zoom:(CGFloat)fp16;
- (void)_drawPortsForNode:(id)fp8 bounds:(NSRect)fp12 view:(id)fp28 inContext:(CGContextRef)fp32;
- (void)_drawPortColorsForNode:(id)fp8 bounds:(NSRect)fp12 view:(id)fp28 inContext:(CGContextRef)fp32;
- (void)_drawOverlayForNode:(id)fp8 bounds:(NSRect)fp12 stroke:(BOOL)fp28 view:(id)fp32 inContext:(CGContextRef)fp36;
- (void)_drawOverlayForNode:(id)fp8 bounds:(NSRect)fp12 view:(id)fp28 inContext:(CGContextRef)fp32;
- (QCMD5Sum *)nodeMD5List:(id)fp8 bounds:(NSRect)fp12 view:(id)fp28 zoom:(CGFloat)fp32 outCount:(NSUInteger *)fp36;
- (void)drawNode:(id)fp8 bounds:(NSRect)fp12 view:(id)fp28;
- (id)parametersViewForPatch:(id)fp8;
- (NSSize)sizeForNode:(id)fp8;
- (BOOL)dragsOnPortForNode:(id)fp8;

@end

@interface QCPatchActor (Interaction)
- (BOOL)pointInConsumerOrderRect:(NSPoint)fp8 inNode:(id)fp16 bounds:(NSRect)fp20;
- (BOOL)pointInTitleRect:(NSPoint)fp8 inNode:(id)fp16 bounds:(NSRect)fp20;
- (void)setTitle:(id)fp8 forNode:(id)fp12;
- (BOOL)trackMouse:(id)fp8 inNode:(id)fp12 bounds:(NSRect)fp16 view:(id)fp32;
- (id)_portIsConnected:(id)fp8 view:(id)fp12;
- (id)inspectorForPatch:(id)fp8;
- (void)_updatedParameters:(id)fp8;
- (id)setupInspectorViewsForNode:(id)fp8;
- (void)resetInspectorViews;
- (void)_updatedState:(id)fp8;
- (void)_updatedPorts:(id)fp8;
- (NSInteger)numberOfRowsInTableView:(NSTableView*)fp8;
- (id)tableView:(NSTableView*)fp8 portForRow:(int)fp12;
- (id)tableView:(NSTableView*)fp8 objectValueForTableColumn:(NSTableColumn*)fp12 row:(NSInteger)fp16;
- (BOOL)tableView:(NSTableView*)fp8 shouldEditTableColumn:(NSTableColumn*)fp12 row:(NSInteger)fp16;
- (void)tableView:(NSTableView*)fp8 setObjectValue:(id)fp12 forTableColumn:(NSTableColumn*)fp16 row:(NSInteger)fp20;
- (BOOL)tableView:(NSTableView*)fp8 writeRows:(id)fp12 toPasteboard:(id)fp16;
- (NSUInteger)tableView:(NSTableView*)fp8 validateDrop:(id)fp12 proposedRow:(NSInteger)fp16 proposedDropOperation:(NSUInteger)fp20;
- (BOOL)tableView:(NSTableView*)fp8 acceptDrop:(id)fp12 row:(NSInteger)fp16 dropOperation:(NSUInteger)fp20;
- (id)parametersViewForPatch:(id)fp8;
- (void)_setLayer:(id)fp8;
- (void)_explodeSubgraph:(id)fp8;
- (void)_parent:(id)fp8;
- (void)_local:(id)fp8;
- (void)_external:(id)fp8;
- (void)_refactor:(id)fp8;
- (id)menuForNode:(id)fp8 view:(id)fp12;
@end

@interface QCPatchActor (Tooltip)
- (id)tooltipStringForPoint:(NSPoint)fp8 inNode:(id)fp16 bounds:(NSRect)fp20 tooltipBounds:(NSRect *)fp36;
@end
