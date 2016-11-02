/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKAnnotationContainerView : UIView <MKAnnotationCalloutControllerDelegate, _MKPinAnnotationViewDelegate> {
    bool  _addingSubview;
    MKAnnotationView * _annotationViewToSelect;
    NSMutableArray * _annotationViews;
    double  _annotationViewsRotationRadians;
    NSMutableArray * _awaitingDropPins;
    _MKBalloonAnnotationCalloutController * _balloonCalloutController;
    MKAnnotationCalloutController * _calloutController;
    bool  _clickedOnAnnotationView;
    <MKAnnotationContainerViewDelegate> * _delegate;
    bool  _didDragAnnotationView;
    MKAnnotationView * _draggingAnnotationView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _draggingAnnotationViewCenter;
    struct { 
        unsigned char timePeriod; 
        unsigned char overlayType; 
        unsigned char applicationState; 
        unsigned char searchResultsType; 
        bool mapHasLabels; 
    }  _mapDisplayStyle;
    double  _mapPitchRadians;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _mapTransform;
    unsigned long long  _mapType;
    struct CGPoint { 
        double x; 
        double y; 
    }  _mouseDownPoint;
    MKAnnotationView * _selectedAnnotationView;
    bool  _suppressCallout;
    MKAnnotationView * _userLocationView;
    NSMutableSet * _viewsToAnimate;
}

@property (nonatomic) bool allowsPopoverWhenNotInWindow;
@property (nonatomic, readonly) NSMutableArray *annotationViews;
@property (nonatomic, readonly) MKPinAnnotationView *bubblePin;
@property (nonatomic, readonly) MKAnnotationView *calloutAnnotationView;
@property (nonatomic, readonly) struct { long long x1; struct CLLocationCoordinate2D { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; id x5; } currentComparisonContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKAnnotationContainerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasDroppingPins;
@property (nonatomic, readonly) bool hasPendingAnimations;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long mapType;
@property (nonatomic, readonly) UIPopoverController *popoverController;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressCallout;
@property (nonatomic, readonly) MKAnnotationView *userLocationView;

- (void).cxx_destruct;
- (id)_annotationViewForSelectionAtPoint:(struct CGPoint { double x1; double x2; })arg1 avoidCurrent:(bool)arg2 maxDistance:(double)arg3;
- (void)_dropDraggingAnnotationViewAnimated:(bool)arg1;
- (void)_dropPinsIfNeeded:(bool)arg1;
- (void)_findNextView:(id*)arg1 orientation:(int*)arg2 context:(id)arg3;
- (void)_liftForDragging:(id)arg1 mouseDownPoint:(struct CGPoint { double x1; double x2; })arg2;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_mapRectWithFraction:(double)arg1 ofVisible:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_setSelectedAnnotationView:(id)arg1 bounce:(bool)arg2 pressed:(bool)arg3 scrollToFit:(bool)arg4;
- (void)_setSelectedAnnotationView:(id)arg1 bounce:(bool)arg2 pressed:(bool)arg3 scrollToFit:(bool)arg4 avoid:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (void)_showBubbleForAnnotationView:(id)arg1 bounce:(bool)arg2 scrollToFit:(bool)arg3;
- (void)_showBubbleForAnnotationView:(id)arg1 bounce:(bool)arg2 scrollToFit:(bool)arg3 avoid:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)_updateAddedAnnotationRotation:(id)arg1;
- (void)_updateAnnotationView:(id)arg1;
- (void)_updateAnnotationViewPerspective;
- (void)_updateOrientationOfViews:(id)arg1;
- (void)_updateOrientationOfViews:(id)arg1 relative:(id)arg2 projectionView:(id)arg3;
- (void)_updateOrientationOfViewsCorrect:(id)arg1 relative:(id)arg2 projectionView:(id)arg3;
- (void)_updateOrientationOfViewsFast:(id)arg1 relative:(id)arg2 projectionView:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleCenteringRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleCenteringRectInView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleRect;
- (void)_willRemoveInternalAnnotationView:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })accessoryPadding;
- (id)activeCalloutController;
- (void)addAnnotationView:(id)arg1 allowAnimation:(bool)arg2;
- (void)addSubview:(id)arg1;
- (bool)allowsPopoverWhenNotInWindow;
- (void)annotationViewDidChangeCenterOffset:(id)arg1;
- (void)annotationViewDidChangeZIndex:(id)arg1;
- (id)annotationViewForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)annotationViews;
- (id)bubblePin;
- (id)calloutAnnotationView;
- (bool)calloutContainsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)calloutController:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)calloutController:(id)arg1 calloutPrimaryActionTriggeredForAnnotationView:(id)arg2;
- (void)calloutController:(id)arg1 scrollToRevealCalloutWithOffset:(struct CGPoint { double x1; double x2; })arg2 annotationCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg3 completionHandler:(id /* block */)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calloutController:(id)arg1 visibleCenteringRectInAnnotationView:(id)arg2;
- (void)calloutControllerDidFinishMapsTransitionExpanding:(id)arg1;
- (void)calloutDidAppearForAnnotationView:(id)arg1 inCalloutController:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 toPointToView:(id)arg2;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinateForAnnotationView:(id)arg1;
- (struct { long long x1; struct CLLocationCoordinate2D { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; id x5; })currentComparisonContext;
- (void)dealloc;
- (id)delegate;
- (void)deselectAnnotationView:(id)arg1 animated:(bool)arg2;
- (struct CGPoint { double x1; double x2; })draggingAnnotationViewDropPoint;
- (struct CGPoint { double x1; double x2; })draggingAnnotationViewDropPointForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)draggingTouchMovedToPoint:(struct CGPoint { double x1; double x2; })arg1 edgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)dropPinsIfNeeded;
- (void)finishAddingAnnotationViews;
- (bool)hasDroppingPins;
- (bool)hasPendingAnimations;
- (unsigned long long)indexForAnnotationView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isCalloutExpanded;
- (unsigned long long)mapType;
- (void)pinDidDrop:(id)arg1 animated:(bool)arg2;
- (struct CGPoint { double x1; double x2; })pointForCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (id)popoverController;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })popoverTargetRectForSelectedAnnotationInView:(id)arg1;
- (void)removeAnnotationView:(id)arg1;
- (void)removeAnnotationViewsRotationAnimations;
- (void)selectAnnotationView:(id)arg1 animated:(bool)arg2 avoid:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)setAllowsPopoverWhenNotInWindow:(bool)arg1;
- (void)setAnnotationViewsRotationRadians:(double)arg1 animation:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setMapDisplayStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })arg1;
- (void)setMapPitchRadians:(double)arg1;
- (void)setMapType:(unsigned long long)arg1;
- (void)setSuppressCallout:(bool)arg1;
- (void)setUserLocationView:(id)arg1;
- (void)stopSuppressingUpdates;
- (bool)suppressCallout;
- (void)suppressUpdates;
- (void)transitionFrom:(long long)arg1 to:(long long)arg2 duration:(double)arg3;
- (void)updateAnnotationLocationsDuringAnimation:(bool)arg1;
- (void)updateAnnotationView:(id)arg1;
- (void)updateUserLocationView;
- (id)userLocationView;

@end
