/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMSnapshotView : UIView {
    UIView * __dimmingView;
    UIView * __lowQualityBlurView;
    bool  __supportsBlur;
    bool  _blurred;
    long long  _desiredAspectRatio;
    bool  _dimmed;
    UIView * _snapshotView;
}

@property (nonatomic, readonly) UIView *_dimmingView;
@property (nonatomic, readonly) UIView *_lowQualityBlurView;
@property (nonatomic, readonly) bool _supportsBlur;
@property (nonatomic) bool blurred;
@property (nonatomic, readonly) long long desiredAspectRatio;
@property (nonatomic) bool dimmed;
@property (nonatomic, readonly) UIView *snapshotView;

- (void).cxx_destruct;
- (void)_applyLowQualityBlurForStyle:(long long)arg1 animated:(bool)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)_applySnapshotBlurForStyle:(long long)arg1 animated:(bool)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)_applySnapshotDimAnimated:(bool)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)_dimmingView;
- (id)_lowQualityBlurView;
- (void)_prepareForApplyingBlurForStyle:(long long)arg1 applying:(bool)arg2 inputRadiusAmount:(double*)arg3 inputRadiusDuration:(double*)arg4 inputRadiusDelay:(double*)arg5 inputRadiusTimingFunction:(id*)arg6 opacityAmount:(double*)arg7 opacityDuration:(double*)arg8 opacityDelay:(double*)arg9 opacityTimingFunction:(id*)arg10;
- (void)_prepareForApplyingLowQualityBlurForStyle:(long long)arg1 applying:(bool)arg2 opacityAmount:(double*)arg3 opacityDuration:(double*)arg4 opacityDelay:(double*)arg5 opacityTimingFunction:(id*)arg6 targetView:(id*)arg7;
- (void)_removeAnimationOnView:(id)arg1 forKey:(id)arg2;
- (void)_removeLowQualityBlurForStyle:(long long)arg1 animated:(bool)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)_removeSnapshotBlurForStyle:(long long)arg1 animated:(bool)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)_removeSnapshotDimAnimated:(bool)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)_setupBlurOnSnapshot;
- (void)_setupDimOnSnapshot;
- (void)_setupLowQualityBlurOnSnapshot;
- (bool)_supportsBlur;
- (bool)blurred;
- (long long)desiredAspectRatio;
- (bool)dimmed;
- (id)initWithView:(id)arg1 desiredAspectRatio:(long long)arg2;
- (void)removeInflightBlurAnimations;
- (void)setBlurred:(bool)arg1;
- (void)setBlurred:(bool)arg1 animated:(bool)arg2 style:(long long)arg3 withCompletionBlock:(id /* block */)arg4;
- (void)setDimmed:(bool)arg1;
- (void)setDimmed:(bool)arg1 animated:(bool)arg2 withCompletionBlock:(id /* block */)arg3;
- (id)snapshotView;

@end
