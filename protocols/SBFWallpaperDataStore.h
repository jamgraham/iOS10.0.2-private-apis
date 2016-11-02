/* Generated by RuntimeBrowser.
 */

@protocol SBFWallpaperDataStore <NSObject>

@required

- (bool)hasWallpaperImageForVariant:(long long)arg1;
- (void)moveWallpaperImageDataTypes:(unsigned long long)arg1 fromVariant:(long long)arg2 toVariant:(long long)arg3;
- (NSDictionary *)proceduralWallpaperInfoForVariant:(long long)arg1;
- (void)removeProceduralWallpaperForVariants:(long long)arg1;
- (void)removeVideoForVariant:(long long)arg1;
- (void)removeWallpaperImageDataTypes:(unsigned long long)arg1 forVariants:(long long)arg2;
- (void)removeWallpaperOptionsForVariants:(long long)arg1;
- (bool)setProceduralWallpaperInfo:(NSDictionary *)arg1 forVariants:(long long)arg2;
- (bool)setVideoURL:(NSURL *)arg1 forVariant:(long long)arg2;
- (bool)setWallpaperImage:(UIImage *)arg1 forVariant:(long long)arg2;
- (bool)setWallpaperOptions:(SBFWallpaperOptions *)arg1 forVariants:(long long)arg2;
- (bool)setWallpaperOriginalImage:(UIImage *)arg1 forVariant:(long long)arg2;
- (bool)setWallpaperThumbnailData:(NSData *)arg1 forVariant:(long long)arg2;
- (NSURL *)verifiedVideoURLForVariant:(long long)arg1;
- (SBWallpaperImage *)wallpaperImageForVariant:(long long)arg1;
- (SBFWallpaperOptions *)wallpaperOptionsForVariant:(long long)arg1;
- (UIImage *)wallpaperOriginalImageForVariant:(long long)arg1;
- (NSData *)wallpaperThumbnailDataForVariant:(long long)arg1;

@end
