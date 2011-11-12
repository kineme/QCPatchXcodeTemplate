
#import "QCPatchActor.h"

@interface QCInteractionPatchActor : QCPatchActor
- (NSUInteger)countOfInteractionPortsInNode:(id)fp8 direction:(int)fp12;
- (NSSize)sizeForNode:(id)fp8;
- (NSPoint)pointForPort:(id)fp8 inNode:(id)fp12 bounds:(NSRect)fp16;
- (void)_drawNameForPort:(id)fp8 node:(id)fp12 atPoint:(NSPoint)fp16 bounds:(NSRect)fp24 inContext:(CGContextRef)fp40;
- (void)_drawTitleForNode:(id)fp8 bounds:(NSRect)fp12 inContext:(CGContextRef)fp28;
- (id)setupTooltipViewForPoint:(NSPoint)fp8 inNode:(id)fp16 bounds:(NSRect)fp20 tooltipBounds:(NSRect *)fp36;
@end
