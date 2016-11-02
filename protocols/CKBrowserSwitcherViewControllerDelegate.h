/* Generated by RuntimeBrowser.
 */

@protocol CKBrowserSwitcherViewControllerDelegate <NSObject>

@required

- (void)switcherViewControllerDidCollapse:(CKBrowserSwitcherViewController *)arg1;
- (void)switcherViewControllerDidFinishSwitching:(CKBrowserSwitcherViewController *)arg1 toViewController:(UIViewController<CKBrowserViewControllerProtocol> *)arg2;

@optional

- (void)switcherViewController:(CKBrowserSwitcherViewController *)arg1 willHideSelectionViewWithAnimations:(id /* block */*)arg2 completion:(id /* block */*)arg3;
- (void)switcherViewController:(CKBrowserSwitcherViewController *)arg1 willShowSelectionViewWithAnimations:(id /* block */*)arg2 completion:(id /* block */*)arg3;
- (void)switcherViewControllerDidSelectAppStore:(CKBrowserSwitcherViewController *)arg1 shouldRestoreAppSwitcher:(bool)arg2;
- (void)switcherViewControllerDidStartSwitching:(CKBrowserSwitcherViewController *)arg1;

@end
