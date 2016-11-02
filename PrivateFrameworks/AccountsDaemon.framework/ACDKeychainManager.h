/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDKeychainManager : NSObject

+ (bool)_accountSyncItemExistsForServiceName:(id)arg1 hostname:(id)arg2;
+ (bool)_accountSyncItemExistsForServiceName:(id)arg1 username:(id)arg2;
+ (void)_accountTypeIdentifierFromComponents:(id)arg1 handler:(id /* block */)arg2;
+ (void)_createNoSyncOAuthTokens:(id)arg1 account:(id)arg2 clientID:(id)arg3;
+ (id)_credentialForAccountWithID:(id)arg1 accountTypeID:(id)arg2 credentialType:(id)arg3 clientID:(id)arg4 options:(id)arg5 error:(id*)arg6;
+ (bool)_dataclassSyncItemExistsForServiceName:(id)arg1 username:(id)arg2;
+ (void)_fallbackToUnsyncedOAuthTokens:(id)arg1;
+ (id)_fetchOptionsForAccount:(id)arg1;
+ (id)_itemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 error:(id*)arg5;
+ (void)_migrateCredential:(id)arg1 forAccount:(id)arg2 clientID:(id)arg3;
+ (void)_removeCredentialForAccountWithUsername:(id)arg1 accountQualifiedUsername:(id)arg2 accountIdentifier:(id)arg3 accountTypeIdentifier:(id)arg4 credentialType:(id)arg5 clientID:(id)arg6 options:(id)arg7 error:(id*)arg8;
+ (void)_removeCredentialItemWithKey:(id)arg1 forAccountWithID:(id)arg2 username:(id)arg3 accountTypeID:(id)arg4 clientID:(id)arg5 options:(id)arg6 error:(id*)arg7;
+ (bool)_removeItemForService:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 error:(id*)arg5;
+ (void)_saveCredential:(id)arg1 forAccount:(id)arg2 clientID:(id)arg3 error:(id*)arg4;
+ (void)_setAccountSyncItem:(id)arg1 hostname:(id)arg2 accessGroup:(id)arg3 accessibility:(id)arg4 options:(id)arg5 error:(id*)arg6;
+ (void)_setAccountSyncItem:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 accessibility:(id)arg4 options:(id)arg5 error:(id*)arg6;
+ (void)_setAccountSyncMigrateItem:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 accessibility:(id)arg4 options:(id)arg5 error:(id*)arg6;
+ (void)_setCredentialForAccount:(id)arg1 clientID:(id)arg2 handleCredentialItemRemovals:(bool)arg3 error:(id*)arg4;
+ (void)_setDataclassSyncItem:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 accessibility:(id)arg4 options:(id)arg5 error:(id*)arg6;
+ (void)_setItem:(id)arg1 forServiceName:(id)arg2 username:(id)arg3 accessGroup:(id)arg4 accessibility:(id)arg5 syncable:(bool)arg6 requiresTouchID:(bool)arg7 options:(id)arg8 error:(id*)arg9;
+ (void)_setNonPersistentCredentialTimerForAccount:(id)arg1;
+ (bool)_shouldSyncCredentialForAccount:(id)arg1;
+ (bool)accountSyncMigrated;
+ (id)accountSynciOSVersion;
+ (void)componentsFromKeychainServiceName:(id)arg1 handler:(id /* block */)arg2;
+ (void)createAccountSyncItemForAccount:(id)arg1 clientID:(id)arg2 properties:(id)arg3 error:(id*)arg4;
+ (void)createAccountSyncMigratedItemWithError:(id*)arg1;
+ (void)createDataclassAccountSyncItemForAccount:(id)arg1 withDataclassActions:(id)arg2;
+ (id)credentialForAccount:(id)arg1 clientID:(id)arg2;
+ (id)credentialForAccount:(id)arg1 clientID:(id)arg2 error:(id*)arg3;
+ (id)credentialForManagedAccountObject:(id)arg1;
+ (id)credentialForManagedAccountObject:(id)arg1 clientID:(id)arg2;
+ (id)credentialForManagedAccountObject:(id)arg1 clientID:(id)arg2 error:(id*)arg3;
+ (void)initialize;
+ (id)keychainAccounts;
+ (id)keychainDeletedAccounts;
+ (id)keychainDeletedContactAccounts;
+ (id)keychainDeletedHostnameAccounts;
+ (id)keychainHostnameAccounts;
+ (id)keychainServiceNameForClientID:(id)arg1 accountTypeIdentifier:(id)arg2 key:(id)arg3;
+ (void)removeAccountSyncItemForAccount:(id)arg1 clientID:(id)arg2 properties:(id)arg3 error:(id*)arg4;
+ (void)removeCredentialForAccount:(id)arg1;
+ (void)removeCredentialForAccount:(id)arg1 clientID:(id)arg2;
+ (void)removeCredentialForAccount:(id)arg1 clientID:(id)arg2 error:(id*)arg3;
+ (void)removeCredentialForAccount:(id)arg1 error:(id*)arg2;
+ (void)removeCredentialForAccount:(id)arg1 key:(id)arg2 error:(id*)arg3;
+ (void)removeDataclassAccountSyncItemForAccount:(id)arg1;
+ (id)removeTombstonesForAccount:(id)arg1 clientID:(id)arg2 error:(id*)arg3;
+ (void)setAccountSynciOSVersion:(id)arg1;
+ (void)setCredentialForAccount:(id)arg1;
+ (void)setCredentialForAccount:(id)arg1 clientID:(id)arg2;
+ (void)setCredentialForAccount:(id)arg1 clientID:(id)arg2 error:(id*)arg3;
+ (void)setCredentialForAccount:(id)arg1 error:(id*)arg2;
+ (void)setCredentialForNewAccount:(id)arg1 clientID:(id)arg2 error:(id*)arg3;

@end