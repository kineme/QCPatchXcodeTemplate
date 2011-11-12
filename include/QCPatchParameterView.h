
#import "QCPatchParametersView.h"

@class QCCompositionParameterView;

@interface QCPatchParameterView : QCPatchParametersView
{
	QCCompositionParameterView *_compositionParameterView;	// 132 = 0x84
}

- (void)setCompositionParameterView:(id)fp8;
- (BOOL)isInputPortVisible:(id)fp8;
- (void)localizePortInfo:(id)fp8;

@end
