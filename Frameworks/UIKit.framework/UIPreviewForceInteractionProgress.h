/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPreviewForceInteractionProgress : UIInteractionProgress <_UIForceLevelClassifierDelegate> {
    _UIForceLevelClassifier * _classifier;
    NSObservation * _classifierObservation;
    bool  _completesAtTargetState;
    bool  _didEnd;
    bool  _enteredMinimumState;
    NSObservation * _gestureBeganObservation;
    long long  _minimumState;
    _UITouchForceObservable * _observable;
    NSObservation * _progressObservation;
    long long  _targetState;
    NSObservation * _targetStateUpdateObservation;
    bool  _updateMinimumStateWithTargetState;
}

@property (setter=_setClassifierShouldRespectSystemGestureTouchFiltering:, nonatomic) bool _classifierShouldRespectSystemGestureTouchFiltering;
@property (setter=_setTargetState:, nonatomic) long long _targetState;
@property (nonatomic) bool completesAtTargetState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_classifierShouldRespectSystemGestureTouchFiltering;
- (void)_forceLevelClassifier:(id)arg1 currentForceLevelDidChange:(long long)arg2;
- (void)_forceLevelClassifierDidReset:(id)arg1;
- (void)_gestureRecognizerBegan:(bool)arg1;
- (id)_initWithObservable:(id)arg1 targetState:(long long)arg2 minimumRequiredState:(long long)arg3;
- (id)_initWithObservable:(id)arg1 targetState:(long long)arg2 minimumRequiredState:(long long)arg3 useLinearClassifier:(bool)arg4;
- (id)_initWithView:(id)arg1 targetState:(long long)arg2 minimumRequiredState:(long long)arg3 useLinearClassifier:(bool)arg4;
- (void)_installProgressObserver;
- (void)_setClassifierShouldRespectSystemGestureTouchFiltering:(bool)arg1;
- (void)_setTargetState:(long long)arg1;
- (long long)_targetState;
- (bool)completesAtTargetState;
- (bool)didEnd;
- (bool)enteredMinimumState;
- (id)initWithGestureRecognizer:(id)arg1;
- (id)initWithGestureRecognizer:(id)arg1 minimumRequiredState:(long long)arg2;
- (id)initWithView:(id)arg1 targetState:(long long)arg2;
- (id)initWithView:(id)arg1 targetState:(long long)arg2 minimumRequiredState:(long long)arg3;
- (void)setCompletesAtTargetState:(bool)arg1;

@end
