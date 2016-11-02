/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreLibraryPersonalizationCollectionDataSource : NSObject <MPModelLazySectionedCollectionDataSource> {
    MPMediaLibraryView * _libraryView;
    NSMapTable * _relativeModelClassToMappingResponse;
    NSMutableDictionary * _sectionToLibraryAddedOverride;
    <MPMediaLibraryEntityTranslatingContext> * _translatingContext;
    MPSectionedCollection * _unpersonalizedContentDescriptors;
    MPModelRequest * _unpersonalizedRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MPMediaLibraryView *libraryView;
@property (nonatomic, copy) NSMapTable *relativeModelClassToMappingResponse;
@property (nonatomic, copy) NSMutableDictionary *sectionToLibraryAddedOverride;
@property (readonly) Class superclass;
@property (nonatomic, retain) <MPMediaLibraryEntityTranslatingContext> *translatingContext;
@property (nonatomic, retain) MPSectionedCollection *unpersonalizedContentDescriptors;
@property (nonatomic, copy) MPModelRequest *unpersonalizedRequest;

+ (id)_completePersonalizedObjectWithLibraryObject:(id)arg1 personalizationProperties:(id)arg2 overrideLibraryAddedStatus:(long long)arg3;
+ (id)_identifiersByCombiningPersonalizedIdentifiers:(id)arg1 unpersonalizedIdentifiers:(id)arg2;
+ (id)_lightweightPersonalizationPropertiesForModelClass:(Class)arg1;
+ (id)_lightweightPersonalizationPropertiesForProperties:(id)arg1 modelObject:(id)arg2 relativeModelObject:(id)arg3;
+ (id)_lightweightPersonalizedObjectWithUnpersonalizedObject:(id)arg1 libraryObject:(id)arg2 personalizationProperties:(id)arg3 overrideLibraryAddedStatus:(long long)arg4;

- (void).cxx_destruct;
- (id)_libraryObjectWithRelativeModelClass:(Class)arg1 identifierSet:(id)arg2 propertySet:(id)arg3;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)libraryView;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)relativeModelClassToMappingResponse;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (id)sectionToLibraryAddedOverride;
- (void)setLibraryView:(id)arg1;
- (void)setRelativeModelClassToMappingResponse:(id)arg1;
- (void)setSectionToLibraryAddedOverride:(id)arg1;
- (void)setTranslatingContext:(id)arg1;
- (void)setUnpersonalizedContentDescriptors:(id)arg1;
- (void)setUnpersonalizedRequest:(id)arg1;
- (id)translatingContext;
- (id)unpersonalizedContentDescriptors;
- (id)unpersonalizedRequest;

@end
