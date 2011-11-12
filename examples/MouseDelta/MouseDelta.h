#import "QCPatch.h"
#import "QCOpenGLContext.h"

#import "QCNumberPort.h"


@interface MouseDelta : QCPatch
{
    QCNumberPort *outputDeltaX;
    QCNumberPort *outputDeltaY;
	QCNumberPort *outputXPosition;
	QCNumberPort *outputYPosition;
}

- (BOOL)execute:(QCOpenGLContext *)context time:(double)time arguments:(NSDictionary *)arguments;
@end