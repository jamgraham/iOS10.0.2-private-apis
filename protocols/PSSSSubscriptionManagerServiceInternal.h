/* Generated by RuntimeBrowser.
 */

@protocol PSSSSubscriptionManagerServiceInternal

@required

- (void)getActiveSubscriptionServicesMatchingBundleIdentifiers:(void *)arg1 domainIdentifiers:(void *)arg2 maximumExpirationLimit:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSArray *, NSArray *, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)registerSubscriptionServiceForURL:(NSURL *)arg1 withSubscriptionInfo:(NSString *)arg2 expirationDate:(NSDate *)arg3;
- (void)removeSubscriptionServiceForURL:(NSURL *)arg1;
- (void)removeWebSubscriptionServicesCreatedAfterDate:(NSDate *)arg1;

@end
