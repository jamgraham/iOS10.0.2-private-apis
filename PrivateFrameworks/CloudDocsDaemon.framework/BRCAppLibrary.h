/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCAppLibrary : NSObject <BRCForegroundClient> {
    NSMutableSet * _XPCClientsUsingUbiquity;
    unsigned long long  _activeAliasQueries;
    unsigned long long  _activeQueries;
    unsigned long long  _activeRecursiveQueries;
    NSString * _appLibraryID;
    NSString * _appLibraryIDAndOwner;
    BRCClientZone * _clientZone;
    BRCPQLConnection * _db;
    BRCALRowID * _dbRowID;
    NSNumber * _deepScanStamp;
    <BRCAppLibraryDelegate> * _delegate;
    NSNumber * _fileID;
    NSMutableSet * _foregroundClients;
    NSNumber * _generationID;
    NSString * _mangledID;
    long long  _maxLostStamp;
    bool  _needsSave;
    NSString * _ownerName;
    NSMutableIndexSet * _pendingCoordinatedIOs;
    NSMutableSet * _pendingReadFileCoordinators;
    NSMutableSet * _pendingWriteFileCoordinators;
    BRCAccountSession * _session;
    unsigned int  _state;
    NSMutableSet * _targetAppLibraries;
    NSObject<OS_dispatch_queue> * _targetAppLibraryQueue;
    brc_task_tracker * _tracker;
    BRCZoneRowID * _zoneRowID;
}

@property (nonatomic, readonly) NSString *absolutePath;
@property (nonatomic, readonly) NSString *appLibraryID;
@property (nonatomic, readonly) NSString *appLibraryIDAndOwner;
@property (nonatomic, readonly) BRCPrivateAppLibrary *asPrivateAppLibrary;
@property (nonatomic, readonly) BRCSharedAppLibrary *asSharedAppLibrary;
@property (nonatomic) BRCClientZone *clientZone;
@property (nonatomic, readonly) BRCPQLConnection *db;
@property (nonatomic, retain) BRCALRowID *dbRowID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSNumber *deepScanStamp;
@property (nonatomic, retain) <BRCAppLibraryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSNumber *fileID;
@property (nonatomic, readonly) BRCFSEventsMonitor *fsEventsMonitor;
@property (nonatomic, retain) NSNumber *generationID;
@property (readonly) bool hasActiveAliasQueries;
@property (readonly) bool hasActiveQueries;
@property (readonly) bool hasActiveRecursiveQueries;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isForeground;
@property (nonatomic, readonly) bool isGreedy;
@property (nonatomic, readonly) bool isPrivateAppLibrary;
@property (nonatomic, readonly) bool isSharedAppLibrary;
@property (nonatomic, readonly) NSString *logName;
@property (nonatomic, readonly) NSString *mangledID;
@property (nonatomic) long long maxLostStamp;
@property (nonatomic) bool needsSave;
@property (nonatomic, readonly) NSString *ownerName;
@property (nonatomic, readonly) NSString *pathRelativeToRoot;
@property (nonatomic, readonly) NSMutableIndexSet *pendingCoordinatedIOs;
@property (nonatomic, readonly) NSMutableDictionary *plist;
@property (nonatomic, readonly) BRCRelativePath *root;
@property (nonatomic, retain) BRCAccountSession *session;
@property (nonatomic, readonly) bool shouldEvictUploadedItems;
@property (nonatomic, readonly) unsigned int state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BRCSyncContext *syncContext;
@property (nonatomic, readonly) BRCSyncContext *syncContextIfExists;
@property (nonatomic, readonly) unsigned long long syncedFolderType;
@property (nonatomic, readonly) brc_task_tracker *tracker;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, retain) BRCZoneRowID *zoneRowID;

