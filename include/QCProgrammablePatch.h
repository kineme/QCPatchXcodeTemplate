// sourceType is a string, like @"vertexShader" or @"expression"

@interface QCProgrammablePatch : QCPatch
{
	NSMutableDictionary *_sources;	// 156 = 0x9c
	NSMutableDictionary *_compileStatus;	// 160 = 0xa0
	GFList *_parameterTypes;	// 164 = 0xa4
	NSMutableArray *_parameterPorts;	// 168 = 0xa8
	GFList *_resultTypes;	// 172 = 0xac
	NSMutableArray *_resultPorts;	// 176 = 0xb0
	void *_unused4[4];	// 180 = 0xb4
}

+ (id)allocWithZone:(NSZone *)zone;
+ (Class)portClassFromParameterInfo:(id)fp8;
+ (int)indicesType;
+ (NSArray *)sourceTypes; // array of NSStrings*
+ (id)stateKeysWithIdentifier:(id)fp8;
+ (id)serializedStateKeysWithIdentifier:(id)fp8;
- (BOOL)isSourceType:(NSString*)sourceType;
- (id)initWithIdentifier:(id)fp8;
- (void)dealloc;
- (id)valueForUndefinedKey:(id)fp8;
- (void)setValue:(id)fp8 forUndefinedKey:(id)fp12;
- (void)recompileSourceOfType:(NSString*)sourceType;
- (void)setSource:(id)fp8 ofType:(NSString*)sourceType;
- (id)sourceOfType:(NSString*)sourceType;
- (id)compileStatusForSourceOfType:(NSString*)sourceType;
- (NSDictionary*)compileSourceOfType:(NSString *)sourceType;
- (id)attributesForParameterPortWithInfo:(id)fp8 name:(NSString*)portName index:(NSUInteger)index;
- (id)attributesForResultPortWithInfo:(id)fp8 name:(NSString*)portName index:(NSUInteger)index;
- (BOOL)_updateTypes:(id)fp8 ports:(id)fp12 list:(id)fp16 direction:(int)fp20;
- (BOOL)setParameterList:(GFList *)parameterList;
- (GFList *)parameterList;
- (NSArray *)parameterPorts;
- (BOOL)setResultList:(GFList *)resultList;
- (GFList *)resultList;
- (NSArray *)resultPorts;
- (NSDictionary*)state;
- (BOOL)setState:(NSDictionary*)state;

#if MAC_OS_X_VERSION_MAX_ALLOWED >= 1060
+ (BOOL)isKeyValid:(id)fp8;
#endif

@end
