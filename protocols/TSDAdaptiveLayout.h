/* Generated by RuntimeBrowser.
 */

@protocol TSDAdaptiveLayout

@required

- (struct CGPoint { double x1; double x2; })adjustMappingPointForInfo:(NSObject<TSDInfo> *)arg1 fromPoint:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGPoint { double x1; double x2; })applyAdaptiveLayoutTo:(TSDLayout *)arg1 info:(NSObject<TSDInfo> *)arg2 offset:(struct CGPoint { double x1; double x2; })arg3;
- (void)beginDynamicAdaptiveLayout;
- (void)endDynamicAdaptiveLayout;
- (bool)isSavedShiftForInfo:(NSObject<TSDInfo> *)arg1 equalToOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)resetLayout:(TSDLayout *)arg1 forInfo:(NSObject<TSDInfo> *)arg2;
- (void)updateRootLayoutShiftFor:(NSObject<TSDInfo> *)arg1 offset:(struct CGPoint { double x1; double x2; })arg2;

@end
