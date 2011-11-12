typedef enum
{
	// some of these names are embedded in exception strings
	kQCProgrammableType_Skip = 0,	// skip
	kQCProgrammableType_Bool = 1,	// QCBooleanPort
	kQCProgrammableType_Index = 2,	// QCIndexPort
	kQCProgrammableType_Number = 3,	// QCNumberPort
	kQCProgrammableType_Color = 4,	// QCColorPort
	kQCProgrammableType_String = 5,	// QCStringPort
	kQCProgrammableType_Image = 6,	// QCImagePort
	kQCProgrammableType_Structure = 7,	// QCStructurePort
	kQCProgrammableType_Virtual = 8,	// QCVirtualPort
	kQCProgrammableNumTypes = 8,	// TODO: this was probably extended on 10.6 -- add additional types as discovered
} QCProgrammableType;

@interface QCParameterInfo : NSObject
{
	QCProgrammableType type;	// 4 = 0x4
	NSUInteger size;	// 8 = 0x8
}

+ (id)skipParameter;
// type is one of the above, size is the number of ports (normally 1)
+ (QCParameterInfo *)infoWithType:(QCProgrammableType)type size:(NSUInteger)size;
- (QCParameterInfo *)initWithType:(QCProgrammableType)type size:(NSUInteger)size;
- (BOOL)isEqualTo:(QCParameterInfo *)otherParameterInfo;

@end