- (void).cxx_destruct;
- (unsigned int)_activateState:(unsigned int)arg1 origState:(unsigned int)arg2;
- (void)_addTargetAppLibrary:(id)arg1;
- (void)_addTargetAppLibraryForAliasItem:(id)arg1;
- (id)_aliasAppLibraryTargetSQLPrefix;
- (void)_removeAlltargetAppLibraries;
- (void)_removedAliasItemForTargetAppLibrary:(id)arg1;
- (void)_resolvetargetAppLibraries;
- (struct PQLResultSet { Class x1; }*)_targetAppLibrariesEnumerator;
- (id)_unwrappedDescriptionWithContext:(id)arg1;
- (id)absolutePath;
- (void)activate;
- (void)addClientUsingUbiquity:(id)arg1;
- (void)addForegroundClient:(id)arg1;
- (id)aliasByUnsaltedBookmarkData:(id)arg1;
- (unsigned long long)allocateLostStampAddingBackoff:(bool)arg1;
- (id)appLibraryID;
- (id)appLibraryIDAndOwner;
- (id)asPrivateAppLibrary;
- (id)asSharedAppLibrary;
- (void)associateWithClientZone:(id)arg1;
- (void)cancelDeepScan;
- (void)cancelFileCoordinators;
- (void)cancelFileProviders;
- (void)clearStateBits:(unsigned int)arg1;
- (id)clientZone;
- (void)close;
- (void)continueMarkingChildrenLost;
- (id)coordinatorForItem:(id)arg1 forRead:(bool)arg2;
- (id)db;
- (id)dbRowID;
- (id)deepScanStamp;
- (id)delegate;
- (id)description;
- (id)descriptionWithContext:(id)arg1;
- (void)didCreateDataScopedItem;
- (void)didCreateDocumentScopedItem;
- (void)didFindLostItem:(id)arg1 oldAppLibrary:(id)arg2;
- (void)didReceiveHandoffRequest;
- (id)directoryItemIDByFileID:(unsigned long long)arg1;
- (id)directoryItemIDByFileID:(unsigned long long)arg1 db:(id)arg2;
- (unsigned long long)documentCount;
- (unsigned long long)documentEvictableSizeUsage;
- (unsigned long long)documentEvictableSizeUsageWithAccessTimeDelta:(double)arg1;
- (unsigned long long)documentSizeUsage;
- (id)fetchRootItemWithoutEnclosures;
- (id)fetchRootItemWithoutEnclosuresInDB:(id)arg1;
- (id)fileID;
- (void)freeFileCoordinationSlotsAfterDelayForRead:(bool)arg1;
- (id)fsEventsMonitor;
- (id)generationID;
- (bool)hasActiveAliasQueries;
- (bool)hasActiveQueries;
- (bool)hasActiveRecursiveQueries;
- (bool)hasDocumentsOrDirectory;
- (bool)hasInitialFaultsEverLive;
- (bool)hasInitialFaultsLive;
- (bool)hasLocalChanges;
- (bool)hasUbiquitousDocuments;
- (bool)hasUbiquityClientsConnected;
- (unsigned long long)hash;
- (id)identifier;
- (bool)includesDataScope;
- (id)init;
- (id)initWithName:(id)arg1 ownerName:(id)arg2 dbRowID:(id)arg3 zoneRowID:(id)arg4 db:(id)arg5 plist:(id)arg6 session:(id)arg7 initialCreation:(bool)arg8 createdRootOnDisk:(bool)arg9 rootFileID:(id)arg10;
- (bool)isCloudDocsAppLibrary;
- (bool)isDesktopAppLibrary;
- (bool)isDocumentsAppLibrary;
- (bool)isEqual:(id)arg1;
- (bool)isForeground;
- (bool)isGreedy;
- (bool)isPrivateAppLibrary;
- (bool)isSharedAppLibrary;
- (bool)isStillTargetingAppLibrary:(id)arg1;
- (bool)isiCloudDesktopAppLibrary;
- (id)itemByDocumentID:(unsigned int)arg1;
- (id)itemByDocumentID:(unsigned int)arg1 db:(id)arg2;
- (id)itemByFileID:(unsigned long long)arg1;
- (id)itemByFileID:(unsigned long long)arg1 db:(id)arg2;
- (id)itemByRowID:(unsigned long long)arg1;
- (id)itemByRowID:(unsigned long long)arg1 db:(id)arg2;
- (id)itemIDByRowID:(unsigned long long)arg1;
- (id)itemIDByRowID:(unsigned long long)arg1 db:(id)arg2;
- (struct PQLResultSet { Class x1; }*)itemsEnumeratorChildOf:(id)arg1 rankMin:(unsigned long long)arg2 rankMax:(unsigned long long)arg3 count:(unsigned long long)arg4;
- (struct PQLResultSet { Class x1; }*)itemsEnumeratorWithRankMin:(unsigned long long)arg1 rankMax:(unsigned long long)arg2 namePrefix:(id)arg3 shouldIncludeFolders:(bool)arg4 shouldIncludeOnlyFolders:(bool)arg5 shouldIncludeDocumentsScope:(bool)arg6 shouldIncludeDataScope:(bool)arg7 shouldIncludeExternalScope:(bool)arg8 shouldIncludeTrashScope:(bool)arg9 count:(unsigned long long)arg10;
- (struct PQLResultSet { Class x1; }*)liveAliasesEnumeratorTargetingThisAppLibrary;
- (id)logName;
- (id)mangledID;
- (bool)markChildrenLostForItemID:(id)arg1 fileID:(id)arg2;
- (bool)markChildrenLostForItemID:(id)arg1 fileID:(id)arg2 startingFromRow:(unsigned long long)arg3 hasMoreWork:(bool*)arg4;
- (long long)maxLostStamp;
- (bool)needsSave;
- (id)ownerName;
- (id)pathRelativeToRoot;
- (id)pendingCoordinatedIOs;
- (id)plist;
- (void)recomputeShouldEvictState;
- (void)registerQueryWithAliases:(bool)arg1 isRecursive:(bool)arg2;
- (void)removeClientUsingUbiquity:(id)arg1;
- (void)removeForegroundClient:(id)arg1;
- (id)root;
- (id)rootItemIDWithoutEnclosures;
- (void)scheduleDeepScan;
- (id)session;
- (void)setClientZone:(id)arg1;
- (void)setDbRowID:(id)arg1;
- (void)setDeepScanStamp:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFileID:(id)arg1;
- (void)setGenerationID:(id)arg1;
- (void)setMaxLostStamp:(long long)arg1;
- (void)setNeedsSave:(bool)arg1;
- (void)setSession:(id)arg1;
- (bool)setStateBits:(unsigned int)arg1;
- (void)setZoneRowID:(id)arg1;
- (bool)shouldEvictUploadedItems;
- (id)spotlightDomainIdentifier;
- (unsigned int)state;
- (id)syncContext;
- (id)syncContextIfExists;
- (unsigned long long)syncedFolderType;
- (long long)throttleHashWithItemID:(id)arg1;
- (id)tracker;
- (void)unregisterQueryWithAliases:(bool)arg1 isRecursive:(bool)arg2;
- (void)updateFromFSAtPath:(id)arg1;
- (void)updateWithPlist:(id)arg1;
- (id)url;
- (id)zoneRowID;

@end
