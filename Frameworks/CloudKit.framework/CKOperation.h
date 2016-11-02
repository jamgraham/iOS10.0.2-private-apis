/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKOperation : NSOperation <ICLoggable> {
    NSDictionary * _MMCSRequestOptions;
    NSDictionary * _additionalRequestHTTPHeaders;
    bool  _allowsBackgroundNetworking;
    bool  _allowsCellularAccess;
    NSString * _authPromptReason;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSObject<OS_voucher> * _clientVoucher;
    CKContainer * _container;
    id  _context;
    NSString * _deviceIdentifier;
    NSError * _error;
    bool  _isDiscretionary;
    NSObject<OS_os_transaction> * _isExecuting;
    bool  _isFinished;
    bool  _isOutstandingOperation;
    bool  _longLived;
    id /* block */  _longLivedOperationWasPersistedBlock;
    CKOperationMetrics * _metrics;
    NSString * _operationID;
    NSObject<OS_os_activity> * _osActivity;
    NSString * _parentSectionID;
    CKPlaceholderOperation * _placeholderOperation;
    bool  _preferAnonymousRequests;
    NSArray * _requestUUIDs;
    NSDictionary * _responseHTTPHeadersByRequestUUID;
    NSString * _sectionID;
    NSString * _sourceApplicationBundleIdentifier;
    NSString * _sourceApplicationSecondaryIdentifier;
    CKTimeLogger * _timeLogger;
    double  _timeoutIntervalForRequest;
    double  _timeoutIntervalForResource;
    NSObject<OS_dispatch_source> * _timeoutSource;
    long long  _usesBackgroundSessionOverride;
    NSDictionary * _w3cNavigationTimingByRequestUUID;
}

@property (nonatomic, retain) NSDictionary *MMCSRequestOptions;
@property (nonatomic, retain) NSDictionary *additionalRequestHTTPHeaders;
@property (nonatomic) bool allowsBackgroundNetworking;
@property (nonatomic) bool allowsCellularAccess;
@property (nonatomic, retain) NSString *authPromptReason;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) CKContainer *container;
@property (nonatomic, readonly) id context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *deviceIdentifier;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isDiscretionary;
@property (nonatomic) bool isExecuting;
@property (nonatomic) bool isFinished;
@property (nonatomic) bool isOutstandingOperation;
@property (getter=isLongLived, nonatomic) bool longLived;
@property (nonatomic, copy) id /* block */ longLivedOperationWasPersistedBlock;
@property (nonatomic, retain) CKOperationMetrics *metrics;
@property (nonatomic, copy) NSString *operationID;
@property (nonatomic, readonly) CKOperationInfo *operationInfo;
@property (nonatomic, readonly) NSString *parentSectionID;
@property (nonatomic, retain) CKPlaceholderOperation *placeholderOperation;
@property (nonatomic) bool preferAnonymousRequests;
@property (nonatomic, retain) NSArray *requestUUIDs;
@property (nonatomic, retain) NSDictionary *responseHTTPHeadersByRequestUUID;
@property (nonatomic, retain) NSString *sectionID;
@property (nonatomic, retain) NSString *sourceApplicationBundleIdentifier;
@property (nonatomic, retain) NSString *sourceApplicationSecondaryIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKTimeLogger *timeLogger;
@property (nonatomic) double timeoutIntervalForRequest;
@property (nonatomic) double timeoutIntervalForResource;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timeoutSource;
@property (nonatomic) bool usesBackgroundSession;
@property (nonatomic) long long usesBackgroundSessionOverride;
@property (nonatomic, retain) NSDictionary *w3cNavigationTimingByRequestUUID;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (id)CKPropertiesDescription;
- (id)MMCSRequestOptions;
- (void)_finishInternalOnCallbackQueueWithError:(id)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCheckpointCallback:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)_installTimeoutSource;
- (void)_start;
- (void)_uninstallTimeoutSource;
- (id)activityCreate;
- (id)additionalRequestHTTPHeaders;
- (bool)allowsBackgroundNetworking;
- (bool)allowsCellularAccess;
- (id)authPromptReason;
- (id)callbackQueue;
- (void)cancel;
- (id)container;
- (id)context;
- (id)daemon;
- (void)dealloc;
- (id)description;
- (id)deviceIdentifier;
- (id)error;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)finishWithError:(id)arg1;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (bool)isConcurrent;
- (bool)isDiscretionary;
- (bool)isExecuting;
- (bool)isFinished;
- (bool)isLongLived;
- (bool)isOutstandingOperation;
- (id /* block */)longLivedOperationWasPersistedBlock;
- (void)main;
- (id)metrics;
- (Class)operationClass;
- (id)operationID;
- (id)operationInfo;
- (Class)operationInfoClass;
- (id)osActivity;
- (id)parentSectionID;
- (void)performCKOperation;
- (id)placeholderOperation;
- (bool)preferAnonymousRequests;
- (void)processOperationResult:(id)arg1;
- (id)requestUUIDs;
- (id)responseHTTPHeadersByRequestUUID;
- (id)sectionID;
- (void)setAdditionalRequestHTTPHeaders:(id)arg1;
- (void)setAllowsBackgroundNetworking:(bool)arg1;
- (void)setAllowsCellularAccess:(bool)arg1;
- (void)setAuthPromptReason:(id)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setError:(id)arg1;
- (void)setIsDiscretionary:(bool)arg1;
- (void)setIsExecuting:(bool)arg1;
- (void)setIsFinished:(bool)arg1;
- (void)setIsOutstandingOperation:(bool)arg1;
- (void)setLongLived:(bool)arg1;
- (void)setLongLivedOperationWasPersistedBlock:(id /* block */)arg1;
- (void)setMMCSRequestOptions:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)setOperationID:(id)arg1;
- (void)setPlaceholderOperation:(id)arg1;
- (void)setPreferAnonymousRequests:(bool)arg1;
- (void)setRequestUUIDs:(id)arg1;
- (void)setResponseHTTPHeadersByRequestUUID:(id)arg1;
- (void)setSectionID:(id)arg1;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setSourceApplicationSecondaryIdentifier:(id)arg1;
- (void)setTimeLogger:(id)arg1;
- (void)setTimeoutIntervalForRequest:(double)arg1;
- (void)setTimeoutIntervalForResource:(double)arg1;
- (void)setTimeoutSource:(id)arg1;
- (void)setUsesBackgroundSession:(bool)arg1;
- (void)setUsesBackgroundSessionOverride:(long long)arg1;
- (void)setW3cNavigationTimingByRequestUUID:(id)arg1;
- (id)sourceApplicationBundleIdentifier;
- (id)sourceApplicationSecondaryIdentifier;
- (void)start;
- (id)timeLogger;
- (double)timeoutIntervalForRequest;
- (double)timeoutIntervalForResource;
- (id)timeoutSource;
- (bool)usesBackgroundSession;
- (long long)usesBackgroundSessionOverride;
- (id)w3cNavigationTimingByRequestUUID;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (id)ic_loggingIdentifier;
- (id)ic_loggingValues;
- (void)ic_removeAllCompletionBlocks;

@end
