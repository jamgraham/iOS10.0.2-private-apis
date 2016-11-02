/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPChangeRepeatModeCommand : MPRemoteCommand {
    long long  _currentRepeatType;
}

@property (nonatomic) long long currentRepeatType;

- (id)_mediaRemoteCommandInfoOptions;
- (long long)currentRepeatType;
- (id)newCommandEventWithType:(long long)arg1;
- (id)newCommandEventWithType:(long long)arg1 preservesRepeatMode:(bool)arg2;
- (void)setCurrentRepeatType:(long long)arg1;

@end
