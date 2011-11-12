#import <GFNodeActor.h>
#import <QCTableView.h>
#import <QCPatch.h>
#import <QCInspector.h>

@interface QCPatchActor : GFNodeActor
{
    NSView *noSettingsView;
    NSView *noPublishingView;
    NSView *notApplicableView;
    NSView *noParametersView;
    NSView *publishingView;
    QCTableView *inputsTableView;
    QCTableView *outputsTableView;
    NSTableColumn *_inputsKeyColumn;
    NSTableColumn *_outputsKeyColumn;
    QCPatch *_currentPatch;
    QCInspector *_currentInspector;
    void *_unused2[4];
}

+ (void)initialize;
- (id)init;
- (void)dealloc;
- (id)_portIsConnected:(id)fp8 view:(id)fp12;
- (id)_colorForNode:(id)fp8;
- (struct CGColor *)_overlayColorForNode:(id)fp8 view:(id)fp12;
- (void)_makeCGPathForNode:(id)fp8 bounds:(NSRect)fp12 inContext:(struct CGContext *)fp28;
- (id)inspectorForPatch:(id)fp8;
- (void)_updatedParameters:(id)fp8;
- (id)setupInspectorViewsForNode:(id)fp8;
- (void)resetInspectorViews;
- (void)_updatedState:(id)fp8;
- (void)_updatedPorts:(id)fp8;
- (int)numberOfRowsInTableView:(id)fp8;
- (id)tableView:(id)fp8 portForRow:(int)fp12;
- (id)tableView:(id)fp8 objectValueForTableColumn:(id)fp12 row:(int)fp16;
- (BOOL)tableView:(id)fp8 shouldEditTableColumn:(id)fp12 row:(int)fp16;
- (void)tableView:(id)fp8 setObjectValue:(id)fp12 forTableColumn:(id)fp16 row:(int)fp20;
- (BOOL)tableView:(id)fp8 writeRows:(id)fp12 toPasteboard:(id)fp16;
- (unsigned int)tableView:(id)fp8 validateDrop:(id)fp12 proposedRow:(int)fp16 proposedDropOperation:(unsigned int)fp20;
- (BOOL)tableView:(id)fp8 acceptDrop:(id)fp12 row:(int)fp16 dropOperation:(unsigned int)fp20;
- (id)parametersViewForPatch:(id)fp8;
- (NSSize)sizeForNode:(id)fp8;
- (void)drawNode:(id)fp8 bounds:(NSRect)fp12 view:(id)fp28;
- (void)_setLayer:(id)fp8;
- (void)_parent:(id)fp8;
- (void)_local:(id)fp8;
- (void)_external:(id)fp8;
- (void)_refactor:(id)fp8;
- (id)menuForNode:(id)fp8 view:(id)fp12;
- (BOOL)pointInTitleRect:(NSPoint)fp8 inNode:(id)fp16 bounds:(NSRect)fp20;
- (BOOL)pointInConsumerOrderRect:(NSPoint)fp8 inNode:(id)fp16 bounds:(NSRect)fp20;
- (BOOL)trackMouse:(id)fp8 inNode:(id)fp12 bounds:(NSRect)fp16 view:(id)fp32;

@end

@interface QCPatchActor (Tooltip)
- (id)tooltipStringForPoint:(NSPoint)fp8 inNode:(id)fp16 bounds:(NSRect)fp20 tooltipBounds:(NSRect *)fp36;
@end

