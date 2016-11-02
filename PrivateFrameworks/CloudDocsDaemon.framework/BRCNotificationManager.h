/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCNotificationManager : NSObject <BRCModule> {
    unsigned long long  _activeAliasQueries;
    NSMutableSet * _additionalUpdatesItemRowID;
    NSObject<OS_dispatch_queue> * _cacheQueue;
    BRCXPCClient * _client;
    bool  _isCancelled;
    BRNotificationQueue * _notifs;
    NSHashTable * _pipes;
    NSObject<OS_dispatch_queue> * _queue;
    BRCAccountSession * _session;
    BRCClientRanksPersistedState * _state;
    NSMutableDictionary * _transferCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool hasActiveAliasWatchers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCancelled;
@property (nonatomic, readonly) BRCAccountSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dispatchUpdatesToPipes;
- (void)_queueAdditionalUpdates;
- (void)cancel;
- (void)close;
- (void)flushUpdates;
- (void)getPipeWithXPCReceiver:(id)arg1 client:(id)arg2 reply:(id /* block */)arg3;
- (bool)hasActiveAliasWatchers;
- (id)initWithAccountSession:(id)arg1;
- (void)invalidatePipeReceiversWatchingAppLibraryIDs:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)invalidatePipesWatchingAppLibraryIDs:(id)arg1;
- (bool)isCancelled;
- (void)pipeDelegateInvalidated:(id)arg1;
- (id)pipeWithReceiver:(id)arg1;
- (void)queueProgressUpdates:(id)arg1;
- (void)queueUpdate:(id)arg1;
- (void)queueUpdateForItemAtRowID:(unsigned long long)arg1;
- (void)registerAppLibraries:(id)arg1 forFlags:(unsigned long long)arg2;
- (void)resume;
- (id)session;
- (void)suspend;
- (void)unregisterAppLibraries:(id)arg1 forFlags:(unsigned long long)arg2;

@end
