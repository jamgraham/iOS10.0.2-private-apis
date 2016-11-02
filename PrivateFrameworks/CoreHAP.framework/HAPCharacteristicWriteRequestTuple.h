/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPCharacteristicWriteRequestTuple : NSObject {
    NSData * _authorizationData;
    HAPCharacteristic * _characteristic;
    NSNumber * _enableEvents;
    id  _value;
}

@property (nonatomic, retain) NSData *authorizationData;
@property (nonatomic, retain) HAPCharacteristic *characteristic;
@property (nonatomic, retain) NSNumber *enableEvents;
@property (nonatomic, retain) id value;

+ (id)writeRequestTupleForCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3;

- (void).cxx_destruct;
- (id)authorizationData;
- (id)characteristic;
- (id)enableEvents;
- (void)setAuthorizationData:(id)arg1;
- (void)setCharacteristic:(id)arg1;
- (void)setEnableEvents:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
