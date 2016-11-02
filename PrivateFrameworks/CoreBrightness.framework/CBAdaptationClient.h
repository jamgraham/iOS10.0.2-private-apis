/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface CBAdaptationClient : NSObject {
    int  _mode;
    bool  _modeSet;
    bool  _supported;
    BrightnessSystemClient * bsc;
    bool  ownsClient;
}

@property bool supported;

+ (bool)supportsAdaptation;

- (bool)animateFromWeakestAdaptationModeInArray:(int*)arg1 withLength:(int)arg2 toWeakestInArray:(int*)arg3 withLength:(int)arg4 withProgress:(float)arg5 andPeriod:(float)arg6;
- (void)dealloc;
- (int)getAdaptationMode;
- (bool)getEnabled;
- (bool)getStrengths:(float*)arg1 nStrengths:(int)arg2;
- (id)init;
- (id)initWithClientObj:(id)arg1;
- (bool)overrideStrengths:(float*)arg1 forModes:(int*)arg2 nModes:(int)arg3;
- (bool)setAdaptationMode:(int)arg1 withPeriod:(float)arg2;
- (bool)setEnabled:(bool)arg1;
- (void)setSupported:(bool)arg1;
- (bool)setWeakestAdaptationModeFromArray:(int*)arg1 withLength:(int)arg2 andPeriod:(float)arg3;
- (bool)supported;

@end
