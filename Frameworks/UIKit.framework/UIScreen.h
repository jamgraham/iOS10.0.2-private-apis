/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIScreen : NSObject <UICoordinateSpace, UIFocusContainer, UITraitEnvironment, _UIFocusEnvironmentInternal, _UIFocusEnvironmentPrivate, _UIFocusRegionContainer, _UITraitEnvironmentInternal> {
    UIWindow<UIFocusEnvironment> * __focusedWindow;
    NSArray * _availableDisplayModes;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    NSDictionary * _capabilities;
    UITraitCollection * _contentSizeCategoryTraits;
    UITraitCollection * _defaultTraitCollection;
    CADisplay * _display;
    FBSDisplay * _fbsDisplay;
    _UIScreenFixedCoordinateSpace * _fixedCoordinateSpace;
    _UIScreenFocusSystem * _focusSystem;
    long long  _gamut;
    long long  _interfaceOrientation;
    float  _lastNotifiedBacklightLevel;
    UITraitCollection * _lastNotifiedTraitCollection;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _mainSceneReferenceBounds;
    UITraitCollection * _overrideTraitCollection;
    NSMutableArray * _pausedWindows;
    bool  _performingSystemSnapshot;
    double  _pointsPerInch;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _referenceBounds;
    double  _scale;
    UIWindow * _screenDisablingWindow;
    struct { 
        unsigned int bitsPerComponent : 4; 
        unsigned int initialized : 1; 
        unsigned int connected : 1; 
        unsigned int overscanCompensation : 2; 
        unsigned int screenUpdatesDisabled : 1; 
        unsigned int wantsWideContentMargins : 1; 
        unsigned int queriedDeviceContentMargins : 1; 
        unsigned int hasCalculatedPointsPerInch : 1; 
        unsigned int screenCreatedFBSDisplay : 1; 
        unsigned int rightHandDrive : 1; 
    }  _screenFlags;
    UISoftwareDimmingWindow * _softwareDimmingWindow;
    double  _startedPausingWindows;
    double  _touchScaleFactor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _unjailedReferenceBounds;
    long long  _userInterfaceIdiom;
    bool  _wantsSoftwareDimming;
}

