/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
 */

@interface ABLEModelController : NSObject <ABLEEvents> {
    unsigned long long  _priority;
    bool  valid;
}

@property (readonly) NSDictionary *currentState;
@property (readonly) bool enabled;
@property (readonly) bool expires;
@property (readonly) NSDate *expiryDate;
@property unsigned long long priority;
@property bool valid;

- (void)calculateBONForCurrentLevel:(float)arg1 andChargeState:(bool)arg2 atDate:(id)arg3 onQueue:(id)arg4 usingHandler:(id /* block */)arg5;
- (id)currentState;
- (bool)enabled;
- (bool)existsDataForPredictionUsingDay:(id)arg1 andOffsetDays:(id)arg2;
- (bool)existsDataForPredictionUsingDefaultOffsetsAndDay:(id)arg1;
- (void)expireImmediately;
- (bool)expires;
- (id)expiryDate;
- (id)init;
- (unsigned long long)priority;
- (void)resetModel;
- (void)setPriority:(unsigned long long)arg1;
- (void)setValid:(bool)arg1;
- (void)significantEventAtDate:(id)arg1;
- (void)updateConfiguration:(id)arg1;
- (bool)valid;

@end
