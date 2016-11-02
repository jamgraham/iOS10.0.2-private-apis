/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INSearchCallHistoryIntent : INIntent <INSearchCallHistoryIntentExport>

@property (nonatomic, readonly) unsigned long long callCapabilities;
@property (nonatomic, readonly) long long callType;
@property (nonatomic, readonly, copy) INDateComponentsRange *dateCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) INPerson *recipient;
@property (readonly) Class superclass;

- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1;
- (id)_typedBackingStore;
- (unsigned long long)callCapabilities;
- (long long)callType;
- (id)dateCreated;
- (id)initWithCallType:(long long)arg1 dateCreated:(id)arg2 recipient:(id)arg3 callCapabilities:(unsigned long long)arg4;
- (id)recipient;
- (void)setCallCapabilities:(unsigned long long)arg1;
- (void)setCallType:(long long)arg1;
- (void)setDateCreated:(id)arg1;
- (void)setRecipient:(id)arg1;

@end
