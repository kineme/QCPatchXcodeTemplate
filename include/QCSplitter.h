@interface QCSplitter : QCPatch
{
	QCPort *_inPort;	// 156 = 0x9c
	QCPort *_outPort;	// 160 = 0xa0
	double _min;	// 164 = 0xa4
	double _max;	// 172 = 0xac
	BOOL _useLabels;	// 180 = 0xb4
	NSMutableArray *_indexLabels;	// 184 = 0xb8
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
+ (id)serializedStateKeysWithIdentifier:(id)fp8;
+ (NSUInteger)stateVersionWithIdentifier:(id)fp8;
- (id)nodeActorForView:(id)fp8;
- (void)_configurePort;
- (void)setPortClass:(Class)fp8;
- (Class)portClass;
- (double)portMinValue;
- (void)setPortMinValue:(double)fp8;
- (double)portMaxValue;
- (void)setPortMaxValue:(double)fp8;
- (void)_updateMaxIndexFromLabels;
- (NSUInteger)indexLabelsCount;
- (void)setUsesIndexLabels:(BOOL)fp8;
- (BOOL)usesIndexLabels;
- (void)addIndexLabel;
- (void)removeIndexLabelAtIndex:(NSUInteger)fp8;
- (void)setIndexLabel:(id)fp8 atIndex:(NSUInteger)fp12;
- (id)indexLabelAtIndex:(NSUInteger)fp8;
- (id)initWithIdentifier:(id)fp8;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;
- (void)dealloc;
- (void)_forwardRenderingFlag;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
@end

@interface QCSplitter (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
