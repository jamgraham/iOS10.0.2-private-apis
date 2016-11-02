/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKStarRatingAndLabelView : UIView {
    bool  _displaysSourceOfReviews;
    NSString * _fontStyleOverride;
    unsigned long long  _numberOfReviews;
    _MKUILabel * _reviewsLabel;
    NSArray * _reviewsLabelConstraints;
    NSString * _sourceName;
    MKStarRatingView * _starRatingView;
}

@property (nonatomic, retain) NSString *fontStyleOverride;
@property (nonatomic) unsigned long long numberOfReviews;
@property (nonatomic, readonly) UILabel *reviewsLabel;
@property (nonatomic, retain) NSString *sourceName;
@property (nonatomic, readonly) MKStarRatingView *starRatingView;

+ (id)ratingAndReviewsAsAttributedString:(double)arg1 style:(long long)arg2 font:(id)arg3 numberOfReviews:(unsigned long long)arg4 textColor:(id)arg5;
+ (id)ratingAndReviewsAsAttributedString:(double)arg1 style:(long long)arg2 font:(id)arg3 numberOfReviews:(unsigned long long)arg4 textColor:(id)arg5 theme:(id)arg6;
+ (id)reviewsString:(unsigned long long)arg1 providerName:(id)arg2;
+ (id)starRatingAndProviderAsAttributedStringForMapItem:(id)arg1 textColor:(id)arg2 font:(id)arg3 showReviewsOrTips:(bool)arg4;
+ (id)starRatingAndProviderAsAttributedStringForMapItem:(id)arg1 textColor:(id)arg2 font:(id)arg3 showReviewsOrTips:(bool)arg4 theme:(id)arg5;

- (void).cxx_destruct;
- (void)_mapkit_setCalloutTextColor:(id)arg1;
- (void)_updateFonts;
- (void)dealloc;
- (id)fontStyleOverride;
- (id)initWithStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (unsigned long long)numberOfReviews;
- (id)reviewsLabel;
- (void)setDisplaysSourceOfReviews:(bool)arg1;
- (void)setFontStyleOverride:(id)arg1;
- (void)setNumberOfReviews:(unsigned long long)arg1;
- (void)setSourceName:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)sourceName;
- (id)starRatingView;
- (id)viewForLastBaselineLayout;

@end