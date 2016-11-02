/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSProgressSubscriber : NSObject <NSProgressSubscriber> {
    NSLock * _lock;
    NSMutableDictionary * _proxiesByPublisherID;
    id /* block */  _publishingHandler;
    bool  _started;
    NSString * _subscriberID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (oneway void)addPublisher:(id)arg1 forID:(id)arg2 withValues:(id)arg3 isOld:(bool)arg4;
- (void)dealloc;
- (id)initWithPublishingHandler:(id /* block */)arg1;
- (oneway void)observePublisherForID:(id)arg1 value:(id)arg2 forKey:(id)arg3 inUserInfo:(bool)arg4;
- (oneway void)removePublisherForID:(id)arg1;
- (void)startForCategory:(id)arg1;
- (void)startForFileURL:(id)arg1;
- (void)stop;

@end
