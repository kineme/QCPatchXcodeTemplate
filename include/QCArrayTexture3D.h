
#import "QCArray.h"

@class QCCGLContext;

@interface QCArrayTexture3D : QCArray
{
	GLuint _name;	// 48 = 0x30
	NSUInteger _width;	// 52 = 0x34
	NSUInteger _height;	// 56 = 0x38
	NSUInteger _depth;	// 60 = 0x3c
	QCCGLContext *_context;	// 64 = 0x40
	void *_unused2[4];	// 68 = 0x44
}
@property (readonly,assign) QCCGLContext *context;
@property (readonly,assign) GLuint name;

- (id)initWithContext:(id)fp8 baseAddress:(void *)fp12 releaseCallback:(void *)fp16 releaseInfo:(void *)fp20 width:(NSUInteger)fp24 height:(NSUInteger)fp28 depth:(NSUInteger)fp32 elementSize:(NSUInteger)fp36 type:(int)fp40 options:(id)fp44;
- (id)initWithContext:(id)fp8 width:(NSUInteger)fp12 height:(NSUInteger)fp16 depth:(NSUInteger)fp20 elementSize:(NSUInteger)fp24 type:(int)fp28 options:(id)fp32;
- (id)initWithArray:(id)fp8 context:(id)fp12 width:(NSUInteger)fp16 height:(NSUInteger)fp20 depth:(NSUInteger)fp24 elementSize:(NSUInteger)fp28 type:(int)fp32 options:(id)fp36;
- (void)finalize_QCArrayTexture3D;
- (void)dealloc;
- (void)finalize;
- (NSUInteger)byteSize;
- (QCCGLContext*)context;
- (GLuint)name;

@end

@interface QCArrayTexture3D (Extensions)
- (void)bindTexture3DToContext:(id)fp8 textureUnit:(GLuint)fp12 savedState:(CDAnonymousStruct5 *)fp16 enableTexture:(BOOL)fp20;
- (void)bindTexture3DToContext:(id)fp8 textureUnit:(GLuint)fp12 savedState:(CDAnonymousStruct5 *)fp16;
- (void)unbindTexture3DFromContext:(id)fp8 textureUnit:(GLuint)fp12 savedState:(CDAnonymousStruct5 *)fp16 enableTexture:(BOOL)fp20;
- (void)unbindTexture3DFromContext:(id)fp8 textureUnit:(GLuint)fp12 savedState:(CDAnonymousStruct5 *)fp16;
@end
