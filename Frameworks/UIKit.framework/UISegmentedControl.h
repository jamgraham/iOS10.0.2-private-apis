/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISegmentedControl : UIControl <NSCoding, _UIBasicAnimationFactory> {
    bool  __hasTranslucentOptionsBackground;
    id  _appearanceStorage;
    UIView * _backgroundBarView;
    long long  _barStyle;
    double  _enabledAlpha;
    UISegment * _focusedSegment;
    long long  _highlightedSegment;
    UIView * _removedSegment;
    struct { 
        unsigned int style : 3; 
        unsigned int size : 2; 
        unsigned int delegateAlwaysNotifiesDelegateOfSegmentClicks : 1; 
        unsigned int momentaryClick : 1; 
        unsigned int tracking : 1; 
        unsigned int autosizeToFitSegments : 1; 
        unsigned int isSizingToFit : 1; 
        unsigned int autosizeText : 1; 
        unsigned int transparentBackground : 1; 
        unsigned int useProportionalWidthSegments : 1; 
        unsigned int translucentBackground : 1; 
        unsigned int appearanceNeedsUpdate : 1; 
    }  _segmentedControlFlags;
    NSMutableArray * _segments;
    long long  _selectedSegment;
}

@property (setter=_setTranslucentOptionsBackground:, nonatomic) bool _hasTranslucentOptionsBackground;
@property (nonatomic) bool apportionsSegmentWidthsByContent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isMomentary, nonatomic) bool momentary;
@property (nonatomic, readonly) unsigned long long numberOfSegments;
@property (nonatomic, retain) UIView *removedSegment;
@property (nonatomic) long long segmentedControlStyle;
@property (nonatomic) long long selectedSegmentIndex;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *tintColor;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (double)_cornerRadiusForTraitCollection:(id)arg1;
+ (double)_dividerWidthForTraitCollection:(id)arg1;
+ (double)_lineWidthForTraitCollection:(id)arg1;
+ (id)_modernBackgroundSelected:(bool)arg1 highlighted:(bool)arg2 traitCollection:(id)arg3;
+ (id)_modernDividerImageForTraitCollection:(id)arg1;
+ (id)_tvDefaultTextColorDisabledSelected;
+ (id)_tvDefaultTextColorDisabledUserInterfaceStyleDark;
+ (id)_tvDefaultTextColorDisabledUserInterfaceStyleLight;
+ (id)_tvDefaultTextColorFocused;
+ (id)_tvDefaultTextColorNormalUserInterfaceStyleDark;
+ (id)_tvDefaultTextColorNormalUserInterfaceStyleLight;
+ (id)_tvDefaultTextColorSelected;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (double)defaultHeight;
+ (double)defaultHeightForStyle:(long long)arg1;
+ (double)defaultHeightForStyle:(long long)arg1 size:(int)arg2;

