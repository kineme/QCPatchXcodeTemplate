#import "QCGraphicsRenderState.h"

@interface QCOpenGLRenderState : QCGraphicsRenderState
{
	int currentVirtualScreen;	// 156 = 0x9c
	float currentFieldOfView;	// 160 = 0xa0
	float saveFieldOfView;	// 164 = 0xa4
	BOOL saveFlipped;	// 168 = 0xa8
	BOOL saveResetMatrices;	// 169 = 0xa9
	int saveFace;	// 172 = 0xac
	int saveMode;	// 176 = 0xb0
	CGFloat saveModelView[16];	// 180 = 0xb4
	CGFloat saveProjection[16];	// 244 = 0xf4
	int saveScissorFrame[4];	// 308 = 0x134
	BOOL saveScissorEnabled;	// 324 = 0x144
}

- (id)initWithContext:(id)fp8 patch:(id)fp12;
@end
