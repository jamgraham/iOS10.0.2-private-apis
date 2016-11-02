/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKSmoothPathView : UIView {
    bool  _applyModelBaseScaleFactorToStroke;
    AKBitmapFIFO * _bitmapFifo;
    double  _cachedEffectiveStrokeWidthInModel;
    double  _cachedModelToViewScale;
    AKController * _controller;
    double  _currentWeight;
    <AKSmoothPathViewDelegate> * _delegate;
    bool  _disableSingleDotSpecialCase;
    bool  _hasShadow;
    CHQuadCurvePointFIFO * _interpolatingFIFO;
    bool  _isAddingPointWithoutSmoothing;
    double  _maxPressure;
    double  _maxThickness;
    double  _minPressure;
    double  _minThickness;
    bool  _prestrokedOutputMode;
    double  _shadowRadiusInModel;
    double  _shadowRadiusInView;
    double  _singleDotCurrentSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _singleDotRect;
    CHBoxcarFilterPointFIFO * _smoothingFIFO;
    bool  _startedTouchDrawing;
    UIColor * _strokeColor;
    CHPointStrokeFIFO * _strokeFIFO;
    double  _strokeWidth;
}

@property bool applyModelBaseScaleFactorToStroke;
@property (nonatomic, retain) AKBitmapFIFO *bitmapFifo;
@property double cachedModelToViewScale;
@property AKController *controller;
@property double currentWeight;
@property <AKSmoothPathViewDelegate> *delegate;
@property bool disableSingleDotSpecialCase;
@property (nonatomic) bool hasShadow;
@property (nonatomic, retain) CHQuadCurvePointFIFO *interpolatingFIFO;
@property bool isAddingPointWithoutSmoothing;
@property (nonatomic) double maxPressure;
@property (nonatomic) double maxThickness;
@property (nonatomic) double minPressure;
@property (nonatomic) double minThickness;
@property (nonatomic) bool prestrokedOutputMode;
@property double shadowRadiusInModel;
@property double shadowRadiusInView;
@property double singleDotCurrentSize;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } singleDotRect;
@property (nonatomic, retain) CHBoxcarFilterPointFIFO *smoothingFIFO;
@property (nonatomic) bool startedTouchDrawing;
@property (nonatomic, retain) UIColor *strokeColor;
@property (nonatomic, retain) CHPointStrokeFIFO *strokeFIFO;
@property (nonatomic) double strokeWidth;

+ (id)newSmoothPathViewForCurrentPlatformWithController:(id)arg1;

- (void).cxx_destruct;
- (bool)_catchUpAccumulatedTouchesForRecognizer:(id)arg1;
- (void)_clear;
- (double)_convertValueFromModelToSelf:(double)arg1;
- (double)_effectiveStrokeWidthInModel;
- (struct CGContext { }*)_getPlatformCGContext;
- (void)_pointForRecognizer:(id)arg1;
- (void)_pointForTouch:(id)arg1;
- (void)_setupFilterChainWithBitmapFifo:(bool)arg1;
- (void)_setupShadowInContext:(struct CGContext { }*)arg1;
- (void)_updateInterpolatingFifoLineWidth;
- (void)_updateShadowRadiusInView;
- (double)_windowBackingScaleFactor;
- (bool)applyModelBaseScaleFactorToStroke;
- (void)awakeFromNib;
- (id)bitmapFifo;
- (double)cachedModelToViewScale;
- (void)callDelegate;
- (void)commonInit;
- (void)continueStroke;
- (void)continueStrokeWithoutSmoothing;
- (id)controller;
- (double)currentWeight;
- (id)delegate;
- (bool)disableSingleDotSpecialCase;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)drawing;
- (void)handleDragAction:(id)arg1;
- (void)handleForwardedEvent:(id)arg1;
- (void)handleTapAction:(id)arg1;
- (bool)hasShadow;
- (id)initWithController:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)interpolatingFIFO;
- (bool)isAddingPointWithoutSmoothing;
- (bool)isOpaque;
- (double)maxPressure;
- (double)maxThickness;
- (double)minPressure;
- (double)minThickness;
- (bool)prestrokedOutputMode;
- (void)setApplyModelBaseScaleFactorToStroke:(bool)arg1;
- (void)setBitmapFifo:(id)arg1;
- (void)setCachedModelToViewScale:(double)arg1;
- (void)setController:(id)arg1;
- (void)setCurrentWeight:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableSingleDotSpecialCase:(bool)arg1;
- (void)setHasShadow:(bool)arg1;
- (void)setInterpolatingFIFO:(id)arg1;
- (void)setIsAddingPointWithoutSmoothing:(bool)arg1;
- (void)setMaxPressure:(double)arg1;
- (void)setMaxThickness:(double)arg1;
- (void)setMinPressure:(double)arg1;
- (void)setMinThickness:(double)arg1;
- (void)setPrestrokedOutputMode:(bool)arg1;
- (void)setShadowRadiusInModel:(double)arg1;
- (void)setShadowRadiusInView:(double)arg1;
- (void)setSingleDotCurrentSize:(double)arg1;
- (void)setSingleDotRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSmoothingFIFO:(id)arg1;
- (void)setStartedTouchDrawing:(bool)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setStrokeFIFO:(id)arg1;
- (void)setStrokeWidth:(double)arg1;
- (double)shadowRadiusInModel;
- (double)shadowRadiusInView;
- (double)singleDotCurrentSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })singleDotRect;
- (id)smoothingFIFO;
- (void)startStroke;
- (bool)startedTouchDrawing;
- (id)strokeColor;
- (id)strokeFIFO;
- (double)strokeWidth;
- (void)teardown;
- (void)terminateStroke;
- (void)updateInterpolatingFifoUnitScale;
- (double)weightForValue:(double)arg1;

@end
