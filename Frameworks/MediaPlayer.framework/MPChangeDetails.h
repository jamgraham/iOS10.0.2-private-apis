/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPChangeDetails : NSObject {
    NSArray * _deletedItemIndexPaths;
    NSIndexSet * _deletedSections;
    NSArray * _insertedItemIndexPaths;
    NSIndexSet * _insertedSections;
    NSMutableDictionary * _itemMoves;
    struct vector<std::__1::pair<long, long>, std::__1::allocator<std::__1::pair<long, long> > > { 
        struct pair<long, long> {} *__begin_; 
        struct pair<long, long> {} *__end_; 
        struct __compressed_pair<std::__1::pair<long, long> *, std::__1::allocator<std::__1::pair<long, long> > > { 
            struct pair<long, long> {} *__first_; 
        } __end_cap_; 
    }  _sectionMoves;
    NSArray * _updatedItemIndexPaths;
    NSIndexSet * _updatedSections;
}

@property (nonatomic, copy) NSArray *deletedItemIndexPaths;
@property (nonatomic, copy) NSIndexSet *deletedSections;
@property (nonatomic, copy) NSArray *insertedItemIndexPaths;
@property (nonatomic, copy) NSIndexSet *insertedSections;
@property (nonatomic, copy) NSArray *updatedItemIndexPaths;
@property (nonatomic, copy) NSIndexSet *updatedSections;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)appendItemMoveFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)appendSectionMoveFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (id)deletedItemIndexPaths;
- (id)deletedSections;
- (id)description;
- (void)enumerateItemMovesWithBlock:(id /* block */)arg1;
- (void)enumerateSectionMovesWithBlock:(id /* block */)arg1;
- (id)initWithBlock:(id /* block */)arg1;
- (id)insertedItemIndexPaths;
- (id)insertedSections;
- (void)setDeletedItemIndexPaths:(id)arg1;
- (void)setDeletedSections:(id)arg1;
- (void)setInsertedItemIndexPaths:(id)arg1;
- (void)setInsertedSections:(id)arg1;
- (void)setUpdatedItemIndexPaths:(id)arg1;
- (void)setUpdatedSections:(id)arg1;
- (id)updatedItemIndexPaths;
- (id)updatedSections;

@end
