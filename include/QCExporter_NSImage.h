
#import "QCImageExporter.h"

@interface QCExporter_NSImage : QCImageExporter


- (id)supportedRepresentationTypes;
- (id)createRepresentationOfType:(id)fp8 withProvider:(id)fp12 transformation:(id)fp16 bounds:(NSRect)fp20 colorSpace:(CGColorSpaceRef)fp36 options:(id)fp40;

@end
