

@class GFPort;

@interface GFNodeActor : NSObject
{
	GFPort *_tooltipPort;	// 4 = 0x4
	void *_unused[4];	// 8 = 0x8
}

+ (GFNodeActor*)sharedActor;
- (NSSize)sizeForNode:(GFNode*)node;
- (id)_portForPoint:(NSPoint)fp8 inNode:(id)fp16 bounds:(NSRect)fp20 outBounds:(NSRect *)fp36;
- (id)portForPoint:(NSPoint)fp8 inNode:(id)fp16 bounds:(NSRect)fp20;
- (NSPoint)pointForPort:(id)fp8 inNode:(id)fp12 bounds:(NSRect)fp16;
- (void)drawNode:(GFNode*)node bounds:(NSRect)bounds view:(GFGraphView*)view;
- (void)drawSelectionRingWithColor:(NSColor*)color width:(CGFloat)fp12 forNode:(id)fp16 bounds:(NSRect)fp20 view:(NSView*)view;
- (BOOL)trackMouse:(id)fp8 inNode:(id)fp12 bounds:(NSRect)fp16 view:(id)fp32;
- (NSMenu*)menuForNode:(GFNode*)node view:(GFGraphView*)view;
- (BOOL)nodeAcceptsFirstResponder:(id)fp8 view:(NSView*)view;
- (BOOL)nodeBecomesFirstResponder:(id)fp8 view:(NSView*)view;
- (BOOL)nodeResignsFirstResponder:(id)fp8 view:(NSView*)view;
- (BOOL)handleKeyUp:(id)fp8 inNode:(id)fp12 view:(NSView*)view;
- (BOOL)handleKeyDown:(id)fp8 inNode:(id)fp12 view:(NSView*)view;
- (id)setupInspectorViewsForNode:(id)fp8;
- (void)resetInspectorViews;
- (id)tooltipStringForPoint:(NSPoint)point inNode:(GFNode*)node bounds:(NSRect)bounds tooltipBounds:(NSRect *)tooltipBounds;
- (id)setupTooltipViewForPoint:(NSPoint)point inNode:(GFNode*)node bounds:(NSRect)bounds tooltipBounds:(NSRect *)tooltipBounds;
- (void)resetTooltipView;
@end

@interface GFNodeActor (MenuActions)
- (void)_publish:(id)fp8;
- (void)__setNodeSelection:(BOOL)fp8 adjacentToNode:(id)fp12 inputNodes:(BOOL)fp16 selectedList:(id)fp20;
- (void)_selectDownstream:(id)fp8;
- (void)_deselectDownstream:(id)fp8;
- (void)_selectUpstream:(id)fp8;
- (void)_deselectUpstream:(id)fp8;
- (void)_editSubgraph:(id)fp8;
@end

@interface GFNodeActor (Private)
- (NSDictionary*)_titleTextAttributesForNode:(GFNode*)node;
- (NSDictionary*)_portTextAttributesForNode:(GFNode*)node;
- (NSColor*)_colorForNode:(GFNode*)node;
- (void)_makeCGPathForNode:(id)fp8 bounds:(NSRect)fp12 inContext:(CGContextRef)fp28;
- (CGColorRef)_overlayColorForNode:(id)fp8 view:(NSView*)view;
- (id)_portIsConnected:(id)fp8 view:(NSView*)view;
@end
