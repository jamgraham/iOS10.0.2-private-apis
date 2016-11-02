/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUCropToolController : PUPhotoEditToolController <PUCropAndStraightenViewDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate> {
    CIImage * __CIImage;
    bool  __activeTool;
    NSMutableDictionary * __animationTargetsByKeyPath;
    NSMutableDictionary * __animationsByKeyPath;
    UIAlertController * __aspectAlertController;
    UIButton * __aspectButton;
    bool  __contentViewsHidden;
    unsigned long long  __contentViewsHiddenAnimationCount;
    PUCropAspect * __cropAspect;
    UIView * __cropCanvasView;
    NSDictionary * __cropHandleViewsByHandle;
    PUCropOverlayView * __cropOverlayView;
    UIButton * __cropToggleButton;
    NSString * __cropToggleButtonTitle;
    PUCropAndStraightenView * __cropView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __cropViewFrameForLastModelLoad;
    NSObject<OS_dispatch_queue> * __fileSystemQueue;
    PLImageGeometry * __geometry;
    bool  __hasAppliedCropSuggestion;
    bool  __hasAutoAppliedCropSuggestion;
    bool  __hasRequestedCropSuggestion;
    bool  __ignoreTrackingUpdates;
    UIImage * __image;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __initialHandlePanCropRect;
    NSMutableDictionary * __initialLocationsInHandlesByHandle;
    PLPhotoEditModel * __lastKnownEditModel;
    bool  __modelChangeLocal;
    bool  __needsImageLoad;
    bool  __needsLivePhotoLoad;
    bool  __needsModelLoad;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __normalizedImageRect;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  __previewViewInsets;
    PLPhotoEditRenderer * __renderer;
    UIButton * __rotateButton;
    UIView * __rotateSnapshotView;
    unsigned long long  __rotatingAnimationCount;
    PUCropHandleView * __selectedCropHandleView;
    double  __straightenAngle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __suggestedCrop;
    double  __suggestedStraightenAngle;
    PUTiltWheelControl * __tiltControl;
    PUVideoEditRenderer * __videoRenderer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __viewCropRect;
    bool  __wantsPreviewViewHidden;
    bool  _trackingTiltControl;
}

