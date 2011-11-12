#import "QCParameterInfo.h"

@interface GLSLParameterInfo : QCParameterInfo
{
	GLint location;	// 12 = 0xc
}

// size is number of ports (normally 1)
+ (id)infoWithType:(QCProgrammableType)type size:(NSUInteger)size location:(GLint)location;
- (BOOL)isEqualTo:(GLSLParameterInfo*)otherParameterInfo;
@end
