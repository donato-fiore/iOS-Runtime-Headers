// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UICOLLECTIONVIEWFLOWLAYOUT_H
#define UICOLLECTIONVIEWFLOWLAYOUT_H

@class NSMutableDictionary, NSDictionary;
@protocol _UICollectionViewUpdateTranslating;


#import "UICollectionViewLayout.h"
#import "_UIFlowLayoutInfo.h"
#import "_UIUpdateVisibleCellsContext.h"

@interface UICollectionViewFlowLayout : UICollectionViewLayout {
    ? _gridLayoutFlags;
    _UIFlowLayoutInfo *_data;
    CGSize _currentLayoutSize;
    NSMutableDictionary *_insertedItemsAttributesDict;
    NSMutableDictionary *_insertedSectionHeadersAttributesDict;
    NSMutableDictionary *_insertedSectionFootersAttributesDict;
    NSMutableDictionary *_deletedItemsAttributesDict;
    NSMutableDictionary *_deletedSectionHeadersAttributesDict;
    NSMutableDictionary *_deletedSectionFootersAttributesDict;
    NSInteger _scrollDirection;
    NSDictionary *_rowAlignmentsOptionsDictionary;
    CGPoint _contentOffsetAdjustment;
    CGSize _contentSizeAdjustment;
    NSMutableDictionary *_cachedItemAttributes;
    NSMutableDictionary *_cachedItemFrames;
    _UIUpdateVisibleCellsContext *_updateVisibleCellsContext;
    id<_UICollectionViewUpdateTranslating> *_currentUpdateTranslator;
}


@property (nonatomic) CGSize estimatedItemSize; // ivar: _estimatedItemSize
@property (readonly, nonatomic, getter=_estimatesSizes) BOOL estimatesSizes;
@property (nonatomic) CGSize footerReferenceSize; // ivar: _footerReferenceSize
@property (nonatomic) CGSize headerReferenceSize; // ivar: _headerReferenceSize
@property (nonatomic) CGSize itemSize; // ivar: _itemSize
@property (nonatomic) CGFloat minimumInteritemSpacing; // ivar: _interitemSpacing
@property (nonatomic) CGFloat minimumLineSpacing; // ivar: _lineSpacing
@property (nonatomic) NSInteger scrollDirection;
@property (nonatomic) BOOL sectionFootersPinToVisibleBounds;
@property (nonatomic) BOOL sectionHeadersPinToVisibleBounds;
@property (nonatomic) UIEdgeInsets sectionInset; // ivar: _sectionInset
@property (nonatomic) NSInteger sectionInsetReference; // ivar: _sectionInsetReference