@property (setter=_setCIImage:, nonatomic, retain) CIImage *_CIImage;
@property (getter=_isActiveTool, setter=_setActiveTool:, nonatomic) bool _activeTool;
@property (setter=_setAnimationTargetsByKeyPath:, nonatomic, retain) NSMutableDictionary *_animationTargetsByKeyPath;
@property (setter=_setAnimationsByKeyPath:, nonatomic, retain) NSMutableDictionary *_animationsByKeyPath;
@property (setter=_setAspectAlertController:, nonatomic) UIAlertController *_aspectAlertController;
@property (setter=_setAspectButton:, nonatomic, retain) UIButton *_aspectButton;
@property (setter=_setContentViewsHidden:, nonatomic) bool _contentViewsHidden;
@property (setter=_setContentViewsHiddenAnimationCount:, nonatomic) unsigned long long _contentViewsHiddenAnimationCount;
@property (setter=_setCropAspect:, nonatomic, retain) PUCropAspect *_cropAspect;
@property (setter=_setCropCanvasView:, nonatomic, retain) UIView *_cropCanvasView;
@property (setter=_setCropHandleViewsByHandle:, nonatomic, retain) NSDictionary *_cropHandleViewsByHandle;
@property (setter=_setCropOverlayView:, nonatomic, retain) PUCropOverlayView *_cropOverlayView;
@property (setter=_setCropToggleButton:, nonatomic, retain) UIButton *_cropToggleButton;
@property (setter=_setCropToggleButtonTitle:, nonatomic, copy) NSString *_cropToggleButtonTitle;
@property (setter=_setCropView:, nonatomic, retain) PUCropAndStraightenView *_cropView;
@property (setter=_setCropViewFrameForLastModelLoad:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _cropViewFrameForLastModelLoad;
@property (setter=_setFileSystemQueue:, nonatomic, retain) NSObject<OS_dispatch_queue> *_fileSystemQueue;
@property (setter=_setGeometry:, nonatomic, retain) PLImageGeometry *_geometry;
@property (setter=_setHasAppliedCropSuggestion:, nonatomic) bool _hasAppliedCropSuggestion;
@property (setter=_setHasAutoAppliedCropSuggestion:, nonatomic) bool _hasAutoAppliedCropSuggestion;
@property (setter=_setHasRequestedCropSuggestion:, nonatomic) bool _hasRequestedCropSuggestion;
@property (setter=_setIgnoreTrackingUpdates:, nonatomic) bool _ignoreTrackingUpdates;
@property (setter=_setImage:, nonatomic, retain) UIImage *_image;
@property (setter=_setInitialHandlePanCropRect:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _initialHandlePanCropRect;
@property (setter=_setInitialLocationsInHandlesByHandle:, nonatomic, retain) NSMutableDictionary *_initialLocationsInHandlesByHandle;
@property (setter=_setLastKnownEditModel:, nonatomic, retain) PLPhotoEditModel *_lastKnownEditModel;
@property (getter=_isModelChangeLocal, setter=_setModelChangeLocal:, nonatomic) bool _modelChangeLocal;
@property (setter=_setNeedsImageLoad:, nonatomic) bool _needsImageLoad;
@property (setter=_setNeedsLivePhotoLoad:, nonatomic) bool _needsLivePhotoLoad;
@property (setter=_setNeedsModelLoad:, nonatomic) bool _needsModelLoad;
@property (setter=_setNormalizedImageRect:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _normalizedImageRect;
@property (setter=_setPreviewViewInsets:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _previewViewInsets;
@property (setter=_setRenderer:, nonatomic, retain) PLPhotoEditRenderer *_renderer;
@property (setter=_setRotateButton:, nonatomic, retain) UIButton *_rotateButton;
@property (setter=_setRotateSnapshotView:, nonatomic, retain) UIView *_rotateSnapshotView;
@property (setter=_setRotatingAnimationCount:, nonatomic) unsigned long long _rotatingAnimationCount;
@property (setter=_setSelectedCropHandleView:, nonatomic, retain) PUCropHandleView *_selectedCropHandleView;
@property (setter=_setStraightenAngle:, nonatomic) double _straightenAngle;
@property (setter=_setSuggestedCrop:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _suggestedCrop;
@property (setter=_setSuggestedStraightenAngle:, nonatomic) double _suggestedStraightenAngle;
@property (setter=_setTiltControl:, nonatomic, retain) PUTiltWheelControl *_tiltControl;
@property (setter=_setVideoRenderer:, nonatomic, retain) PUVideoEditRenderer *_videoRenderer;
@property (setter=_setViewCropRect:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _viewCropRect;
@property (setter=_setWantsPreviewViewHidden:, nonatomic) bool _wantsPreviewViewHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PUCropToolControllerSpec *spec;
@property (readonly) Class superclass;
@property (getter=_isTrackingTitlControl, setter=_setTrackingTiltControl:, nonatomic) bool trackingTiltControl;

- (void).cxx_destruct;
- (id)_CIImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_addHeight:(double)arg1 toRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 anchorTop:(bool)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_addWidth:(double)arg1 toRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 anchorLeft:(bool)arg3;
- (id)_animateValueFromValue:(double)arg1 toValue:(double)arg2 interpolation:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)_animationForKeyPath:(id)arg1;
- (id)_animationTargetForKeyPath:(id)arg1;
- (id)_animationTargetsByKeyPath;
- (id)_animationsByKeyPath;
- (struct CGVector { double x1; double x2; })_applyAspectOfCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toHandleMovement:(struct CGVector { double x1; double x2; })arg2;
- (void)_applyCropSuggestion;
- (id)_aspectAlertController;
- (id)_aspectButton;
- (void)_aspectButtonTapped:(id)arg1;
- (void)_autoApplyCropSuggestionIfNeeded;
- (void)_autoRecomposeCropRect;
- (void)_cancelAnimationForKeyPath:(id)arg1;
- (void)_cancelDelayedRecomposeCropRect;
- (bool)_contentViewsHidden;
- (unsigned long long)_contentViewsHiddenAnimationCount;
- (struct CGVector { double x1; double x2; })_correctInputVector:(struct CGVector { double x1; double x2; })arg1 forHandle:(unsigned long long)arg2 onCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 lockDirection:(bool)arg4;
- (void)_createRendererIfNeeded;
- (id)_cropAspect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_cropCanvasFrame;
- (id)_cropCanvasView;
- (id)_cropHandleViewsByHandle;
- (id)_cropOverlayView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_cropRectFromPanningHandle:(unsigned long long)arg1 byAmount:(struct CGVector { double x1; double x2; })arg2;
- (id)_cropToggleButton;
- (id)_cropToggleButtonTitle;
- (void)_cropToggleTapped:(id)arg1;
- (id)_cropView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_cropViewFrameForLastModelLoad;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_defaultCropRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_defaultNormalizedCropRect;
- (long long)_defaultOrientation;
- (double)_defaultStraightenAngle;
- (struct CGVector { double x1; double x2; })_deltaMaskForHandle:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_denormalizeImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_fileSystemQueue;
- (id)_geometry;
- (void)_handleCropHandlePan:(id)arg1;
- (void)_handleDidCreateEditedImage:(struct CGImage { }*)arg1;
- (void)_handleRenderedVideoWithURL:(id)arg1 originalLivePhoto:(id)arg2 success:(bool)arg3 error:(id)arg4;
- (void)_handleTouchingGesture:(id)arg1;
- (bool)_hasAppliedCropSuggestion;
- (bool)_hasAutoAppliedCropSuggestion;
- (bool)_hasConstraintsForKey:(id)arg1;
- (bool)_hasCropSuggestion;
- (bool)_hasRequestedCropSuggestion;
- (void)_hideGrid;
- (void)_hideGridDelayed;
- (void)_hideMaskedContent;
- (void)_hideMaskedContentDelayed;
- (bool)_ignoreTrackingUpdates;
- (id)_image;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_initialHandlePanCropRect;
- (id)_initialLocationsInHandlesByHandle;
- (void)_installRenderedImageAndDisplayIfNeeded;
- (void)_invalidateConstraintsForKey:(id)arg1;
- (bool)_isActiveTool;
- (bool)_isModelChangeLocal;
- (bool)_isTrackingTitlControl;
- (id)_lastKnownEditModel;
- (void)_loadCropSuggestionIfNeeded;
- (void)_loadImageIfNeeded;
- (void)_loadLivePhotoIfNeeded;
- (void)_loadStateFromModel;
- (bool)_needsImageLoad;
- (bool)_needsLivePhotoLoad;
- (bool)_needsModelLoad;
- (bool)_needsRecomposeCropRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_normalizeImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_normalizedImageRect;
- (void)_performGeometryChange:(id /* block */)arg1 animated:(bool)arg2;
- (void)_performLocalModelChanges:(id /* block */)arg1;
- (struct CGPoint { double x1; double x2; })_pointForHandle:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })_pointForHandle:(unsigned long long)arg1 onCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_previewViewInsets;
- (void)_recomposeCropRectAnimated:(bool)arg1;
- (void)_recomposeCropRectDelayed;
- (void)_removeSnapshotView:(id)arg1;
- (id)_renderer;
- (void)_resetAllValuesAnimated:(bool)arg1;
- (id)_rotateButton;
- (void)_rotateButtonTapped:(id)arg1;
- (id)_rotateSnapshotView;
- (unsigned long long)_rotatingAnimationCount;
- (id)_selectedCropHandleView;
- (void)_setActiveTool:(bool)arg1;
- (void)_setAnimation:(id)arg1 forKeyPath:(id)arg2;
- (void)_setAnimationTarget:(id)arg1 forKeyPath:(id)arg2;
- (void)_setAnimationTargetsByKeyPath:(id)arg1;
- (void)_setAnimationsByKeyPath:(id)arg1;
- (void)_setAspectAlertController:(id)arg1;
- (void)_setAspectButton:(id)arg1;
- (void)_setCIImage:(id)arg1;
- (void)_setContentViewsHidden:(bool)arg1;
- (void)_setContentViewsHidden:(bool)arg1 animated:(bool)arg2;
- (void)_setContentViewsHidden:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_setContentViewsHiddenAnimationCount:(unsigned long long)arg1;
- (void)_setCropAspect:(id)arg1;
- (void)_setCropAspect:(id)arg1 animated:(bool)arg2;
- (void)_setCropCanvasView:(id)arg1;
- (void)_setCropHandleViewsByHandle:(id)arg1;
- (void)_setCropOverlayView:(id)arg1;
- (void)_setCropToggleButton:(id)arg1;
- (void)_setCropToggleButtonTitle:(id)arg1;
- (void)_setCropView:(id)arg1;
- (void)_setCropViewFrameForLastModelLoad:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setFileSystemQueue:(id)arg1;
- (void)_setGeometry:(id)arg1;
- (void)_setHasAppliedCropSuggestion:(bool)arg1;
- (void)_setHasAutoAppliedCropSuggestion:(bool)arg1;
- (void)_setHasRequestedCropSuggestion:(bool)arg1;
- (void)_setIgnoreTrackingUpdates:(bool)arg1;
- (void)_setImage:(id)arg1;
- (void)_setInitialHandlePanCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setInitialLocationsInHandlesByHandle:(id)arg1;
- (void)_setLastKnownEditModel:(id)arg1;
- (void)_setModelChangeLocal:(bool)arg1;
- (void)_setNeedsImageLoad:(bool)arg1;
- (void)_setNeedsLivePhotoLoad:(bool)arg1;
- (void)_setNeedsModelLoad:(bool)arg1;
- (void)_setNormalizedImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setPreviewViewInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setRenderer:(id)arg1;
- (void)_setRotateButton:(id)arg1;
- (void)_setRotateSnapshotView:(id)arg1;
- (void)_setRotatingAnimationCount:(unsigned long long)arg1;
- (void)_setSelectedCropHandleView:(id)arg1;
- (void)_setStraightenAngle:(double)arg1;
- (void)_setStraightenAngle:(double)arg1 animated:(bool)arg2;
- (void)_setSuggestedCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setSuggestedStraightenAngle:(double)arg1;
- (void)_setTiltControl:(id)arg1;
- (void)_setTrackingTiltControl:(bool)arg1;
- (void)_setVideoRenderer:(id)arg1;
- (void)_setViewCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setViewCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 normalizedImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_setViewCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 normalizedImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 animated:(bool)arg3;
- (void)_setWantsPreviewViewHidden:(bool)arg1;
- (void)_showGridAndCancelDelayedHide;
- (void)_showMaskedContentAndCancelDelayedHide;
- (double)_straightenAngle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_suggestedCrop;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_suggestedCropRectForImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)_suggestedStraightenAngle;
- (id)_tiltControl;
- (void)_tiltControlChanged:(id)arg1;
- (int)_tiltControlOrientationForLayoutOrientation:(long long)arg1;
- (void)_toggleCrop;
- (void)_updateCropActionButtonConstraintsIfNeeded;
- (void)_updateCropActionButtons;
- (void)_updateCropCanvasConstraintsIfNeeded;
- (void)_updateCropToggleButton;
- (void)_updateCropToggleConstraintsIfNeeded;
- (void)_updateCropViewsForInteraction;
- (void)_updatePreviewViewInsets;
- (void)_updateTiltControlColor;
- (void)_updateTiltWheelConstraintsIfNeeded;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_validatedRectFromNormalizedImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_videoRenderer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_viewCropRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_viewCropToMatchPreview;
- (bool)_wantsPreviewViewHidden;
- (void)animateBecomingActiveTool;
- (void)animateResigningActiveTool;
- (void)baseLivePhotoInvalidated;
- (void)basePhotoInvalidated;
- (bool)canResetToDefaultValue;
- (void)cropAndStraightenViewDidEndTracking:(id)arg1;
- (void)cropAndStraightenViewDidTrack:(id)arg1;
- (void)cropAndStraightenViewWillBeginTracking:(id)arg1;
- (void)didBecomeActiveTool;
- (void)didResignActiveTool;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)localizedName;
- (id)localizedResetToolActionTitle;
- (void)photoEditModelDidChange;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })preferredPreviewViewInsets;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)resetToDefaultValueAnimated:(bool)arg1;
- (id)selectedToolbarIcon;
- (void)setDelegate:(id)arg1;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (id)toolbarIcon;
- (void)updateViewConstraints;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (bool)wantsDefaultPreviewView;
- (void)willBecomeActiveTool;
- (void)willResignActiveTool;

@end
