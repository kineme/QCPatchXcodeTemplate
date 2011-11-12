#import "QCNumberPort.h"

@interface QCScaledNumberPort : QCNumberPort
{
	int scalingMode;	// 144 = 0x90
	double minValue;	// 148 = 0x94
	double maxValue;	// 156 = 0x9c
	double sliderMinValue;	// 164 = 0xa4
	double sliderMaxValue;	// 172 = 0xac
}
@end
