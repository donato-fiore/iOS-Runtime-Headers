// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITREEDATASOURCESNAPSHOTTER_H
#define _UITREEDATASOURCESNAPSHOTTER_H

@class NSMutableIndexSet;
@protocol _UITreeDataSourceSnapshotter, NSCopying;

#import <Foundation/Foundation.h>


@interface _UITreeDataSourceSnapshotter : NSObject <_UITreeDataSourceSnapshotter, NSCopying>

 {
    ? _nodes;
    NSMutableIndexSet *_expandedIndexes;
}


@property (nonatomic) NSInteger count; // ivar: _count


-(BOOL)_isNodeIndexVisible:(NSInteger)arg0 ;
-(BOOL)_shouldSplitNodeAtInsertionIndex:(NSInteger)arg0 ;
-(BOOL)hasChildrenForParentAtIndex:(NSInteger)arg0 ;
-(BOOL)indexIsExpanded:(NSInteger)arg0 ;
-(BOOL)indexIsVisible:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFlat;
-(NSInteger)_binarySearchForGlobalIndex:(NSInteger)arg0 startIndex:(NSInteger)arg1 endIndex:(NSInteger)arg2 ;
-(NSInteger)_childNodeIndexForGloalIndex:(NSInteger)arg0 ;
-(NSInteger)_indexForInsertingAfterIndex:(NSInteger)arg0 ;
-(NSInteger)_insertCount:(NSInteger)arg0 afterIndex:(NSInteger)arg1 ;
-(NSInteger)_nodeIndexForGlobalIndex:(NSInteger)arg0 ;
-(NSInteger)_parentNodeIndexForNodeIndex:(NSInteger)arg0 ;
-(NSInteger)insertCount:(NSInteger)arg0 afterIndex:(NSInteger)arg1 ;
-(NSInteger)insertCount:(NSInteger)arg0 afterIndex:(NSInteger)arg1 insertionMode:(NSInteger)arg2 ;
-(NSInteger)insertSubtreeFromSnapshotter:(id)arg0 afterIndex:(NSInteger)arg1 ;
-(NSInteger)levelForIndex:(NSInteger)arg0 ;
-(NSInteger)parentForChildAtIndex:(NSInteger)arg0 ;
-(id)_allIndexes;
-(id)_childrenForParent:(NSInteger)arg0 ;
-(id)_deleteChildNodesForParentNodeIndex:(NSInteger)arg0 ;
-(id)_snapshotterByNormalizingRangeOffsets;
-(id)_snapshotterByShiftingIndexesByCount:(NSInteger)arg0 ;
-(id)childrenForParentAtIndex:(NSInteger)arg0 ;
-(id)childrenForParentAtIndex:(NSInteger)arg0 recursive:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)expandedIndexes;
-(id)indexesForLevel:(NSInteger)arg0 ;
-(id)init;
-(id)initWithNodes:(struct vector<_UIOutlineNode, std::allocator<_UIOutlineNode>> )arg0 count:(NSInteger)arg1 expandedIndexes:(id)arg2 ;
-(id)rootIndexes;
-(id)snapshotterRepresentingSubtreeForIndex:(NSInteger)arg0 ;
-(id)snapshotterRepresentingSubtreeForIndex:(NSInteger)arg0 includingParent:(BOOL)arg1 ;
-(id)visibleIndexes;
-(id)visualDescription;
-(struct _NSRange )appendChildItemsWithCount:(NSInteger)arg0 ;
-(struct _NSRange )appendChildItemsWithCount:(NSInteger)arg0 toParentIndex:(NSInteger)arg1 ;
-(struct _UIOutlineNode )_nextNodeForNodeIndex:(*NSInteger)arg0 ;
-(struct _UIOutlineNode *)_nodeForGlobalIndex:(NSInteger)arg0 ;
-(void)_insertCount:(NSInteger)arg0 beforeIndex:(NSInteger)arg1 ;
-(void)_insertSubtreeFromSnapshotter:(id)arg0 atIndex:(NSInteger)arg1 adjustedIndex:(NSInteger)arg2 ;
-(void)_recomputeExpandedIndexesForDeletedIndexes:(id)arg0 ;
-(void)_recomputeExpandedIndexesForInsertedRange:(struct _NSRange )arg0 ;
-(void)_recomputeRangeOffsetForGlobalIndex:(NSInteger)arg0 ;
-(void)_splitNodeAtInsertionIndex:(NSInteger)arg0 ;
-(void)collapseIndexes:(id)arg0 ;
-(void)deleteIndexes:(id)arg0 ;
-(void)deleteIndexes:(id)arg0 orphanDisposition:(NSInteger)arg1 ;
-(void)expandIndexes:(id)arg0 ;
-(void)insertCount:(NSInteger)arg0 beforeIndex:(NSInteger)arg1 ;
-(void)insertSubtreeFromSnapshotter:(id)arg0 beforeIndex:(NSInteger)arg1 ;
-(void)replaceChildItemsFromSnapshotter:(id)arg0 forParentIndex:(NSInteger)arg1 ;


@end


#endif