/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPrefsCloudSource : CFPrefsPlistSource {
    const char * _configPath;
    bool  _enabled;
    const char * _storeName;
}

- (void)alreadylocked_updateObservingRemoteChanges;
- (id)createSynchronizeMessage;
- (void)dealloc;
- (bool)enabled;
- (void)fullCloudSynchronizeWithCompletionHandler:(id /* block */)arg1;
- (id)initWithDomain:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2 byHost:(bool)arg3 containerPath:(struct __CFString { }*)arg4 containingPreferences:(id)arg5;
- (void)mergeIntoDictionary:(struct __CFDictionary { }*)arg1;
- (void)setConfigurationPath:(struct __CFString { }*)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setStoreName:(struct __CFString { }*)arg1;

@end
