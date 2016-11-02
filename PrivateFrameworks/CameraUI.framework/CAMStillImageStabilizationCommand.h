/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMStillImageStabilizationCommand : CAMCaptureCommand {
    bool  __stabilizationEnabled;
}

@property (getter=_isStabilizationEnabled, nonatomic, readonly) bool _stabilizationEnabled;

- (bool)_isStabilizationEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStabilizationEnabled:(bool)arg1;

@end
