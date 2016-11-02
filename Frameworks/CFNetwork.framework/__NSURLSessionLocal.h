/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSURLSessionLocal : __NSCFURLSession <NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate, NSURLSessionDataDelegate_Internal, NSURLSessionSubclass, NSURLSessionTaskDelegatePrivate> {
    NSMutableDictionary * _connectionsToTasks;
    unsigned long long  _identSeed;
    id /* block */  _invalidateCallback;
    NSObject<OS_dispatch_queue> * _invalidateQueue;
    bool  _isInvalid;
    NSArray * _localProtocolClassesForDefaultSession;
    NSMutableArray * _outstandingTasks;
    NSURLSessionConfiguration * _proxyConfig;
    NSMutableDictionary * _proxyDelegates;
    NSURLSession * _proxySession;
    NSURLSession * _sessionForCacheLookups;
    bool  _shouldRecreateProxySession;
    struct XTubeManager { int (**x1)(); struct __CFAllocator {} *x2; int x3; struct RetainableTypedDict<const CoreSchedulingSet *, GlueTubeManager *> {} *x4; struct _opaque_pthread_mutex_t { long long x_5_1_1; BOOL x_5_1_2[56]; } x5; struct HTTPConnectionCacheLimits { int x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; int x_6_1_5; int x_6_1_6; int x_6_1_7; int x_6_1_8; int x_6_1_9; int x_6_1_10; } x6; } * _tubeManager;
    const struct XURLCache { int (**x1)(); struct __CFAllocator {} *x2; int x3; } * _xCache;
    long long  _xCacheOnce;
    const struct XCookieStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; } * _xCookies;
    long long  _xCookiesOnce;
    const struct XCredentialStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; } * _xCreds;
    long long  _xCredsOnce;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)AVAssetDownloadTaskForURLAsset:(id)arg1 assetTitle:(id)arg2 assetArtworkData:(id)arg3 options:(id)arg4;
- (id)AVAssetDownloadTaskForURLAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(bool)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 _isWaitingForConnectionWithReason:(long long)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)_AVAssetDownloadTaskForURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (void)_URLSession:(id)arg1 companionAvailabilityChanged:(bool)arg2;
- (void)_URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_URLSession:(id)arg1 task:(id)arg2 getAuthHeadersForResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (struct XTubeManager { int (**x1)(); struct __CFAllocator {} *x2; int x3; struct RetainableTypedDict<const CoreSchedulingSet *, GlueTubeManager *> {} *x4; struct _opaque_pthread_mutex_t { long long x_5_1_1; BOOL x_5_1_2[56]; } x5; struct HTTPConnectionCacheLimits { int x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; int x_6_1_5; int x_6_1_6; int x_6_1_7; int x_6_1_8; int x_6_1_9; int x_6_1_10; } x6; }*)_actualTubeManager;
- (id)_cacheOnlyDataTaskForRequest:(id)arg1 withDelegate:(id)arg2;
- (bool)_cfurlRequest:(struct _CFURLRequest { }*)arg1 isCacheEquivalentTo:(struct _CFURLRequest { }*)arg2;
- (struct _CFHSTSPolicy { }*)_copyHSTSPolicy;
- (id)_createCanonicalRequest:(id)arg1;
- (id)_createCanonicalRequestForTask:(id)arg1;
- (id)_createTaskFromOriginalCFURLRequest:(struct _CFURLRequest { }*)arg1 updatedCFURLRequest:(struct _CFURLRequest { }*)arg2 connProps:(struct __CFDictionary { }*)arg3 sockProps:(struct __CFDictionary { }*)arg4;
- (const struct XCookieStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXCookieStorage;
- (const struct XCookieStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXCookieStorage0;
- (const struct XCredentialStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXCredentialStorage;
- (const struct XCredentialStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXCredentialStorage0;
- (const struct XURLCache { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXURLCache;
- (const struct XURLCache { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXURLCache0;
- (id)_delegateForTask:(id)arg1;
- (void)_flushOrResetStorage:(id /* block */)arg1 reset:(unsigned char)arg2;
- (void)_getCookieHeadersForTask:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_invalidateAllConnections;
- (struct URLProtocol { int (**x1)(); int (**x2)(); int (**x3)(); struct CoreSchedulingSet {} *x4; double x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; long long x14; long long x15; struct Throttler {} *x16; id x17; struct _CFURLRequest {} x18; struct URLProtocolClient {} *x19; struct _CFCachedURLResponse {} *x20; }*)_newURLProtocolForTask:(id)arg1 client:(struct URLProtocolClient { int (**x1)(); }*)arg2;
- (struct URLProtocol { int (**x1)(); int (**x2)(); int (**x3)(); struct CoreSchedulingSet {} *x4; double x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; long long x14; long long x15; struct Throttler {} *x16; id x17; struct _CFURLRequest {} x18; struct URLProtocolClient {} *x19; struct _CFCachedURLResponse {} *x20; }*)_newURLProtocolForTask:(id)arg1 client:(struct URLProtocolClient { int (**x1)(); }*)arg2 protocolClass:(Class)arg3;
- (void)_onqueue_canonicalizeTaskAndCreateConnection:(id)arg1;
- (void)_onqueue_checkForCompletion;
- (void)_onqueue_completeInvalidation:(bool)arg1;
- (void)_onqueue_connectUploadTask:(id)arg1 strippedRequest:(id)arg2 bodyStream:(id)arg3 bodyParts:(id)arg4;
- (void)_onqueue_finishConnectUpRequest:(id)arg1 task:(id)arg2;
- (void)_onqueue_flushWithCompletionHandler:(id /* block */)arg1;
- (void)_onqueue_getTasksWithCompletionHandler:(id /* block */)arg1;
- (void)_onqueue_invalidateSession:(bool)arg1 withQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)_onqueue_invokeInvalidateCallback;
- (void)_onqueue_resetStorageWithCompletionHandler:(id /* block */)arg1;
- (bool)_prependProtocolClassForDefaultSession:(Class)arg1;
- (Class)_protocolClassForRequest:(id)arg1;
- (Class)_protocolClassForTask:(id)arg1;
- (id)_protocolClasses;
- (id)_proxyDataTaskForRequest:(id)arg1 withDelegate:(id)arg2;
- (void)_purgeIdleConnections;
- (void)_removeProtocolClassForDefaultSession:(Class)arg1;
- (bool)_request:(id)arg1 isCacheEquivalentTo:(id)arg2;
- (bool)_withConnectionCache_enqueueRequest:(const struct HTTPRequestMessage { int (**x1)(); int (**x2)(); int (**x3)(); unsigned char x4; struct HTTPVersionMixedValue { int (**x_5_1_1)(); struct __CFString {} *x_5_1_2; } x5; struct HTTPBodyData {} *x6; int x7; long long x8; struct _CFHTTPAuthentication {} *x9; struct _CFHTTPAuthentication {} *x10; struct HTTPParser {} *x11; struct HTTPHeaderDict {} *x12; struct HTTPHeaderDict {} *x13; struct __CFDictionary {} *x14; int (**x15)(); struct __CFAllocator {} *x16; struct HTTPMethodMixedValue { int (**x_17_1_1)(); struct __CFString {} *x_17_1_2; } x17; char *x18; struct __CFURL {} *x19; char *x20; }*)arg1 forProtocol:(struct MetaConnectionCacheClient { int (**x1)(); }*)arg2 scheduling:(const struct CoreSchedulingSet { int (**x1)(); struct __CFAllocator {} *x2; int x3; int (**x4)(); struct _opaque_pthread_t {} *x5; int x6; struct __CFSet {} *x7; id x8; struct __CFRunLoop {} *x9; struct __CFString {} *x10; int x11; }*)arg3 options:(struct MetaConnectionOptions { int x1; float x2; unsigned long long x3; unsigned char x4; unsigned char x5; unsigned char x6; })arg4;
- (struct __CFString { }*)_withConnectionCache_getCurrentSSLMethodForKey:(const struct HTTPConnectionCacheKey { int (**x1)(); struct __CFAllocator {} *x2; int x3; unsigned long long x4; struct __CFString {} *x5; int x6; int x7; struct __CFDictionary {} *x8; unsigned long long x9; struct __CFDictionary {} *x10; struct shared_ptr<NetworkProxy> { struct NetworkProxy {} *x_11_1_1; struct __shared_weak_count {} *x_11_1_2; } x11; struct shared_ptr<const __CFString> { struct __CFString {} *x_12_1_1; struct __shared_weak_count {} *x_12_1_2; } x12; int x13; int x14; }*)arg1 scheduling:(const struct CoreSchedulingSet { int (**x1)(); struct __CFAllocator {} *x2; int x3; int (**x4)(); struct _opaque_pthread_t {} *x5; int x6; struct __CFSet {} *x7; id x8; struct __CFRunLoop {} *x9; struct __CFString {} *x10; int x11; }*)arg2;
- (struct GlueTube { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_withConnectionCache_getPendingTubeForProtocol:(struct MetaConnectionCacheClient { int (**x1)(); }*)arg1 withKey:(const struct HTTPConnectionCacheKey { int (**x1)(); struct __CFAllocator {} *x2; int x3; unsigned long long x4; struct __CFString {} *x5; int x6; int x7; struct __CFDictionary {} *x8; unsigned long long x9; struct __CFDictionary {} *x10; struct shared_ptr<NetworkProxy> { struct NetworkProxy {} *x_11_1_1; struct __shared_weak_count {} *x_11_1_2; } x11; struct shared_ptr<const __CFString> { struct __CFString {} *x_12_1_1; struct __shared_weak_count {} *x_12_1_2; } x12; int x13; int x14; }*)arg2 scheduling:(const struct CoreSchedulingSet { int (**x1)(); struct __CFAllocator {} *x2; int x3; int (**x4)(); struct _opaque_pthread_t {} *x5; int x6; struct __CFSet {} *x7; id x8; struct __CFRunLoop {} *x9; struct __CFString {} *x10; int x11; }*)arg3;
- (void)_withConnectionCache_setCurrentSSLMethod:(struct __CFString { }*)arg1 forKey:(const struct HTTPConnectionCacheKey { int (**x1)(); struct __CFAllocator {} *x2; int x3; unsigned long long x4; struct __CFString {} *x5; int x6; int x7; struct __CFDictionary {} *x8; unsigned long long x9; struct __CFDictionary {} *x10; struct shared_ptr<NetworkProxy> { struct NetworkProxy {} *x_11_1_1; struct __shared_weak_count {} *x_11_1_2; } x11; struct shared_ptr<const __CFString> { struct __CFString {} *x_12_1_1; struct __shared_weak_count {} *x_12_1_2; } x12; int x13; int x14; }*)arg2 scheduling:(const struct CoreSchedulingSet { int (**x1)(); struct __CFAllocator {} *x2; int x3; int (**x4)(); struct _opaque_pthread_t {} *x5; int x6; struct __CFSet {} *x7; id x8; struct __CFRunLoop {} *x9; struct __CFString {} *x10; int x11; }*)arg3;
- (void)_withConnectionCache_setIOFallbackForKey:(const struct HTTPConnectionCacheKey { int (**x1)(); struct __CFAllocator {} *x2; int x3; unsigned long long x4; struct __CFString {} *x5; int x6; int x7; struct __CFDictionary {} *x8; unsigned long long x9; struct __CFDictionary {} *x10; struct shared_ptr<NetworkProxy> { struct NetworkProxy {} *x_11_1_1; struct __shared_weak_count {} *x_11_1_2; } x11; struct shared_ptr<const __CFString> { struct __CFString {} *x_12_1_1; struct __shared_weak_count {} *x_12_1_2; } x12; int x13; int x14; }*)arg1 scheduling:(const struct CoreSchedulingSet { int (**x1)(); struct __CFAllocator {} *x2; int x3; int (**x4)(); struct _opaque_pthread_t {} *x5; int x6; struct __CFSet {} *x7; id x8; struct __CFRunLoop {} *x9; struct __CFString {} *x10; int x11; }*)arg2;
- (void)addConnectionlessTask:(id)arg1;
- (id)connToTask:(id)arg1;
- (const struct XCookieStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)copyBaseStorageForRequest:(struct _CFURLRequest { }*)arg1;
- (id)copyTasks;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataTaskForRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)downloadTaskForRequest:(id)arg1 downloadFilePath:(id)arg2 resumeData:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (void)invalidateUnpurgeableConnectionsForConnectionCacheKey:(struct HTTPConnectionCacheKey { int (**x1)(); struct __CFAllocator {} *x2; int x3; unsigned long long x4; struct __CFString {} *x5; int x6; int x7; struct __CFDictionary {} *x8; unsigned long long x9; struct __CFDictionary {} *x10; struct shared_ptr<NetworkProxy> { struct NetworkProxy {} *x_11_1_1; struct __shared_weak_count {} *x_11_1_2; } x11; struct shared_ptr<const __CFString> { struct __CFString {} *x_12_1_1; struct __shared_weak_count {} *x_12_1_2; } x12; int x13; int x14; }*)arg1;
- (unsigned long long)nextSeed;
- (void)removeConnectionlessTask:(id)arg1;
- (void)replaceTask:(id)arg1 withTask:(id)arg2;
- (Class)sessionConnectionClass;
- (void)task:(id)arg1 terminatedConnection:(id)arg2;
- (id)taskForClass:(Class)arg1 request:(id)arg2 uploadFile:(id)arg3 bodyData:(id)arg4 completion:(id /* block */)arg5;
- (id)uploadTaskForRequest:(id)arg1 uploadFile:(id)arg2 bodyData:(id)arg3 completion:(id /* block */)arg4;

@end
