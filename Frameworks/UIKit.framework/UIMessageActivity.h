/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMessageActivity : UIActivity {
    MFMessageComposeViewController * _messageComposeViewController;
    bool  _sourceIsManaged;
}

@property (nonatomic, retain) MFMessageComposeViewController *messageComposeViewController;
@property (nonatomic) bool sourceIsManaged;

+ (long long)activityCategory;
+ (id)applicationBundleID;

- (void).cxx_destruct;
- (id)_activityImage;
- (id)_activitySettingsImage;
- (void)_cleanup;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)dealloc;
- (id)messageComposeViewController;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setMessageComposeViewController:(id)arg1;
- (void)setSourceIsManaged:(bool)arg1;
- (bool)sourceIsManaged;

@end
