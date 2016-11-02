/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHFetchOptions : NSObject <NSCopying> {
    NSNumber * _cacheSizeForFetchNumber;
    NSNumber * _chunkSizeForFetchNumber;
    NSArray * _customObjectIDSortOrder;
    NSNumber * _excludeMontageAssetsNumber;
    NSNumber * _fetchLimitNumber;
    NSNumber * _includeAllBurstAssetsNumber;
    NSNumber * _includeAssetSourceTypesNumber;
    NSNumber * _includeDuplicateAssetsNumber;
    NSNumber * _includeFavoriteMemoriesCollectionListNumber;
    NSNumber * _includeHiddenAssetsNumber;
    NSNumber * _includeNonvisibleFacesNumber;
    NSNumber * _includePendingMemoriesNumber;
    NSNumber * _includePlacesSmartAlbumNumber;
    NSNumber * _includeRejectedMemoriesNumber;
    NSNumber * _includeTrashedAssetsNumber;
    NSNumber * _includeWallpaperAssetsNumber;
    NSPredicate * _internalInclusionPredicate;
    NSPredicate * _internalPredicate;
    NSArray * _internalSortDescriptors;
    NSNumber * _minimumUnverifiedFaceCountNumber;
    NSNumber * _minimumVerifiedFaceCountNumber;
    NSNumber * _personContextNumber;
    PHPhotoLibrary * _photoLibrary;
    NSPredicate * _predicate;
    NSMutableSet * _propertySets;
    NSNumber * _reverseSortOrderNumber;
    NSNumber * _shouldPrefetchCountNumber;
    NSArray * _sortDescriptors;
    NSString * _transientIdentifier;
    NSNumber * _wantsIncrementalChangeDetailsNumber;
}

@property (nonatomic) long long cacheSizeForFetch;
@property (nonatomic) long long chunkSizeForFetch;
@property (nonatomic, retain) NSArray *customObjectIDSortOrder;
@property (nonatomic) bool excludeMontageAssets;
@property (nonatomic) unsigned long long fetchLimit;
@property (nonatomic, retain) NSArray *fetchPropertySets;
@property (nonatomic, readonly) NSSet *fetchPropertySetsAsSet;
@property (nonatomic) bool includeAllBurstAssets;
@property (nonatomic) unsigned long long includeAssetSourceTypes;
@property (nonatomic) bool includeDuplicateAssets;
@property (nonatomic) bool includeFavoriteMemoriesCollectionList;
@property (nonatomic) bool includeHiddenAssets;
@property (nonatomic) bool includeNonvisibleFaces;
@property (nonatomic) bool includePendingMemories;
@property (nonatomic) bool includePlacesSmartAlbum;
@property (nonatomic) bool includeRejectedMemories;
@property (nonatomic) bool includeTrashedAssets;
@property (nonatomic) bool includeWallpaperAssets;
@property (nonatomic, retain) NSPredicate *internalInclusionPredicate;
@property (nonatomic, retain) NSPredicate *internalPredicate;
@property (nonatomic, retain) NSArray *internalSortDescriptors;
@property (nonatomic) unsigned long long minimumUnverifiedFaceCount;
@property (nonatomic) unsigned long long minimumVerifiedFaceCount;
@property (nonatomic) long long personContext;
@property (nonatomic, retain) PHPhotoLibrary *photoLibrary;
@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic) bool reverseSortOrder;
@property (nonatomic) bool shouldPrefetchCount;
@property (nonatomic, retain) NSArray *sortDescriptors;
@property (nonatomic, retain) NSString *transientIdentifier;
@property (nonatomic) bool wantsIncrementalChangeDetails;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)fetchOptionsWithInclusiveDefaults;

- (void).cxx_destruct;
- (void)addFetchPropertySets:(id)arg1;
- (long long)cacheSizeForFetch;
- (long long)chunkSizeForFetch;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customObjectIDSortOrder;
- (id)description;
- (bool)excludeMontageAssets;
- (unsigned long long)fetchLimit;
- (id)fetchPropertySets;
- (id)fetchPropertySetsAsSet;
- (bool)includeAllBurstAssets;
- (unsigned long long)includeAssetSourceTypes;
- (bool)includeDuplicateAssets;
- (bool)includeFavoriteMemoriesCollectionList;
- (bool)includeHiddenAssets;
- (bool)includeNonvisibleFaces;
- (bool)includePendingMemories;
- (bool)includePlacesSmartAlbum;
- (bool)includeRejectedMemories;
- (bool)includeTrashedAssets;
- (bool)includeWallpaperAssets;
- (id)init;
- (id)internalInclusionPredicate;
- (id)internalPredicate;
- (id)internalSortDescriptors;
- (void)mergeWithFetchOptions:(id)arg1;
- (unsigned long long)minimumUnverifiedFaceCount;
- (unsigned long long)minimumVerifiedFaceCount;
- (long long)personContext;
- (id)photoLibrary;
- (id)predicate;
- (bool)reverseSortOrder;
- (void)setCacheSizeForFetch:(long long)arg1;
- (void)setChunkSizeForFetch:(long long)arg1;
- (void)setCustomObjectIDSortOrder:(id)arg1;
- (void)setExcludeMontageAssets:(bool)arg1;
- (void)setFetchLimit:(unsigned long long)arg1;
- (void)setFetchPropertySets:(id)arg1;
- (void)setIncludeAllBurstAssets:(bool)arg1;
- (void)setIncludeAssetSourceTypes:(unsigned long long)arg1;
- (void)setIncludeDuplicateAssets:(bool)arg1;
- (void)setIncludeFavoriteMemoriesCollectionList:(bool)arg1;
- (void)setIncludeHiddenAssets:(bool)arg1;
- (void)setIncludeNonvisibleFaces:(bool)arg1;
- (void)setIncludePendingMemories:(bool)arg1;
- (void)setIncludePlacesSmartAlbum:(bool)arg1;
- (void)setIncludeRejectedMemories:(bool)arg1;
- (void)setIncludeTrashedAssets:(bool)arg1;
- (void)setIncludeWallpaperAssets:(bool)arg1;
- (void)setInternalInclusionPredicate:(id)arg1;
- (void)setInternalPredicate:(id)arg1;
- (void)setInternalSortDescriptors:(id)arg1;
- (void)setMinimumUnverifiedFaceCount:(unsigned long long)arg1;
- (void)setMinimumVerifiedFaceCount:(unsigned long long)arg1;
- (void)setPersonContext:(long long)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)setReverseSortOrder:(bool)arg1;
- (void)setShouldPrefetchCount:(bool)arg1;
- (void)setSortDescriptors:(id)arg1;
- (void)setTransientIdentifier:(id)arg1;
- (void)setWantsIncrementalChangeDetails:(bool)arg1;
- (bool)shouldPrefetchCount;
- (id)sortDescriptors;
- (id)transientIdentifier;
- (bool)wantsIncrementalChangeDetails;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_standardFetchOptions;

@end