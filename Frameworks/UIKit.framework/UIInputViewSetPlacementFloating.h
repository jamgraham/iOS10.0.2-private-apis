/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewSetPlacementFloating : UIInputViewSetPlacementUndocked <NSSecureCoding, _UIGeometryChangeObserver> {
    double  _floatingWidth;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _responderRect;
    UIView * _responderToFollow;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double floatingWidth;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIResponder *responderToFollow;
@property (readonly) Class superclass;

+ (id)infoWithPoint:(struct CGPoint { double x1; double x2; })arg1 forOwner:(id)arg2;
+ (id)placementWithUndockedOffset:(struct CGPoint { double x1; double x2; })arg1 chromeBuffer:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 floatingWidth:(double)arg3;
+ (bool)supportsSecureCoding;

- (void)_geometryChanges:(id)arg1 forAncestor:(id)arg2;
- (Class)applicatorClassForKeyboard:(bool)arg1;
- (id)applicatorInfoForOwner:(id)arg1;
- (void)checkSizeForOwner:(id)arg1;
- (id)currentResponderView;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (double)floatingWidth;
- (id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)responderToFollow;
- (void)setDelegate:(id)arg1;
- (void)setFloatingWidth:(double)arg1;
- (void)setResponderToFollow:(id)arg1;
- (id)widthConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;

@end