- (void).cxx_destruct;
- (id)__scalarStatisticsForUserValueChangedEvent;
- (void)_animateContentChangeWithAnimations:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)_attributedTitleForSegmentAtIndex:(unsigned long long)arg1;
- (double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (id)_badgeValueForSegmentAtIndex:(unsigned long long)arg1;
- (double)_barHeight;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)_cancelDelayedFocusAction;
- (void)_clearSelectedSegment;
- (void)_commonSegmentedControlInit;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)_createAndAddSegmentAtIndex:(int)arg1 position:(unsigned int)arg2 withInfo:(id)arg3;
- (id)_createSegmentAtIndex:(int)arg1 position:(unsigned int)arg2 withInfo:(id)arg3;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_emitValueChanged;
- (id)_firstEnabledSegment;
- (bool)_hasEnabledSegment;
- (bool)_hasTranslucentOptionsBackground;
- (void)_insertSegment:(int)arg1 withInfo:(id)arg2 animated:(bool)arg3;
- (void)_insertSegmentWithAttributedTitle:(id)arg1 atIndex:(unsigned long long)arg2 animated:(bool)arg3;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_isInMiniBar;
- (bool)_isInTranslucentToolbar;
- (id)_optionsBackgroundImage;
- (bool)_optionsShadowHidden;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_removeSegmentAnimationFinished:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_resetForAppearanceChange;
- (void)_selectFocusedSegment;
- (void)_sendFocusAction;
- (void)_setAppearanceIsTiled:(bool)arg1 leftCapWidth:(unsigned long long)arg2 rightCapWidth:(unsigned long long)arg3;
- (void)_setAttributedTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)_setAutosizeText:(bool)arg1;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setBadgeValue:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)_setControlSize:(int)arg1 andInvalidate:(bool)arg2;
- (void)_setCurrentBackgroundImage:(id)arg1;
- (void)_setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 barMetrics:(long long)arg4;
- (void)_setEnabled:(bool)arg1 forcePropagateToSegments:(bool)arg2;
- (void)_setHighlightedSegmentHighlighted:(bool)arg1;
- (void)_setNeedsAppearanceUpdate;
- (void)_setOptionsBackgroundImage:(id)arg1;
- (void)_setOptionsShadowHidden:(bool)arg1;
- (void)_setSegmentedControlAppearance:(struct { id x1; double x2; struct { id x_3_1_1; id x_3_1_2; id x_3_1_3; unsigned char x_3_1_4; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x_3_1_5; unsigned short x_3_1_6; int x_3_1_7; void*x_3_1_8; void*x_3_1_9; void*x_3_1_10; double x_3_1_11; double x_3_1_12; } x3; }*)arg1;
- (void)_setSelected:(bool)arg1 forSegmentAtIndex:(int)arg2 forceInfoDisplay:(bool)arg3;
- (void)_setSelectedSegmentIndex:(long long)arg1 notify:(bool)arg2;
- (void)_setSelectedSegmentIndex:(long long)arg1 notify:(bool)arg2 animate:(bool)arg3;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setTranslucentOptionsBackground:(bool)arg1;
- (void)_setUsesNewAnimations:(bool)arg1;
- (bool)_shouldConsumeEventWithPresses:(id)arg1;
- (bool)_shouldSelectSegmentAtIndex:(long long)arg1;
- (void)_tapSegmentAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_tintColorArchivingKey;
- (id)_uiktest_labelsWithState:(unsigned long long)arg1;
- (id)_uiktest_segmentAtIndex:(unsigned long long)arg1;
- (void)_updateDividerImageForSegmentAtIndex:(unsigned long long)arg1;
- (void)_updateOptionsBackground;
- (void)_updateTitleTextAttributes;
- (bool)_usesNewAnimations;
- (void)addSegmentWithTitle:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (bool)apportionsSegmentWidthsByContent;
- (id)backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (long long)barStyle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (bool)canBecomeFocused;
- (struct CGSize { double x1; double x2; })contentOffsetForSegment:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })contentOffsetForSegmentAtIndex:(unsigned long long)arg1;
- (struct UIOffset { double x1; double x2; })contentPositionAdjustmentForSegmentType:(long long)arg1 barMetrics:(long long)arg2;
- (int)controlSize;
- (void)dealloc;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)highlightSegment:(int)arg1;
- (id)imageForSegment:(unsigned long long)arg1;
- (id)imageForSegmentAtIndex:(unsigned long long)arg1;
- (id)infoViewForSegment:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withStyle:(long long)arg2 withItems:(id)arg3;
- (id)initWithItems:(id)arg1;
- (void)insertSegment:(unsigned long long)arg1 withImage:(id)arg2 animated:(bool)arg3;
- (void)insertSegment:(unsigned long long)arg1 withTitle:(id)arg2 animated:(bool)arg3;
- (void)insertSegmentWithImage:(id)arg1 atIndex:(unsigned long long)arg2 animated:(bool)arg3;
- (void)insertSegmentWithTitle:(id)arg1 atIndex:(unsigned long long)arg2 animated:(bool)arg3;
- (bool)isEnabledForSegment:(unsigned long long)arg1;
- (bool)isEnabledForSegmentAtIndex:(unsigned long long)arg1;
- (bool)isMomentary;
- (void)layoutSubviews;
- (unsigned long long)numberOfSegments;
- (bool)pointMostlyInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)preferredFocusedView;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)removeAllSegments;
- (void)removeSegment:(unsigned long long)arg1 animated:(bool)arg2;
- (void)removeSegmentAtIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (id)removedSegment;
- (long long)segmentControlStyle;
- (long long)segmentedControlStyle;
- (void)selectSegment:(int)arg1;
- (long long)selectedSegment;
- (long long)selectedSegmentIndex;
- (void)setAlpha:(double)arg1;
- (void)setAlwaysNotifiesDelegateOfSegmentClicks:(bool)arg1;
- (void)setApportionsSegmentWidthsByContent:(bool)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)setBarStyle:(long long)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentOffset:(struct CGSize { double x1; double x2; })arg1 forSegment:(unsigned long long)arg2;
- (void)setContentOffset:(struct CGSize { double x1; double x2; })arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)setContentPositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forSegmentType:(long long)arg2 barMetrics:(long long)arg3;
- (void)setControlSize:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 barMetrics:(long long)arg4;
- (void)setEnabled:(bool)arg1;
- (void)setEnabled:(bool)arg1 forSegment:(unsigned long long)arg2;
- (void)setEnabled:(bool)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1 forSegment:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)setImagePadding:(struct CGSize { double x1; double x2; })arg1 forSegment:(unsigned long long)arg2;
- (void)setMomentary:(bool)arg1;
- (void)setRemovedSegment:(id)arg1;
- (void)setSegmentControlStyle:(long long)arg1;
- (void)setSegmentedControlStyle:(long long)arg1;
- (void)setSelectedSegment:(long long)arg1;
- (void)setSelectedSegmentIndex:(long long)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTitle:(id)arg1 forSegment:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTransparentBackground:(bool)arg1;
- (void)setWidth:(float)arg1 forSegment:(unsigned long long)arg2;
- (void)setWidth:(double)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (bool)shouldTrack;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sizeToFit;
- (id)titleForSegment:(unsigned long long)arg1;
- (id)titleForSegmentAtIndex:(unsigned long long)arg1;
- (id)titleTextAttributesForState:(unsigned long long)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (bool)transparentBackground;
- (void)updateForMiniBarState:(bool)arg1;
- (bool)useBlockyMagnificationInClassic;
- (id)viewForLastBaselineLayout;
- (float)widthForSegment:(unsigned long long)arg1;
- (double)widthForSegmentAtIndex:(unsigned long long)arg1;
- (void)willUpdateFocusToView:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (long long)_mapkit_numberOfSegments;
- (void)_mapkit_removeAllSegments;
- (long long)_mapkit_selectedSegmentIndex;
- (void)_mapkit_setSelectedSegmentIndex:(long long)arg1;
- (void)_mapkit_setTitle:(id)arg1 forSegmentAtIndex:(long long)arg2 insertIfNeeded:(bool)arg3;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

- (void)sizeToFitWithMinimumSegmentWidth:(double)arg1 maximumTotalWidth:(double)arg2;

@end
