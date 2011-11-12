

@class QCArrayBufferObject, QCArray, QCStream;

struct GFNodeInfo {
	NSString *_field1;
	id _field2;
	SEL _field3;
	SEL _field4;
	id _field5;
	NSDictionary *_field6;
};

struct QCResourceInfo;

typedef struct _BackgroundInfo {
	NSColor *_field1;
	unsigned int _field2;
	float _field3;
	float _field4;
	unsigned int _field5;
	char _field6;
} BackgroundInfo;

// This is private (but publicly declared in darwin source)
//typedef struct __CFRuntimeBase CFRuntimeBase;

// until CFRuntimeBase is defined, we just use an anonymous struct
struct _QCC3DMesh;/* {
	CFRuntimeBase _field1;
	struct __C3DMesh *_field2;
	QCArrayBufferObject *_field3[26];
	unsigned int _field4;
};*/

typedef struct _QCCacheProfileInfo {
	unsigned int _field1;
	unsigned int _field2;
} QCCacheProfileInfo;

typedef struct _QCContactInfo {
	float x;
	float y;
	float prev_x;
	float prev_y;
	int state;
} QCContactInfo;

struct _QCDod;

typedef struct _QCExecutionArray {
	struct {
	} **_field1;
	unsigned int _field2;
	unsigned int _field3;
} QCExecutionArray;

typedef struct _QCExecutionStride {
	unsigned int *_field1;
	unsigned int _field2;
	unsigned int _field3;
	unsigned int _field4;
} QCExecutionStride;

typedef struct _QCIterationManager {
	QCArray *_field1;
	QCArray *_field2;
	unsigned int _field3;
	unsigned int _field4;
	unsigned int _field5;
	unsigned int _field6;
} QCIterationManager;

typedef struct _QCIterationStack {
	unsigned int *_field1;
	unsigned int *_field2;
	unsigned int _field3;
	unsigned int _field4;
	unsigned int _field5;
} QCIterationStack;

typedef struct _QCMeshBoundingBox {
	struct {
		float _field1;
		float _field2;
		float _field3;
	} _field1;
	struct {
		float _field1;
		float _field2;
		float _field3;
	} _field2;
} QCMeshBoundingBox;

typedef struct _QCMeshInternal {
	QCStream *_field1[5];
	union {
		float componentSize;
		struct {
			unsigned int width;
			unsigned int height;
			unsigned int depth;
		} volumeSize;
	} _field2;
} QCMeshInternal;

typedef struct _QCPatchExecutionInfo {
	double _field1;
	unsigned int _field2;
	double _field3;
	double _field4;
	QCArray *_field5;
	char _field6;
	char _field7;
} QCPatchExecutionInfo;

struct __C3DEngineContext;
struct __C3DImage;
struct __C3DMesh;
struct __C3DTextureSampler;

struct __Spline {
	double *_field1;
	double *_field2;
	int _field3;
	double *_field4;
	int _field5;
	int _field6;
};

typedef struct {
	unsigned char bytes[16];
} QCMD5Sum;

typedef struct {
	int saveSize;
	int saveType;
	int saveStride;
	unsigned char saveEnabled;
	unsigned char ptrHasChanged;
	void *savePointer;
	void *unused[4];
} CDAnonymousStruct2;

typedef struct {
	float x;
	float y;
	float z;
} QCVector3;

typedef struct {
	unsigned char _field1;
	int _field2;
	int _field3;
	void *_field4[4];
} CDAnonymousStruct5;

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
} CDAnonymousStruct7;

typedef struct {
	double _field1;
	double _field2;
} CDAnonymousStruct8;

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
} CDAnonymousStruct9;

typedef struct {
	float x;
	float y;
	float z;
	float w;
} QCVector4;

typedef struct {
	char useMatrix;
	unsigned char wasEnabled;
	int boundTexture;
	void *unused[4];
} CDAnonymousStruct12;

