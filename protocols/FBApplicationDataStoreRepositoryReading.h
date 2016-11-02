/* Generated by RuntimeBrowser.
 */

@protocol FBApplicationDataStoreRepositoryReading <NSObject>

@required

- (NSArray *)applicationIdentifiersWithState;
- (bool)containsKey:(NSString *)arg1 forApplication:(NSString *)arg2;
- (<FBApplicationDataStoreRepositoryReadingDelegate> *)delegate;
- (NSArray *)keysForApplication:(NSString *)arg1;
- (id)objectForKey:(NSString *)arg1 forApplication:(NSString *)arg2;
- (void)objectForKey:(void *)arg1 forApplication:(void *)arg2 withResult:(void *)arg3; // needs 3 arg types, found 7: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id
- (void)objectForKeys:(void *)arg1 forAllApplicationsWithResult:(void *)arg2; // needs 2 arg types, found 6: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id
- (void)setDelegate:(id <FBApplicationDataStoreRepositoryReadingDelegate>)arg1;

@end
