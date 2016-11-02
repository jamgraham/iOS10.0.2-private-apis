/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHUnauthorizedFetchResult : PHFetchResult {
    id /* block */  _fetchBlock;
    NSString * _identifier;
    NSOrderedSet * _objectIDs;
    NSArray * _objects;
    PHFetchOptions * _options;
}

@property (readonly) id /* block */ fetchBlock;
@property (readonly) NSString *identifier;
@property (readonly) NSOrderedSet *objectIDs;
@property (readonly) NSArray *objects;
@property (readonly, copy) PHFetchOptions *options;

- (void).cxx_destruct;
- (id)changeHandlingKey;
- (id)changeHandlingValueUsingSeedOids:(id)arg1 withChange:(id)arg2 usingManagedObjectContext:(id)arg3;
- (long long)collectionFetchType;
- (id)containerIdentifier;
- (id)copyWithOptions:(id)arg1;
- (id)description;
- (id /* block */)fetchBlock;
- (id)fetchRequest;
- (id)fetchResultWithChangeHandlingValue:(id)arg1;
- (id)fetchedObjectIDs;
- (id)fetchedObjects;
- (void)getMediaTypeCounts;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithOptions:(id)arg1 fetchBlock:(id /* block */)arg2;
- (bool)isEqual:(id)arg1;
- (id)objectIDAtIndex:(unsigned long long)arg1;
- (id)objectIDs;
- (id)objects;
- (id)options;
- (id)photoLibrary;
- (unsigned long long)possibleChangesForChange:(id)arg1;
- (void)prefetchObjectsAtIndexes:(id)arg1;
- (void)updateRegistrationForChangeNotificationDeltas;

@end
