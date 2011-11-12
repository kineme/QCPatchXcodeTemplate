@interface QCCircularSlider : NSSlider
{
	double _realValue;	// 92 = 0x5c
	double _scale;	// 100 = 0x64
}

+ (void)initialize;
+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)fp8;
- (void)_sliderAction:(id)sender;
- (id)initWithFrame:(NSRect)frameRect;
- (id)initWithFrame:(NSRect)frameRect scale:(double)scale;
- (void)setValue:(id)fp8 forKey:(id)fp12;
- (id)valueForKey:(id)fp8;
@end
