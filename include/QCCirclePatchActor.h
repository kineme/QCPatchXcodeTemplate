
#import "QCPatchActor.h"

@interface QCCirclePatchActor : QCPatchActor


- (QCMD5Sum *)nodeMD5List:(id)fp8 bounds:(NSRect)fp12 view:(id)fp28 zoom:(CGFloat)fp32 outCount:(NSUInteger*)fp36;
- (id)_portForPoint:(NSPoint)fp8 inNode:(id)fp16 bounds:(NSRect)fp20 outBounds:(NSRect *)fp36;
- (NSPoint)pointForPort:(id)fp8 inNode:(id)fp12 bounds:(NSRect)fp16;
- (BOOL)dragsOnPortForNode:(id)fp8;
- (NSSize)sizeForNode:(id)fp8;
- (BOOL)pointInTitleRect:(NSPoint)fp8 inNode:(id)fp16 bounds:(NSRect)fp20;
- (void)_drawTitleForNode:(id)fp8 bounds:(NSRect)fp12 inContext:(CGContextRef)fp28;
- (void)_drawBackgroundGradientLayerForNode:(id)fp8 bounds:(NSRect)fp12 reflectionHeight:(CGFloat)fp28 inContext:(CGContextRef)fp32;
- (void)_makeCGPathForNode:(id)fp8 bounds:(NSRect)fp12 inContext:(CGContextRef)fp28;
- (void)_makeSelectionPathForNode:(id)fp8 border:(float)fp12 bounds:(NSRect)fp16 inContext:(CGContextRef)fp32;
- (void)_drawHighLightForNode:(id)fp8 bounds:(NSRect)fp12 inContext:(CGContextRef)fp28;
- (id)_portTextAttributesForNode:(id)fp8;
- (void)_drawPortsForNode:(id)fp8 bounds:(NSRect)fp12 view:(id)fp28 inContext:(CGContextRef)fp32;

@end
