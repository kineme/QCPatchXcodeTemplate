// TODO: these aren't really void (void) functions -- need to spend some time working out what they really take/return.
// TODO: find functions added in 10.6

void GFArrayFromArgumentList(void);
NSArray *GFBacktrace(void);
void GFDebug(void);
int GFDebuggingLevel(void);	// returns UserDefaults value GFDebuggingLevel
void GFException(void);
void GFFilterStringsWithKeywords(void);
void GFGetDebugMessageCallback(void);
void GFGetLogMessageCallback(void);
void GFKeywordsFromSearchString(void);
void GFLog(NSString*format, ...);
void GFNameForNode(void);
void GFNameForPort(void);
void GFSetDebugMessageCallback(void);
void GFSetLogMessageCallback(void);
void GFThrowException(void);

void QCAddCompositionTrackToMovie(void);
void QCAddXMLElementsToStructure(void);
void QCAppendCompositionSampleToTrack(void);
void QCCompositionCompliesToProtocol(void);
void QCCompositionFromData(void);
void QCCompositionFromFile(void);
void QCCompositionFromMovieFile(void);
void QCCompositionFromPatch(void);
void QCCompositionToData(void);
void QCCompositionToFile(void);
void QCCompositionToMovieFile(void);
void QCCompositionsFromMovieFile(void);
void QCComputeAspectRatioBounds(void);
void QCComputeProportionalBounds(void);
void QCCountCompositionTracksInMovie(void);
void QCDataFromComposition(void);
void QCFileIsComposition(void);
void QCGLExtensionSupported(void);

void QCGLMakeTransformationMatrix(CGFloat*,CGFloat xRotation,CGFloat yRotation,CGFloat zRotation,CGFloat xTranslation,CGFloat yTranslation,CGFloat zTranslation);

void QCGetCompositionTrackAtIndex(void);
void QCGetIndexedColorSpace(void);
double QCHostTime(void);
void QCInfoFromComposition(void);

void QCMD5FromData(void);
void QCMD5FromString(void);
void QCMD5ToData(void);
void QCMD5ToString(void);
void QCMD5WithBytes(void);
void QCMD5WithColorSpace(void);
void QCMD5WithDoubles(void);
void QCMD5WithIntegers(void);
void QCMD5WithObject(void);
void QCMD5WithPointer(void);
void QCMD5WithString(void);

void QCMatrix_Clear(CGFloat[16]);
void QCMatrix_ConcatenateWithMatrix(void);
void QCMatrix_Copy(void);
void QCMatrix_Determinant(void);
void QCMatrix_GetRotationAngles(void);
void QCMatrix_GetRotationAxisAndAngle(void);
void QCMatrix_GetVectorW(void);
void QCMatrix_GetVectorX(void);
void QCMatrix_GetVectorY(void);
void QCMatrix_GetVectorZ(void);
void QCMatrix_IsIdentity(void);
void QCMatrix_MultiplyByMatrix(void);
void QCMatrix_Negate(void);
void QCMatrix_RotateVector(void);
void QCMatrix_SetRotationAroundAxisX(void);
void QCMatrix_SetRotationAroundAxisY(void);
void QCMatrix_SetRotationAroundAxisZ(void);
void QCMatrix_SetRotationFromAngles(void);
void QCMatrix_SetRotationFromAxisAndAngle(void);
void QCMatrix_SetRotationFromVectors(void);
void QCMatrix_SetScale(void);
void QCMatrix_SetScaleUniform(void);
void QCMatrix_SetTranslation(void);
void QCMatrix_TransformVector(void);

void QCPatchFromComposition(void);
void QCPatchFromCompositionWithOptions(void);
void QCPatchToComposition(void);
void QCPatchToFlattenedComposition(void);

void QCPathFromState(void);

void QCProFX(void);
void QCProFXRegisterAllocationCallbacks(void);

void QCQuaternion_Add(void);
void QCQuaternion_Clear(QCVector4*);
void QCQuaternion_Conjugate(void);
void QCQuaternion_Copy(void);
void QCQuaternion_Divide(void);
void QCQuaternion_Dot(void);
void QCQuaternion_Exp(void);
void QCQuaternion_GetMatrix(void);
void QCQuaternion_GetRotationAngles(void);
void QCQuaternion_GetRotationAxisAndAngle(void);
void QCQuaternion_Inverse(void);
void QCQuaternion_Length(void);
void QCQuaternion_LinearInterpolation(void);
void QCQuaternion_Log(void);
void QCQuaternion_LogDifference(void);
void QCQuaternion_Multiply(void);
void QCQuaternion_Normalize(void);
void QCQuaternion_ScaleAngle(void);
void QCQuaternion_SetFromMatrix(void);
void QCQuaternion_SetFromRotationAngles(void);
void QCQuaternion_SetFromRotationAxisAndAngle(void);
void QCQuaternion_SetFromVectors(void);
void QCQuaternion_SphericalLinearInterpolation(void);
void QCQuaternion_Square(void);
void QCQuaternion_SquareRoot(void);
void QCQuaternion_Substract(void);	// Not actually used in QC (!)

void QCResolveAliasPath(void);
void QCRestorePatchInputParameters(void);
void QCSavePatchInputParameters(void);
void QCStateFromPath(void);

void QCVector_Add(QCVector3 *u, QCVector3 *v, QCVector3 *result);	// Not actually used in QC (!)
void QCVector_CrossProduct(QCVector3 *u, QCVector3 *v, QCVector3 *result);
double QCVector_DotProduct(QCVector3 *u, QCVector3 *v);
double QCVector_Length(QCVector3 *vector);
void QCVector_LinearInterpolation(void);	// Not actually used in QC (!)
void QCVector_Normalize(QCVector3 *vector);	// Not actually used in QC (!)
void QCVector_Scale(CGFloat scale, QCVector3 *vector, QCVector3 *result);
void QCVector_Substract(QCVector3 *u, QCVector3 *v, QCVector3 *result);	// Not actually used in QC (!)

void QCVisualizerIPCClient_End(void);
void QCVisualizerIPCClient_GetAudioInformation(void);
void QCVisualizerIPCClient_IsRunning(void);
void QCVisualizerIPCClient_Start(void);
void QCVisualizerIPCServer_End(void);
void QCVisualizerIPCServer_HasClients(void);
void QCVisualizerIPCServer_IsRunning(void);
void QCVisualizerIPCServer_SendAudioInformation(void);
void QCVisualizerIPCServer_SendTrackInformation(void);
void QCVisualizerIPCServer_Start(void);
