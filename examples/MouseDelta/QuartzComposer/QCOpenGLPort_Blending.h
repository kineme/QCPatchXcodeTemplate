#import <QCProtocols.h>
#import <QCIndexPort.h>

@interface QCOpenGLPort_Blending : QCIndexPort <QCOpenGLPort>
{
    unsigned char _enabled;
    int _sourceFunction;
    int _destFunction;
    void *_unused4[4];
}

- (id)initWithNode:(id)fp8 arguments:(id)fp12;
- (void)setOnOpenGLContext:(id)fp8;
- (void)unsetOnOpenGLContext:(id)fp8;

@end

