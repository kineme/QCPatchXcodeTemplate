@interface QCTimeLine : QCPatch
{
	GFList *_timeLines;	// 156 = 0x9c
	BOOL _curveHullsEnabled;	// 160 = 0xa0
	BOOL _legendHidden;	// 161 = 0xa1
}

+ (BOOL)isSafe;
+ (int)timeModeWithIdentifier:(id)fp8;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (NSUInteger)stateVersionWithIdentifier:(id)fp8;
+ (id)stateKeysWithIdentifier:(id)fp8;
+ (id)serializedStateKeysWithIdentifier:(id)fp8;
- (id)serializedValueForStateKey:(id)fp8;
- (void)setSerializedValue:(id)fp8 forStateKey:(id)fp12;
- (id)initWithIdentifier:(id)fp8;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;
- (void)dealloc;
- (NSUInteger)minTimeLinesCount;
- (NSUInteger)maxTimeLinesCount;
- (NSUInteger)timeLinesCount;
- (id)timeLines;
- (void)setTimeLines:(id)fp8;
- (NSUInteger)keyFramesCountForTimeLine:(NSInteger)fp8;
- (NSInteger)createTimeLineWithTime:(double)fp8 value:(double)fp16;
- (void)removeTimeLine:(NSInteger)fp8;
- (NSInteger)addKeyFrameAtTime:(double)fp8 value:(double)fp16 toTimeLine:(NSInteger)fp24 preserveCurve:(BOOL)fp28;
- (NSInteger)baseKeyFrameIndexAtTime:(double)fp8 inTimeLine:(NSInteger)fp16;
- (void)removeKeyFrame:(NSInteger)fp8 fromTimeLine:(NSInteger)fp12;
- (double)timeForKeyFrame:(NSInteger)fp8 controlType:(int)fp12 inTimeLine:(NSInteger)fp16;
- (double)valueForKeyFrame:(NSInteger)fp8 controlType:(int)fp12 inTimeLine:(NSInteger)fp16;
- (void)setTime:(double)fp8 forKeyFrame:(NSInteger)fp16 controlType:(int)fp20 inTimeLine:(NSInteger)fp24;
- (void)setValue:(double)fp8 forKeyFrame:(NSInteger)fp16 controlType:(int)fp20 inTimeLine:(NSInteger)fp24;
- (NSInteger)offsetControlType:(int)fp8 byTime:(double)fp12 byValue:(double)fp20 keyFrame:(NSInteger)fp28 inTimeLine:(NSInteger)fp32;
- (NSPoint)locationOfControlType:(int)fp8 keyFrame:(NSInteger)fp12 inTimeLine:(NSInteger)fp16;
- (double)minTimeForControlType:(int)fp8 keyFrame:(NSInteger)fp12 inTimeLine:(NSInteger)fp16;
- (double)maxTimeForControlType:(int)fp8 keyFrame:(NSInteger)fp12 inTimeLine:(NSInteger)fp16;
- (double)minValueForControlType:(int)fp8 keyFrame:(NSInteger)fp12 inTimeLine:(NSInteger)fp16;
- (double)maxValueForControlType:(int)fp8 keyFrame:(NSInteger)fp12 inTimeLine:(NSInteger)fp16;
- (void)cacheKeyFrames;
- (void)purgeKeyFrameCaches;
- (BOOL)legendHidden;
- (void)setLegendHidden:(BOOL)fp8;
- (BOOL)curveHullsEnabled;
- (void)setCurveHullsEnabled:(BOOL)fp8;
- (id)identifierForTimeLine:(NSInteger)fp8;
- (id)colorForTimeLine:(NSInteger)fp8;
- (BOOL)visibilityForTimeLine:(NSInteger)fp8;
- (void)setIdentifier:(id)fp8 forTimeLine:(NSInteger)fp12;
- (void)setColor:(id)fp8 forTimeLine:(NSInteger)fp12;
- (void)setVisibility:(BOOL)fp8 forTimeLine:(NSInteger)fp12;
- (id)activeTimeLineIndices;
- (id)inactiveTimeLineIndices;
- (BOOL)timeLineActive:(NSInteger)fp8;
- (void)setActive:(BOOL)fp8 forTimeLine:(NSInteger)fp12 extendSelection:(BOOL)fp16;
- (BOOL)keyFrameSelected:(NSInteger)fp8 inTimeLine:(NSInteger)fp12;
- (void)setSelected:(BOOL)fp8 forKeyFrame:(NSInteger)fp12 inTimeLine:(NSInteger)fp16 extendSelection:(BOOL)fp20;
- (void)setSelected:(BOOL)fp8 ifInRect:(NSRect)fp12;
- (BOOL)controlsFixedForKeyFrame:(NSInteger)fp8 inTimeLine:(NSInteger)fp12;
- (void)setControlsFixed:(BOOL)fp8 forKeyFrame:(NSInteger)fp12 inTimeLine:(NSInteger)fp16;
- (void)deselectAll;
- (BOOL)performAction:(SEL)fp8 onSelectedTimeLines:(BOOL)fp12 withSelectedKeyFrames:(BOOL)fp16 object:(id)fp20 context:(void *)fp24;
@end

@interface QCTimeLine (Private)
- (id)_createOutputPortForTimeLineIndex:(NSInteger)fp8;
- (id)_duplicateTimeLines;
@end

@interface QCTimeLine (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
