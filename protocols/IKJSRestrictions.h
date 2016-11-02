/* Generated by RuntimeBrowser.
 */

@protocol IKJSRestrictions <JSExport>

@required

- (bool)allowArtistActivity;
- (bool)allowsErotica;
- (bool)allowsExplicit;
- (bool)appAnalyticsAllowed;
- (bool)appInstallationAllowed;
- (long long)maxAppRank;
- (NSString *)maxAppRating;
- (long long)maxMovieRank;
- (NSString *)maxMovieRatingForCountry:(JSValue *)arg1;
- (long long)maxTVShowRank;
- (NSString *)maxTVShowRatingForCountry:(JSValue *)arg1;

@end