@property (setter=_setFocusedWindow:, nonatomic) UIWindow<UIFocusEnvironment> *_focusedWindow;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _gkBounds;
@property (readonly) double _gkScale;
@property (setter=_setLastNotifiedBacklightLevel:, nonatomic) float _lastNotifiedBacklightLevel;
@property (getter=_isPerformingSystemSnapshot, setter=_setPerformingSystemSnapshot:, nonatomic) bool _performingSystemSnapshot;
@property (nonatomic, readonly) UIWindow *_preferredFocusedWindow;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _referenceBounds;
@property (setter=_setSoftwareDimmingWindow:, nonatomic, retain) UISoftwareDimmingWindow *_softwareDimmingWindow;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } applicationFrame;
@property (nonatomic, readonly, copy) NSArray *availableModes;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) double brightness;
@property (readonly) <UICoordinateSpace> *coordinateSpace;
@property (nonatomic, retain) UIScreenMode *currentMode;
@property (readonly, copy) NSString *debugDescription;
@property (getter=_defaultTraitCollection, setter=_setDefaultTraitCollection:, nonatomic, retain) UITraitCollection *defaultTraitCollection;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FBSDisplay *fbsDisplay;
@property (readonly) <UICoordinateSpace> *fixedCoordinateSpace;
@property (getter=_focusSystem, nonatomic, readonly) _UIScreenFocusSystem *focusSystem;
@property (nonatomic, readonly) <UIFocusItem> *focusedItem;
@property (getter=_focusedItemRegionContainer, nonatomic, readonly) <_UIFocusRegionContainer> *focusedItemRegionContainer;
@property (nonatomic, readonly) UIView *focusedView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } is_scaledSize;
@property (getter=_lastNotifiedTraitCollection, setter=_setLastNotifiedTraitCollection:, nonatomic, retain) UITraitCollection *lastNotifiedTraitCollection;
@property (getter=_linearFocusMovementSequences, nonatomic, readonly, copy) NSArray *linearFocusMovementSequences;
@property (nonatomic, readonly) UIScreen *mirroredScreen;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } nativeBounds;
@property (nonatomic, readonly) double nativeScale;
@property (getter=_overrideTraitCollection, setter=_setOverrideTraitCollection:, nonatomic, retain) UITraitCollection *overrideTraitCollection;
@property (nonatomic) long long overscanCompensation;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } overscanCompensationInsets;
@property (getter=_parentFocusEnvironment, nonatomic, readonly) <UIFocusEnvironment> *parentFocusEnvironment;
@property (nonatomic, readonly, copy) NSArray *preferredFocusEnvironments;
@property (getter=_preferredFocusMovementStyle, nonatomic, readonly) long long preferredFocusMovementStyle;
@property (nonatomic, readonly) <UIFocusContainer> *preferredFocusedItem;
@property (nonatomic, readonly) UIView *preferredFocusedView;
@property (nonatomic, readonly) UIScreenMode *preferredMode;
@property (nonatomic, readonly) double scale;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFocus;
@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic) bool wantsSoftwareDimming;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1;
+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1 withScene:(id)arg2;
+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1 withScene:(id)arg2 andPost:(bool)arg3;
+ (void)_FBSDisplayDidPossiblyDisconnect:(id)arg1;
+ (void)_FBSDisplayDidPossiblyDisconnect:(id)arg1 forSceneDestruction:(id)arg2;
+ (id)__availableScenes;
+ (id)__connectedFBSDisplays;
+ (id)__createPlugInScreenForFBSDisplay:(id)arg1;
+ (id)__sceneTrackingQueue;
+ (void)_beginDisableScreenUpdatesForSnapshot;
+ (void)_beginDisableScreenUpdatesForSnapshotUsingSnapshotCover:(bool)arg1;
+ (id)_carScreen;
+ (void)_endDisableScreenUpdates;
+ (void)_enumerateScreensWithBlock:(id /* block */)arg1;
+ (void)_prepareCarScreensForResume;
+ (void)_prepareScreensForAppResume;
+ (id)_screenForScene:(id)arg1;
+ (id)_screenWithDisplayID:(id)arg1;
+ (id)_screenWithDisplayName:(id)arg1;
+ (id)_screenWithIntegerDisplayID:(unsigned int)arg1;
+ (bool)_shouldDisableJail;
+ (id)_workspaceCapableScreens;
+ (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromView:(id)arg2;
+ (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toView:(id)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromView:(id)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toView:(id)arg2;
+ (void)initialize;
+ (id)mainScreen;
+ (id)screens;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForScreenOriginRotation:(double)arg1;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformToRotateScreen:(double)arg1;

- (void).cxx_destruct;
- (void)_accessibilityForceTouchEnabledChanged:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_applicationFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_applicationFrameForInterfaceOrientation:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_applicationFrameForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_applicationFrameForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2 ignoreStatusBar:(bool)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_applicationFrameWithoutOverscanForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2 ignoreStatusBar:(bool)arg3;
- (bool)_areListsLimited;
- (bool)_areMusicListsLimited;
- (void)_beginObservingBacklightLevelNotifications;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundsForInterfaceOrientation:(long long)arg1;
- (id)_capabilities;
- (id)_capabilityForKey:(id)arg1;
- (void)_computeMetrics;
- (void)_computeMetrics:(bool)arg1;
- (void)_connectScreen;
- (id)_defaultTraitCollection;
- (id)_defaultTraitCollectionForInterfaceOrientation:(long long)arg1;
- (id)_defaultTraitCollectionForInterfaceOrientation:(long long)arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_disableScreenUpdates:(bool)arg1;
- (void)_disconnectScreen;
- (id)_display;
- (id)_displayID;
- (long long)_effectiveUserInterfaceStyle;
- (void)_enableScreenUpdates;
- (void)_endObservingBacklightLevelNotifications;
- (void)_ensureConnectedIfPossible;
- (void)_enumerateWindowsWithBlock:(id /* block */)arg1;
- (void)_focusEnvironmentWillDisappear:(id)arg1;
- (id)_focusSystem;
- (id)_focusedItem;
- (id)_focusedWindow;
- (long long)_forceTouchCapability;
- (void)_handleEffectiveUserInterfaceStyleChanged:(id)arg1;
- (void)_handleForcedUserInterfaceLayoutDirectionChanged:(id)arg1;
- (bool)_hasStatusBar;
- (bool)_hasWindows;
- (long long)_imageOrientation;
- (unsigned int)_integerDisplayID;
- (long long)_interfaceOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_interfaceOrientedMainSceneBounds;
- (bool)_isCarScreen;
- (bool)_isExternal;
- (bool)_isMainScreen;
- (bool)_isOverscanned;
- (bool)_isPerformingSystemSnapshot;
- (bool)_isRightHandDrive;
- (bool)_isRotatable;
- (bool)_isUIElementLimited:(id /* block */)arg1;
- (bool)_isValidInterfaceOrientation:(long long)arg1;
- (bool)_isWorkspaceCapable;
- (float)_lastNotifiedBacklightLevel;
- (id)_lastNotifiedTraitCollection;
- (id)_launchImageTraitCollectionForInterfaceOrientation:(long long)arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_lazySoftwareDimmingWindow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_mainSceneBoundsForInterfaceOrientation:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_mainSceneFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_mainSceneReferenceBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_mainSceneReferenceBoundsForSettings:(id)arg1;
- (id)_name;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_nativeDisplayBounds;
- (void)_noteSceneOrientationUpdate:(long long)arg1;
- (void)_notifyOrientationWillChangeAndPropagateToAllWindows;
- (void)_notifyOrientationWillChangeAndPropagateToAllWindows:(bool)arg1;
- (void)_notifySceneBoundsChanged:(bool)arg1;
- (void)_notifyTraitsChangedAndPropagateToAllWindows;
- (bool)_orientedMainSceneReferenceBoundsEqualDestinationBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 interfaceOrientation:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_overrideReferenceBounds;
- (id)_overrideTraitCollection;
- (bool)_overscanAdjustmentNeedsUpdate;
- (id)_parentFocusEnvironment;
- (double)_pointsPerInch;
- (void)_postBrightnessDidChangeNotificationIfAppropriate;
- (id)_preferredFocusedWindow;
- (void)_prepareForWindow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_referenceBounds;
- (double)_refreshRate;
- (bool)_requestFocusUpdateToEnvironment:(id)arg1;
- (double)_rotation;
- (double)_scale;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (unsigned int)_seed;
- (void)_setCapability:(id)arg1 forKey:(id)arg2;
- (void)_setDefaultTraitCollection:(id)arg1;
- (void)_setDefaultTraitCollection:(id)arg1 notify:(bool)arg2;
- (void)_setExternalDeviceShouldInputText:(bool)arg1;
- (void)_setFocusedWindow:(id)arg1;
- (void)_setInterfaceOrientation:(long long)arg1;
- (void)_setInterfaceOrientation:(long long)arg1 animated:(bool)arg2;
- (void)_setInterfaceOrientation:(long long)arg1 computeMetrics:(bool)arg2 animated:(bool)arg3;
- (void)_setLastNotifiedBacklightLevel:(float)arg1;
- (void)_setLastNotifiedTraitCollection:(id)arg1;
- (void)_setMainSceneReferenceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setMainSceneReferenceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 computingMetricsIfNecessary:(bool)arg2;
- (void)_setMainSceneReferenceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 computingMetricsIfNecessary:(bool)arg2 notify:(bool)arg3;
- (void)_setNeedsNonDeferredFocusUpdate;
- (void)_setOverrideTraitCollection:(id)arg1;
- (void)_setPerformingSystemSnapshot:(bool)arg1;
- (void)_setScale:(double)arg1;
- (void)_setSoftwareDimmingWindow:(id)arg1;
- (void)_setSpeed:(double)arg1 forWindow:(id)arg2;
- (void)_setUserInterfaceIdiom:(long long)arg1;
- (bool)_shouldSearchForFocusRegionsInContext:(id)arg1;
- (id)_snapshotExcludingWindows:(id)arg1 withRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_softwareDimmingWindow;
- (bool)_supportsBrightness;
- (bool)_supportsDeferredFocus;
- (double)_touchRadiusScaleFactor;
- (double)_touchScaleFactor;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_unjailedReferenceBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_unjailedReferenceBoundsForInterfaceOrientation:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_unjailedReferenceBoundsInPixels;
- (void)_updateAvailableDisplayModes;
- (void)_updateCapabilities;
- (void)_updateFocusIfNeeded;
- (void)_updateOverscanCompensationAllowingBackgroundUpdate:(bool)arg1;
- (void)_updateReferenceBoundsToSceneReferenceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromInterfaceOrientation:(long long)arg2 animated:(bool)arg3;
- (void)_updateTraits;
- (void)_updateUserInterfaceIdiom;
- (void)_updateWithMainSceneSettings:(id)arg1 animated:(bool)arg2;
- (long long)_userInterfaceIdiom;
- (bool)_wantsWideContentMargins;
- (void)_willTransitionToTraitCollection:(id)arg1;
- (long long)_workspaceCapableScreenType;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })applicationFrame;
- (id)availableModes;
- (int)bitsPerComponent;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (double)brightness;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromCoordinateSpace:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toCoordinateSpace:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromCoordinateSpace:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toCoordinateSpace:(id)arg2;
- (id)coordinateSpace;
- (id)currentMode;
- (void)dealloc;
- (id)description;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;
- (id)fbsDisplay;
- (id)fixedCoordinateSpace;
- (id)focusedItem;
- (id)focusedView;
- (void)focusedViewDidChange;
- (void)focusedViewWillChange;
- (long long)gamut;
- (id)initWithDisplay:(id)arg1;
- (bool)isAncestorOfItem:(id)arg1;
- (id)mirroredScreen;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })nativeBounds;
- (double)nativeScale;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (long long)overscanCompensation;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })overscanCompensationInsets;
- (id)preferredFocusEnvironments;
- (id)preferredFocusedItem;
- (id)preferredFocusedView;
- (id)preferredMode;
- (float)rawBrightnessForBacklightLevel:(float)arg1;
- (double)scale;
- (int)screenType;
- (void)setBitsPerComponent:(int)arg1;
- (void)setBrightness:(double)arg1;
- (void)setCurrentMode:(id)arg1;
- (void)setFbsDisplay:(id)arg1;
- (void)setFocusEnabled:(bool)arg1;
- (void)setNeedsFocusUpdate;
- (void)setNeedsPreferredFocusedItemUpdate;
- (void)setOverscanCompensation:(long long)arg1;
- (void)setWantsSoftwareDimming:(bool)arg1;
- (bool)shouldChangeFocusedItem:(id)arg1;
- (bool)shouldChangeFocusedItem:(id)arg1 heading:(unsigned long long)arg2;
- (bool)shouldUpdateFocusFromView:(id)arg1 toView:(id)arg2 heading:(unsigned long long)arg3;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (id)snapshot;
- (id)snapshotView;
- (id)snapshotViewAfterScreenUpdates:(bool)arg1;
- (bool)supportsFocus;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateFocusIfNeeded;
- (void)updatePreferredFocusedItemIfNeeded;
- (bool)wantsSoftwareDimming;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (id)_mapkit_display;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (struct CGSize { double x1; double x2; })pu_workImageSize;

// Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })currentRotationSafeBounds;
- (unsigned long long)supportedInterfaceOrientations;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (bool)__ck_isFullscreen;

// Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard

- (id)FBSDisplay;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_gkBounds;
- (double)_gkScale;

// Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer

- (struct CGSize { double x1; double x2; })is_scaledSize;

// Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation

+ (id)sbs_launchImageInfoPlistKeyModifier:(long long)arg1;
+ (id)sbs_snapshotImagePathComponent:(long long)arg1;

- (bool)sbs_isMainScreen;
- (id)sbs_launchImageInfoPlistKeyModifier;
- (id)sbs_snapshotImagePathComponent;

// Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit

+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })nc_counterTransformForActiveInterfaceOrientation;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })nc_transformForInterfaceOrientation:(long long)arg1;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })nc_transformForScreenOriginRotation:(double)arg1;

@end
