/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleHIDTransportSupport.framework/AppleHIDTransportSupport
 */

@interface AHTInterface : NSObject {
    unsigned int  _connect;
    unsigned char  _interfaceID;
    unsigned int  _service;
}

@property (nonatomic) unsigned int connect;
@property (nonatomic, readonly) unsigned char interfaceID;
@property (nonatomic) unsigned int service;

+ (id)withService:(unsigned int)arg1;

- (void)close;
- (unsigned int)connect;
- (void)dealloc;
- (bool)getReport:(unsigned char)arg1 withData:(id)arg2;
- (id)initWithService:(unsigned int)arg1;
- (unsigned char)interfaceID;
- (bool)open;
- (bool)reset;
- (unsigned int)service;
- (void)setConnect:(unsigned int)arg1;
- (bool)setPower:(bool)arg1;
- (bool)setReport:(unsigned char)arg1 withData:(id)arg2;
- (void)setService:(unsigned int)arg1;

@end