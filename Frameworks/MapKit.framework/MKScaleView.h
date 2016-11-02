/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKScaleView : UIView {
    UIColor * _borderColorRegular;
    UIColor * _borderColorSatellite;
    UIColor * _darkSegmentColorRegular;
    UIColor * _darkSegmentColorSatellite;
    UIView * _displayedOutline;
    double  _distanceInMeters;
    NSString * _feetAbbreviation;
    NSNumberFormatter * _floatNumberFormatter;
    NSMutableDictionary * _formattedNumberCache;
    long long  _grQuality;
    NSString * _kilometersAbbreviation;
    int  _layoutCounter;
    UIColor * _lightSegmentColorRegular;
    UIColor * _lightSegmentColorSatellite;
    double  _magicNumbers;
    NSString * _metersAbbreviation;
    NSString * _milesAbbreviation;
    long long  _oldNumberOfSegments;
    UIView * _outlineViewA;
    UIView * _outlineViewB;
    double  _resultSegmentLength;
    double  _resultSegmentLengthInMeters;
    double  _segmentLengthInPixels;
    NSMutableArray * _segments;
    _MKScaleUnitsView * _unitsView;
    bool  _useLightText;
    bool  _useMetric;
    bool  _useYardsForShortDistances;
    NSString * _yardAbbreviation;
}

@property (nonatomic) double distanceInMeters;
@property (nonatomic) bool useLightText;

- (void).cxx_destruct;
- (void)_calculateSegments;
- (id)_formattedStringForFloat:(double)arg1;
- (void)_localizedDistanceStringsWithMeters:(unsigned int)arg1 imperial:(double)arg2 useFeet:(bool)arg3 inMetric:(bool)arg4 displaysYardsForShortDistances:(bool)arg5 strings:(id)arg6;
- (id)_scaleViewFormattedStringForFloat:(double)arg1;
- (id)_scaleViewFormattedStringForInteger:(long long)arg1;
- (void)_updateSegmentStrokes;
- (void)_updateStrings;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)init;
- (void)layoutSubviews;
- (void)memoryWarning:(id)arg1;
- (void)setDistanceInMeters:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUseLightText:(bool)arg1;
- (void)updateLocale:(id)arg1;

@end