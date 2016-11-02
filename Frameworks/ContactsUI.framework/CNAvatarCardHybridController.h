/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNAvatarCardHybridController : CNAvatarCardController <CNAvatarCardViewControllerDelegate, UIAlertControllerSystemProvidedPresentationDelegate> {
    UIAlertController * _alertController;
    CNAvatarCardViewController * _cardViewController;
}

@property (nonatomic, retain) UIAlertController *alertController;
@property (nonatomic, retain) CNAvatarCardViewController *cardViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didBeginSystemProvidedPresentationOfAlertController:(id)arg1;
- (void)_prepareAlertController;
- (id)_presentingViewControllerForSystemProvidedPresentationOfAlertController:(id)arg1;
- (void)_setupAlertController;
- (void)_setupCardViewControllerWithContacts:(id)arg1;
- (bool)_shouldPerformSystemProvidedPresentationOfAlertController:(id)arg1 atSystemProvidedPresentationRegisteredViewLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)_willBeginSystemProvidedPresentationOfAlertController:(id)arg1;
- (id)alertController;
- (id)cardViewController;
- (id)cardViewController:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (void)cardViewController:(id)arg1 willShowActions:(id)arg2;
- (void)cardViewControllerDidDismiss:(id)arg1;
- (void)cardViewControllerDidUpdatePreferredSize:(id)arg1;
- (void)cardViewControllerWillDismiss:(id)arg1;
- (void)dismissAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (bool)isVisible;
- (id)preparedViewControllerForPresentationWithGestureRecognizer:(id)arg1;
- (void)presentAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)setAlertController:(id)arg1;
- (void)setCardViewController:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setSourceView:(id)arg1;

@end