+(Class)invalidationContextClass;
-(BOOL)_boundsAndInsetsAreValidForReferenceDimension;
-(BOOL)_cellsShouldConferWithAutolayoutEngineForSizingInfo;
-(BOOL)_footerFollowsSectionMargins;
-(BOOL)_headerFollowsSectionMargins;
-(BOOL)_roundsToScreenScale;
-(BOOL)_shouldInvalidateLayoutForOldInsets:(struct UIEdgeInsets )arg0 newInsets:(struct UIEdgeInsets )arg1 ;
-(BOOL)_shouldInvalidateLayoutForUpdatedLayoutMargins:(struct UIEdgeInsets )arg0 fromOldMargins:(struct UIEdgeInsets )arg1 ;
-(BOOL)_shouldInvalidateLayoutForUpdatedSafeAreaInsets:(struct UIEdgeInsets )arg0 fromOldInsets:(struct UIEdgeInsets )arg1 ;
-(BOOL)_shouldScrollToContentBeginningInRightToLeft;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg0 withOriginalAttributes:(id)arg1 ;
-(CGFloat)_dimensionFromCollectionView;
-(NSInteger)_sectionArrayIndexForIndexPath:(id)arg0 ;
-(NSInteger)developmentLayoutDirection;
-(NSUInteger)_layoutAxis;
-(id)_existingLayoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)_fetchAndCacheNewLayoutAttributesForCellWithIndexPath:(id)arg0 frame:(struct CGRect )arg1 ;
-(id)_invalidationContextForUpdatedLayoutMargins:(struct UIEdgeInsets )arg0 ;
-(id)_layoutAttributesForItemsInRect:(struct CGRect )arg0 ;
-(id)_rowAlignmentOptions;
-(id)finalLayoutAttributesForDeletedItemAtIndexPath:(id)arg0 ;
-(id)finalLayoutAttributesForFooterInDeletedSection:(NSInteger)arg0 ;
-(id)finalLayoutAttributesForHeaderInDeletedSection:(NSInteger)arg0 ;
-(id)indexPathForItemAtPoint:(struct CGPoint )arg0 ;
-(id)indexesForSectionFootersInRect:(struct CGRect )arg0 ;
-(id)indexesForSectionFootersInRect:(struct CGRect )arg0 usingData:(id)arg1 ;
-(id)indexesForSectionHeadersInRect:(struct CGRect )arg0 ;
-(id)indexesForSectionHeadersInRect:(struct CGRect )arg0 usingData:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initialLayoutAttributesForFooterInInsertedSection:(NSInteger)arg0 ;
-(id)initialLayoutAttributesForHeaderInInsertedSection:(NSInteger)arg0 ;
-(id)initialLayoutAttributesForInsertedItemAtIndexPath:(id)arg0 ;
-(id)invalidationContextForBoundsChange:(struct CGRect )arg0 ;
-(id)invalidationContextForPreferredLayoutAttributes:(id)arg0 withOriginalAttributes:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForFooterInSection:(NSInteger)arg0 ;
-(id)layoutAttributesForFooterInSection:(NSInteger)arg0 usingData:(id)arg1 ;
-(id)layoutAttributesForHeaderInSection:(NSInteger)arg0 ;
-(id)layoutAttributesForHeaderInSection:(NSInteger)arg0 usingData:(id)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 usingData:(id)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(struct CGPoint )_contentOffsetForScrollingToSection:(NSInteger)arg0 ;
-(struct CGRect )_frameForFooterInSection:(NSInteger)arg0 usingData:(id)arg1 ;
-(struct CGRect )_frameForHeaderInSection:(NSInteger)arg0 usingData:(id)arg1 ;
-(struct CGRect )_frameForItem:(NSInteger)arg0 inSection:(NSInteger)arg1 usingData:(id)arg2 ;
-(struct CGSize )_effectiveEstimatedItemSize;
-(struct CGSize )collectionViewContentSize;
-(struct CGSize )synchronizeLayout;
-(struct UIEdgeInsets )_adjustedSectionInsetForSectionInset:(struct UIEdgeInsets )arg0 forAxis:(NSUInteger)arg1 ;
-(struct UIEdgeInsets )_focusFastScrollingIndexBarInsets;
-(void)_calculateAttributesForRect:(struct CGRect )arg0 ;
-(void)_didPerformUpdateVisibleCellsPassWithLayoutOffset:(struct CGPoint )arg0 logInvalidationReason:(BOOL)arg1 ;
-(void)_fetchItemsInfoForRect:(struct CGRect )arg0 ;
-(void)_finalizeCollectionViewUpdates;
-(void)_getSizingInfosWithExistingSizingDictionary:(id)arg0 ;
-(void)_invalidateButKeepAllInfo;
-(void)_invalidateButKeepDelegateInfo;
-(void)_prepareForCollectionViewUpdates:(id)arg0 withDataSourceTranslator:(id)arg1 ;
-(void)_resetCachedItems;
-(void)_setCollectionView:(id)arg0 ;
-(void)_setFooterFollowsSectionMargins:(BOOL)arg0 ;
-(void)_setHeaderFollowsSectionMargins:(BOOL)arg0 ;
-(void)_setNeedsLayoutComputationWithoutInvalidation;
-(void)_setRoundsToScreenScale:(BOOL)arg0 ;
-(void)_setRowAlignmentsOptions:(id)arg0 ;
-(void)_updateCollectionViewScrollableAxis;
-(void)_updateContentSizeScrollingDimensionWithDelta:(CGFloat)arg0 ;
-(void)_updateDelegateFlags;
-(void)_updateItemsLayoutForRect:(struct CGRect )arg0 allowsPartialUpdate:(BOOL)arg1 ;
-(void)_willPerformUpdateVisibleCellsPass;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidateLayoutWithContext:(id)arg0 ;
-(void)prepareLayout;


@end


#endif