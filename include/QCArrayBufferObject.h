#import "QCArray.h"

@class QCCGLContext;

@interface QCArrayBufferObject : QCArray
{
	GLuint _vertexBuffer;	// 48 = 0x30
	GLuint _target;	// 52 = 0x34
	QCCGLContext *_context;	// 56 = 0x38
	void *_unused2[4];	// 60 = 0x3c
}
@property (readonly,assign) QCCGLContext *context;
@property (readonly,assign) GLuint target;
@property (readonly,assign) GLuint vertexBuffer;

- (id)initWithContext:(QCCGLContext*)context target:(GLuint)target count:(NSUInteger)count elementSize:(NSUInteger)size type:(int)type;
- (id)initWithVertexBufferObject:(GLint)vbo releaseCallback:(void *)callback releaseInfo:(void *)info context:(QCCGLContext*)context target:(GLuint)target count:(NSUInteger)count elementSize:(NSUInteger)size type:(int)type;
- (void)dealloc;
- (void *)array;
- (NSArray*)NSArrayRepresentation;
- (BOOL)beginUpdateArray;
- (void)endUpdateArray;
- (BOOL)beginRenderBuffer;
- (void)endRenderBuffer;
- (QCCGLContext*)context;
- (GLuint)target;
- (GLuint)vertexBuffer;

@end

@interface QCArrayBufferObject (Extensions)
- (void)bindArrayToContext:(id)fp8 clientState:(int)fp12 savedState:(CDAnonymousStruct2 *)fp16;
- (void)unbindArrayFromContext:(id)fp8 clientState:(int)fp12 savedState:(CDAnonymousStruct2 *)fp16;
@end
