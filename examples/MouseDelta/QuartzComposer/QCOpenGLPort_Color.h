#import <QCProtocols.h>
#import <QCColorPort.h>

@interface QCOpenGLPort_Color : QCColorPort <QCOpenGLPort>
{
    void *_unused4[4];
}

- (void)setOnOpenGLContext:(id)fp8;
- (void)unsetOnOpenGLContext:(id)fp8;
- (void)setPrimaryOnOpenGLContext:(id)fp8;

@end

