/* This header defines the generic types used throughout QC's internals */

#import <QuartzCore/CVBase.h>

typedef struct {
    unsigned char bytes[16];
} QCMD5Sum;	// CDA 9

typedef struct {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    float _field9;
    int _field10;
    float _field11;
    float _field12;
    float _field13;
    float _field14;
    float _field15;
    float _field16;
    float _field17;
    float _field18;
    float _field19;
    float _field20;
    float _field21;
    float _field22;
    float _field23;
} QCParticleStruct;	// CDA 10

typedef struct {
    unsigned int _field1;
    int _field2;
    long long _field3;
    unsigned long long _field4;
    double _field5;
    long long _field6;
    CVSMPTETime _field7;
    unsigned long long _field8;
    unsigned long long _field9;
} QCDisplayTime;	// CDA 3

typedef struct {
    float x;
    float y;
    float z;
    float w;
} QCVector4;	// CDA 4

typedef struct {
    float x;
    float y;
    float z;
} QCVector3; //CDAnonymousStruct5;

typedef struct {
    char useMatrix;
    unsigned char wasEnabled;
    int boundTexture;
    void *unused[4];
} QCOpenGLTextureState;	//CDAnonymousStruct7;

typedef struct {
    unsigned long _field1;
    id *_field2;
    unsigned long *_field3;
    unsigned long _field4[5];
} QCListState;	//CDAnonymousStruct8;

typedef struct {
    struct {
        double _field1;
        double _field2;
    } _field1;
    struct {
        double _field1;
        double _field2;
    } _field2;
    struct {
        double _field1;
        double _field2;
    } _field3;
    struct {
        char _field1;
        struct {
            double _field1;
            double _field2;
        } _field2[4];
        double _field3;
        double _field4;
        double _field5;
        double _field6;
        double _field7;
        double _field8;
    } _field4;
    char _field5;
    char _field6;
} QCKeyFrame;	//CDAnonymousStruct2;

typedef struct {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
} QCImageTransform;	//CDAnonymousStruct1;

