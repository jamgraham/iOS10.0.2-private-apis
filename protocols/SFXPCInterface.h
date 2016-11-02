/* Generated by RuntimeBrowser.
 */

@protocol SFXPCInterface

@optional

- (void)deviceDiscoveryDeviceChanged:(SFDevice *)arg1 changes:(unsigned int)arg2;
- (void)deviceDiscoveryFoundDevice:(SFDevice *)arg1;
- (void)deviceDiscoveryLostDevice:(SFDevice *)arg1;
- (void)remoteInteractionSessionTextSessionDidBegin:(SFRemoteTextSessionInfo *)arg1;
- (void)remoteInteractionSessionTextSessionDidChange:(SFRemoteTextSessionInfo *)arg1;
- (void)remoteInteractionSessionTextSessionDidEnd:(SFRemoteTextSessionInfo *)arg1;
- (void)serviceError:(NSError *)arg1;
- (void)serviceReceivedEvent:(SFEventMessage *)arg1;
- (void)serviceReceivedRequest:(SFRequestMessage *)arg1;
- (void)serviceReceivedResponse:(SFResponseMessage *)arg1;
- (void)sessionError:(NSError *)arg1;
- (void)sessionReceivedEvent:(SFEventMessage *)arg1;
- (void)sessionReceivedRequest:(SFRequestMessage *)arg1;
- (void)sessionReceivedResponse:(SFResponseMessage *)arg1;

@end
