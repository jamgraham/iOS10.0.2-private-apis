/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLFetchRequestContext : NSSQLStoreRequestContext {
    NSMutableArray * _concurrentFetchingPipelineRows;
    NSString * _externalDataLinksDirectory;
    NSString * _externalDataReferencesDirectory;
    NSFaultHandler * _faultHandler;
    _PFFetchPlanHeader * _fetchPlan;
    int  _fileProtectionLevel;
    bool  _isFaultRequest;
    NSMutableSet * _objectIDsToRegister;
    NSMutableSet * _objectsToAwaken;
    NSFetchRequest * _originalRequest;
    NSSQLFetchRequestContext * _parentContext;
    NSDictionary * _prefetchingSubstitutionVariables;
    NSMutableArray * _resultFaultsThatWereFired;
    bool  _shouldUseBatches;
    NSSQLEntity * _sqlEntity;
    NSSQLModel * _sqlModel;
    NSSQLiteStatement * _statement;
    bool  _statementInitialized;
    bool  _storeIsUbiquitized;
}

@property (nonatomic, readonly) NSString *externalDataLinksDirectory;
@property (nonatomic, readonly) NSString *externalDataReferencesDirectory;
@property (nonatomic, readonly) NSFaultHandler *faultHandler;
@property (nonatomic, readonly, retain) NSArray *faultsThatWereFired;
@property (nonatomic, readonly) _PFFetchPlanHeader *fetchPlan;
@property (nonatomic, readonly) NSSQLiteStatement *fetchStatement;
@property (nonatomic, readonly) int fileProtectionLevel;
@property (nonatomic) bool isFaultRequest;
@property (nonatomic, readonly) NSArray *objectIDsToRegisterWithContext;
@property (nonatomic, readonly) NSArray *objectsToAwaken;
@property (nonatomic, readonly) NSFetchRequest *originalRequest;
@property (nonatomic, readonly) NSSQLFetchRequestContext *parentContext;
@property (nonatomic, retain) NSDictionary *prefetchingSubstitutionVariables;
@property (nonatomic, readonly) NSFetchRequest *request;
@property (nonatomic, readonly) bool shouldUseBatches;
@property (nonatomic, readonly) NSSQLEntity *sqlEntityForFetchRequest;
@property (nonatomic, readonly) NSSQLModel *sqlModel;
@property (nonatomic, readonly) bool storeIsUbiquitized;

- (id)_createStatement;
- (void)_fireFaultsForValue:(id)arg1;
- (void)_preparePredicate:(id)arg1;
- (void)_setFetchStatement:(id)arg1;
- (void)_setupBindVariablesForCachedStatement:(id)arg1 usingValues:(id)arg2;
- (void)addFaultsThatWereFired:(id)arg1;
- (void)addObjectIDsToRegister:(id)arg1;
- (void)addObjectsToAwaken:(id)arg1;
- (void)cacheStatement:(id)arg1;
- (id)cachedStatement;
- (id)createChildContextForNestedFetchRequest:(id)arg1;
- (void)dealloc;
- (void)executeEpilogue;
- (void)executePrologue;
- (void)executeRequestUsingConnection:(id)arg1;
- (id)externalDataLinksDirectory;
- (id)externalDataReferencesDirectory;
- (id)faultHandler;
- (id)faultsThatWereFired;
- (id)fetchPlan;
- (id)fetchStatement;
- (int)fileProtectionLevel;
- (id)initWithRequest:(id)arg1 connection:(id)arg2 context:(id)arg3 sqlCore:(id)arg4 parentContext:(id)arg5;
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
- (bool)isFaultRequest;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
- (Class)objectIDFactoryForSQLEntity:(id)arg1;
- (id)objectIDsToRegisterWithContext;
- (id)objectsToAwaken;
- (id)originalRequest;
- (id)parentContext;
- (void)persistRows:(id)arg1;
- (id)prefetchingSubstitutionVariables;
- (id)request;
- (void)setIsFaultRequest:(bool)arg1;
- (void)setPrefetchingSubstitutionVariables:(id)arg1;
- (bool)shouldUseBatches;
- (id)sqlEntityForFetchRequest;
- (id)sqlModel;
- (bool)storeIsUbiquitized;
- (id)ubiquitousExternalReferenceLocationForUUID:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;

@end
