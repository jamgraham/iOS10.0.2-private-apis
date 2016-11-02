/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBalloonPluginManager : NSObject <CKAppInstallationWatcherObserver> {
    NSMutableDictionary * _activeBrowsers;
    bool  _appStoreAutoEnableToggled;
    NSArray * _browserPlugins;
    bool  _isAppInstalationEnabled;
    bool  _isAppRemovalEnabled;
    bool  _keepingEmptySections;
    NSString * _lastLaunchedIdentifier;
    IMBalloonPlugin * _lastViewedPlugin;
    long long  _numberOfSectionsToKeep;
    NSSet * _oldVisibleSwitcherPluginIdentifiers;
    NSDictionary * _pluginIndexPathMap;
    NSDictionary * _pluginLaunchTimeMap;
    NSDictionary * _pluginSeenMap;
    NSDictionary * _pluginVersionMap;
    CKPreviewDispatchCache * _snapshotCache;
    NSMutableArray * _visibleInstallations;
    NSArray * _visiblePlugins;
    NSArray * _visiblePluginsBySection;
    NSArray * _visibleSwitcherPlugins;
}

@property (nonatomic, retain) NSMutableDictionary *activeBrowsers;
@property (nonatomic, readonly) NSArray *allEnabledPlugins;
@property (nonatomic, readonly) NSArray *allPlugins;
@property (getter=isAppStoreAutoEnableToggled, nonatomic) bool appStoreAutoEnableToggled;
@property (nonatomic, retain) NSArray *browserPlugins;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *disabledPlugins;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAppInstalationEnabled;
@property (nonatomic, readonly) bool isAppRemovalEnabled;
@property (nonatomic) bool isAppRemovalEnabled;
@property (nonatomic, readonly) bool isAppStoreEnabled;
@property (getter=isKeepingEmptySections, nonatomic) bool keepingEmptySections;
@property (nonatomic, retain) NSString *lastLaunchedIdentifier;
@property (nonatomic) IMBalloonPlugin *lastViewedPlugin;
@property (nonatomic) long long numberOfSectionsToKeep;
@property (nonatomic, retain) NSSet *oldVisibleSwitcherPluginIdentifiers;
@property (nonatomic, retain) NSDictionary *pluginIndexPathMap;
@property (nonatomic, retain) NSDictionary *pluginLaunchTimeMap;
@property (nonatomic, retain) NSDictionary *pluginSeenMap;
@property (nonatomic, retain) NSDictionary *pluginVersionMap;
@property (nonatomic, retain) CKPreviewDispatchCache *snapshotCache;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *visibleDrawerPlugins;
@property (nonatomic, retain) NSMutableArray *visibleInstallations;
@property (nonatomic, retain) NSArray *visiblePlugins;
@property (nonatomic, retain) NSArray *visiblePluginsBySection;
@property (nonatomic, retain) NSArray *visibleSwitcherPlugins;

