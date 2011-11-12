@interface HelloWorld : QCPatch
{
	QCBooleanPort *inputBool;
	QCStringPort *outputString;
}

+(BOOL)isSafe;
+(BOOL)allowsSubpatchesWithIdentifier:(id)identifier;
+(int)executionModeWithIdentifier:(id)identifier;
+(int)timeModeWithIdentifier:(id)identifier;
-(id)initWithIdentifier:(id)identifier;
-(BOOL)setup:(QCOpenGLContext*)context;
-(void)cleanup:(QCOpenGLContext*)context;
-(void)enable:(QCOpenGLContext*)context;
-(void)disable:(QCOpenGLContext*)context;
-(BOOL)execute:(QCOpenGLContext*)context time:(double)time arguments:(NSDictionary*)arguments;

@end
