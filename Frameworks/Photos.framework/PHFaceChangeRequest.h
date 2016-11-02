/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHFaceChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest> {
    bool  _clientEntitled;
    NSString * _clientName;
    int  _clientProcessID;
    bool  _didSetFaceprint;
    PHFaceprint * _faceprint;
    PHChangeRequestHelper * _helper;
}

@property (nonatomic, copy) id adjustmentVersion;
@property (nonatomic) double blurScore;
@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (getter=isClientEntitled, nonatomic, readonly) bool clientEntitled;
@property (nonatomic, readonly) NSString *clientName;
@property (nonatomic, readonly) int clientProcessID;
@property (nonatomic) long long clusterSequenceNumber;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double expressionConfidence;
@property (nonatomic) double expressionScore1;
@property (nonatomic) double expressionScore2;
@property (nonatomic) double expressionScore3;
@property (nonatomic) long long expressionType1;
@property (nonatomic) long long expressionType2;
@property (nonatomic) long long expressionType3;
@property (nonatomic) long long faceAlgorithmVersion;
@property (nonatomic, retain) PHFaceprint *faceprint;
@property (nonatomic) bool hasSmile;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHChangeRequestHelper *helper;
@property (getter=isHidden, nonatomic) bool hidden;
@property (getter=isInTrash, nonatomic) bool inTrash;
@property (getter=isLeftEyeClosed, nonatomic) bool leftEyeClosed;
@property (nonatomic) double leftEyeX;
@property (nonatomic) double leftEyeY;
@property (nonatomic, readonly) NSString *managedEntityName;
@property (nonatomic) bool manual;
@property (nonatomic) double mouthX;
@property (nonatomic) double mouthY;
@property (getter=isMutated, readonly) bool mutated;
@property (nonatomic) long long nameSource;
@property (getter=isNew, readonly) bool new;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedFace;
@property (nonatomic) double posePitch;
@property (nonatomic) double poseRoll;
@property (nonatomic) double poseYaw;
@property (nonatomic) long long qualityMeasure;
@property (getter=isRightEyeClosed, nonatomic) bool rightEyeClosed;
@property (nonatomic) double rightEyeX;
@property (nonatomic) double rightEyeY;
@property (nonatomic) double size;
@property (nonatomic) long long sourceHeight;
@property (nonatomic) long long sourceWidth;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uuid;

+ (id)changeRequestForFace:(id)arg1;
+ (id)creationRequestForFace;
+ (void)deleteFaces:(id)arg1;

- (void).cxx_destruct;
- (id)adjustmentVersion;
- (bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3;
- (bool)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2;
- (double)blurScore;
- (bool)canGenerateUUIDLocally;
- (double)centerX;
- (double)centerY;
- (id)clientName;
- (int)clientProcessID;
- (long long)clusterSequenceNumber;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (void)didMutate;
- (void)encodeToXPCDict:(id)arg1;
- (double)expressionConfidence;
- (double)expressionScore1;
- (double)expressionScore2;
- (double)expressionScore3;
- (long long)expressionType1;
- (long long)expressionType2;
- (long long)expressionType3;
- (long long)faceAlgorithmVersion;
- (id)faceprint;
- (bool)hasSmile;
- (id)helper;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (bool)isClientEntitled;
- (bool)isHidden;
- (bool)isInTrash;
- (bool)isLeftEyeClosed;
- (bool)isMutated;
- (bool)isNew;
- (bool)isRightEyeClosed;
- (double)leftEyeX;
- (double)leftEyeY;
- (id)managedEntityName;
- (bool)manual;
- (double)mouthX;
- (double)mouthY;
- (id)mutations;
- (long long)nameSource;
- (id)objectID;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (id)placeholderForCreatedFace;
- (double)posePitch;
- (double)poseRoll;
- (double)poseYaw;
- (long long)qualityMeasure;
- (double)rightEyeX;
- (double)rightEyeY;
- (void)setAdjustmentVersion:(id)arg1;
- (void)setBlurScore:(double)arg1;
- (void)setCenterX:(double)arg1;
- (void)setCenterY:(double)arg1;
- (void)setClusterSequenceNumber:(long long)arg1;
- (void)setExpressionConfidence:(double)arg1;
- (void)setExpressionScore1:(double)arg1;
- (void)setExpressionScore2:(double)arg1;
- (void)setExpressionScore3:(double)arg1;
- (void)setExpressionType1:(long long)arg1;
- (void)setExpressionType2:(long long)arg1;
- (void)setExpressionType3:(long long)arg1;
- (void)setFaceAlgorithmVersion:(long long)arg1;
- (void)setFaceprint:(id)arg1;
- (void)setHasSmile:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setInTrash:(bool)arg1;
- (void)setLeftEyeClosed:(bool)arg1;
- (void)setLeftEyeX:(double)arg1;
- (void)setLeftEyeY:(double)arg1;
- (void)setManual:(bool)arg1;
- (void)setMouthX:(double)arg1;
- (void)setMouthY:(double)arg1;
- (void)setNameSource:(long long)arg1;
- (void)setPosePitch:(double)arg1;
- (void)setPoseRoll:(double)arg1;
- (void)setPoseYaw:(double)arg1;
- (void)setQualityMeasure:(long long)arg1;
- (void)setRightEyeClosed:(bool)arg1;
- (void)setRightEyeX:(double)arg1;
- (void)setRightEyeY:(double)arg1;
- (void)setSize:(double)arg1;
- (void)setSourceHeight:(long long)arg1;
- (void)setSourceWidth:(long long)arg1;
- (double)size;
- (long long)sourceHeight;
- (long long)sourceWidth;
- (id)uuid;
- (bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (bool)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2;

@end