+ (id)recentPlugin;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addAppWithBalloonIdentifier:(id)arg1;
- (void)_adjustVisiblePluginsBySectionForSectionCapacities:(id)arg1;
- (id)_decodeIndexPathMap:(id)arg1;
- (id)_encodeIndexPathMap:(id)arg1;
- (void)_invalidatePluginForKey:(id)arg1;
- (void)_refreshVisibleDrawerPluginsDueToAppInstallationChange;
- (void)_removeAppWithBalloonIdentifier:(id)arg1;
- (void)_setSeen:(bool)arg1 forPlugin:(id)arg2;
- (bool)_shouldUninstallContainingBundle:(id)arg1;
- (id)activeBrowsers;
- (id)allEnabledPlugins;
- (id)allPlugins;
- (id)allPluginsPassingTest:(id /* block */)arg1;
- (void)appInstallationWatcher:(id)arg1 addedAppInstallation:(id)arg2;
- (void)appInstallationWatcher:(id)arg1 changedAppInstallation:(id)arg2;
- (unsigned long long)badgeValueForPlugin:(id)arg1;
- (void)beginKeepingEmptySections;
- (id)browserPlugins;
- (id)browserSnapshotForKey:(id)arg1;
- (void)cleanSeenMap;
- (void)dealloc;
- (id)descriptionOfVisibleDrawerPlugins;
- (id)digitalTouchViewControllerWithDataSource:(id)arg1;
- (id)disabledPlugins;
- (void)endKeepingEmptySections;
- (id)existingPhotoBrowserViewController;
- (id)existingViewControllerForPluginIdentifier:(id)arg1;
- (id)filteredArrayOfInstallationsThatShouldBeVisible:(id)arg1;
- (void)forceKillRemoteExtensions;
- (void)forceTearDownRemoteViews;
- (void)handleManagedConfigSettingsChangeNotification:(id)arg1;
- (id)handwritingViewControllerWithPluginPayloads:(id)arg1;
- (struct __CFString { }*)healthKitAchievementAvailabilityChangedNotification;
- (void)healthStickerStatusChanged;
- (id)init;
- (void)invalidateAllActivePlugins;
- (void)invalidateAllActiveSwitcherPlugins;
- (void)invalidatePhotosPlugin;
- (bool)isAppInstalationEnabled;
- (bool)isAppRemovalEnabled;
- (bool)isAppStoreAutoEnableToggled;
- (bool)isAppStoreEnabled;
- (bool)isEnabledAndVisible:(id)arg1;
- (bool)isInternalPlugin:(id)arg1;
- (bool)isKeepingEmptySections;
- (bool)isPluginEnabled:(id)arg1;
- (bool)isPluginSeen:(id)arg1;
- (bool)isPluginSeenWithInstalledVersion:(id)arg1;
- (bool)isPluginVisible:(id)arg1;
- (bool)isViewController:(id)arg1 fromPluginWithIdentifier:(id)arg2;
- (id)lastLaunchedIdentifier;
- (id)lastLaunchedPlugin;
- (id)lastViewedPlugin;
- (long long)lastViewedPluginIndex;
- (unsigned long long)launchStatusForPlugin:(id)arg1;
- (id)launchTimeForPlugin:(id)arg1;
- (id)newViewControllerForPluginIdentifier:(id)arg1 dataSource:(id)arg2;
- (long long)numberOfSectionsToKeep;
- (id)oldVisibleSwitcherPluginIdentifiers;
- (id)photosBrowserViewControllerWithPluginPayloads:(id)arg1;
- (id)pluginForIdentifier:(id)arg1;
- (id)pluginIndexPathMap;
- (id)pluginLaunchTimeMap;
- (id)pluginSeenMap;
- (id)pluginVersionMap;
- (void)prepareForSuspend;
- (void)refreshPlugins;
- (void)regeneratePluginIndexPaths;
- (void)reloadInstalledApps:(id)arg1;
- (void)removeVisibleInstallationWithID:(id)arg1;
- (void)saveWithNotification:(bool)arg1;
- (void)setActiveBrowsers:(id)arg1;
- (void)setAppStoreAutoEnableToggled:(bool)arg1;
- (void)setBrowserPlugins:(id)arg1;
- (void)setEnabled:(bool)arg1 forPlugin:(id)arg2;
- (void)setIsAppInstalationEnabled:(bool)arg1;
- (void)setIsAppRemovalEnabled:(bool)arg1;
- (void)setKeepingEmptySections:(bool)arg1;
- (void)setLastLaunchedIdentifier:(id)arg1;
- (void)setLastViewedPlugin:(id)arg1;
- (void)setNumberOfSectionsToKeep:(long long)arg1;
- (void)setOldVisibleSwitcherPluginIdentifiers:(id)arg1;
- (void)setPluginIndexPathMap:(id)arg1;
- (void)setPluginLaunchTimeMap:(id)arg1;
- (void)setPluginSeenMap:(id)arg1;
- (void)setPluginVersionMap:(id)arg1;
- (void)setSeen:(bool)arg1 forPlugin:(id)arg2;
- (void)setSnapshotCache:(id)arg1;
- (void)setVisibleInstallations:(id)arg1;
- (void)setVisiblePlugins:(id)arg1;
- (void)setVisiblePluginsBySection:(id)arg1;
- (void)setVisibleSwitcherPlugins:(id)arg1;
- (id)snapshotCache;
- (unsigned long long)unseenPluginCount;
- (void)updateAppInstallations;
- (void)updateIndexPath:(id)arg1 forPlugin:(id)arg2;
- (void)updateLaunchStatus:(unsigned long long)arg1 forPlugin:(id)arg2 withNotification:(bool)arg3;
- (void)updateLaunchTimeForPlugin:(id)arg1;
- (void)updateSnapshotForBrowserViewController:(id)arg1 currentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)viewControllerForPluginIdentifier:(id)arg1;
- (id)viewControllerForPluginIdentifier:(id)arg1 dataSource:(id)arg2;
- (id)visibleDrawerPlugins;
- (id)visibleInstallations;
- (id)visiblePlugins;
- (id)visiblePluginsBySection;
- (id)visibleSwitcherPlugins;

@end
