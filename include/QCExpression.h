@interface QCExpression : QCProgrammablePatch
{
	QCNumberPort *outputResult;	// 196 = 0xc4
	QCMathematicalExpression *_evaluator;	// 200 = 0xc8
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)fp8;
+ (NSArray*)sourceTypes;
- (void)dealloc;
- (void)setSource:(id)fp8 ofType:(NSString*)sourceType;
- (NSDictionary*)compileSourceOfType:(NSString*)sourceType;
- (BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)args;

@end

@interface QCExpression (QCInspector)
+ (Class)inspectorClassWithIdentifier:(id)fp8;
@end
