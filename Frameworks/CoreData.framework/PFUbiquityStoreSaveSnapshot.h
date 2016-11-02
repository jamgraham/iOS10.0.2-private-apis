/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityStoreSaveSnapshot : NSObject {
    NSMutableDictionary * _deletedObjects;
    NSMutableDictionary * _entityNameToIndex;
    NSMutableArray * _entityNames;
    NSString * _exportingPeerID;
    NSArray * _filesDeletedInTransaction;
    NSMutableArray * _filesInsertedInTransaction;
    PFUbiquityGlobalObjectIDCache * _gidCache;
    NSMutableDictionary * _globalObjectIDToIndex;
    NSMutableDictionary * _globalObjectIDToPermanentManagedObjectID;
    NSMutableArray * _globalObjectIDs;
    NSMutableDictionary * _insertedObjects;
    NSString * _localPeerID;
    NSMutableDictionary * _managedObjectIDToGlobalObjectID;
    NSMutableDictionary * _peerIDToIndex;
    NSMutableArray * _peerIDs;
    NSMutableDictionary * _peerStates;
    NSMutableDictionary * _primaryKeyToIndex;
    NSMutableArray * _primaryKeys;
    NSObject<OS_dispatch_queue> * _queue;
    PFUbiquityKnowledgeVector * _storeKV;
    NSDictionary * _storeOptions;
    NSNumber * _transactionNumber;
    NSMutableDictionary * _updatedObjects;
}

@property (nonatomic, readonly) NSDictionary *deletedObjects;
@property (nonatomic, readonly) NSDictionary *entityNameToIndex;
@property (nonatomic, readonly) NSArray *entityNames;
@property (nonatomic, retain) NSString *exportingPeerID;
@property (nonatomic, retain) PFUbiquityGlobalObjectIDCache *globalObjectIDCache;
@property (nonatomic, readonly) NSDictionary *globalObjectIDToIndex;
@property (nonatomic, readonly) NSDictionary *globalObjectIDToPermanentManagedObjectID;
@property (nonatomic, readonly) NSArray *globalObjectIDs;
@property (nonatomic, readonly) NSDictionary *insertedObjects;
@property (nonatomic, retain) NSString *localPeerID;
@property (nonatomic, readonly) NSDictionary *managedObjectIDToGlobalObjectID;
@property (nonatomic, readonly) NSDictionary *peerIDToIndex;
@property (nonatomic, readonly) NSArray *peerIDs;
@property (nonatomic, readonly) NSDictionary *peerStates;
@property (nonatomic, readonly) NSDictionary *primaryKeyToIndex;
@property (nonatomic, readonly) NSArray *primaryKeys;
@property (nonatomic, retain) PFUbiquityKnowledgeVector *storeKV;
@property (nonatomic, retain) NSNumber *transactionNumber;
@property (nonatomic, readonly) NSDictionary *updatedObjects;

- (void)_setFilesDeletedInTransaction:(id)arg1;
- (id)addManagedObject:(id)arg1 withTransactionType:(int)arg2 andStoreExportContext:(id)arg3 withError:(id*)arg4;
- (id)checkIndecies:(id)arg1;
- (id)checkIndex:(id)arg1 forValue:(id)arg2 fromArrayOfValues:(id)arg3;
- (id)compressedGlobalObjectIDFromGlobalObjectID:(id)arg1;
- (id)createKnowledgeVectorFromPeerStates;
- (id)createUbiquityDictionary:(id)arg1 withStoreExportContext:(id)arg2 error:(id*)arg3;
- (void)dealloc;
- (id)deletedObjects;
- (id)description;
- (id)entityNameToIndex;
- (id)entityNames;
- (id)exportingPeerID;
- (id)filesDeletedInTransaction;
- (id)filesInsertedInTransaction;
- (void)finishGlobalIDReplacement;
- (void)generatePeerStates;
- (id)globalObjectIDCache;
- (id)globalObjectIDForManagedObject:(id)arg1 withStoreExportContext:(id)arg2;
- (id)globalObjectIDFromCompressedObjectID:(id)arg1;
- (id)globalObjectIDToIndex;
- (id)globalObjectIDToPermanentManagedObjectID;
- (id)globalObjectIDs;
- (id)init;
- (id)initForExport:(id)arg1;
- (id)initWithExportingPeerID:(id)arg1;
- (id)insertedObjects;
- (id)localPeerID;
- (id)managedObjectIDToGlobalObjectID;
- (id)noSyncCheckIndex:(id)arg1 forValue:(id)arg2 fromArrayOfValues:(id)arg3;
- (id)peerIDToIndex;
- (id)peerIDs;
- (id)peerStates;
- (void)prepareForGlobalIDReplacement;
- (id)primaryKeyToIndex;
- (id)primaryKeys;
- (void)replaceGlobalObjectID:(id)arg1 withGlobalObjectID:(id)arg2;
- (void)reserveTransactionNumberWithStoreExportContext:(id)arg1;
- (void)resetFromOptimisticLockingException;
- (void)setDeletedObjects:(id)arg1;
- (void)setEntityNames:(id)arg1 globalObjectIDs:(id)arg2 primaryKeys:(id)arg3 forStoreName:(id)arg4 withRootLocation:(id)arg5;
- (void)setExportingPeerID:(id)arg1;
- (void)setGlobalObjectIDCache:(id)arg1;
- (void)setInsertedObjects:(id)arg1;
- (void)setLocalPeerID:(id)arg1;
- (void)setStoreKV:(id)arg1;
- (void)setTransactionNumber:(id)arg1;
- (void)setTransactionNumber:(id)arg1 peerStates:(id)arg2 andPeerIDs:(id)arg3;
- (void)setUpdatedObjects:(id)arg1;
- (id)storeKV;
- (id)transactionNumber;
- (id)transactionNumberFromPeerStates:(id)arg1;
- (id)updatedObjects;

@end
