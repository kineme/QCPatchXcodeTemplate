@class QCNumberPort;

@interface QCKeyFrameList : NSObject
{
	NSString *_identifier;	// 4 = 0x4
	NSColor *_color;	// 8 = 0x8
	BOOL _visible;	// 12 = 0xc
	NSUInteger _numKeyFrames;	// 16 = 0x10
	NSMutableData *_keyFrames;	// 20 = 0x14
	NSMutableData *_keyFramesCache;	// 24 = 0x18
	BOOL _active;	// 28 = 0x1c
	NSUInteger _portNumber;	// 32 = 0x20
	NSString *_portKey;	// 36 = 0x24
	QCNumberPort *_port;	// 40 = 0x28
}

- (id)init;
- (id)initWithKeyFrame:(CDAnonymousStruct9)fp8;
- (id)initWithKeyFrameList:(id)fp8;
- (void)dealloc;
- (id)copyWithZone:(NSZone *)zone;
- (BOOL)executeAtTime:(double)fp8;
- (NSUInteger)keyFramesCount;
- (int)baseKeyFrameIndexAtTime:(double)fp8 searchBackward:(BOOL)fp16;
- (int)addKeyFrameAtTime:(double)fp8 value:(double)fp16 preserveCurve:(BOOL)fp24;
- (void)removeKeyFrame:(int)fp8;
- (double)timeForKeyFrame:(int)fp8 controlType:(int)fp12;
- (double)valueForKeyFrame:(int)fp8 controlType:(int)fp12;
- (void)setTime:(double)fp8 forKeyFrame:(int)fp16 controlType:(int)fp20;
- (void)setValue:(double)fp8 forKeyFrame:(int)fp16 controlType:(int)fp20;
- (int)offsetControlType:(int)fp8 byTime:(double)fp12 byValue:(double)fp20 keyFrame:(int)fp28;
- (NSPoint)locationOfControlType:(int)fp8 keyFrame:(int)fp12;
- (double)minTimeForControlType:(int)fp8 keyFrame:(int)fp12;
- (double)maxTimeForControlType:(int)fp8 keyFrame:(int)fp12;
- (double)minValueForControlType:(int)fp8 keyFrame:(int)fp12;
- (double)maxValueForControlType:(int)fp8 keyFrame:(int)fp12;
- (void)cacheKeyFrames;
- (void)purgeKeyFrameCache;
- (id)identifier;
- (void)setIdentifier:(id)fp8;
- (id)color;
- (void)setColor:(id)fp8;
- (BOOL)isVisible;
- (void)setVisible:(BOOL)fp8;
- (BOOL)active;
- (void)setActive:(BOOL)fp8;
- (BOOL)keyFrameSelected:(int)fp8;
- (void)setSelected:(BOOL)fp8 forKeyFrame:(int)fp12 extendSelection:(BOOL)fp16;
- (BOOL)controlsFixedForKeyFrame:(int)fp8;
- (void)setControlsFixed:(BOOL)fp8 forKeyFrame:(int)fp12;
- (NSUInteger)portNumber;
- (void)setPortNumber:(NSUInteger)fp8;
- (id)portKey;
- (void)setPortKey:(id)fp8;
- (id)port;
- (void)setPort:(id)fp8;
@end

@interface QCKeyFrameList (Private)
- (void)_appendKeyFrame:(CDAnonymousStruct9)fp8;
- (int)_insertKeyFrame:(CDAnonymousStruct9)fp8;
- (void)_invalidateBezierPathsForKeyFrame:(int)fp8;
- (CDAnonymousStruct9 *)_keyFrameAtIndex:(int)fp8;
- (id)_keyFramesCache;
- (id)_keyFrames;
@end
