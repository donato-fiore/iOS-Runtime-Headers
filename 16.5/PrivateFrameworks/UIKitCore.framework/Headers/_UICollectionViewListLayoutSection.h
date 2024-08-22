// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOLLECTIONVIEWLISTLAYOUTSECTION_H
#define _UICOLLECTIONVIEWLISTLAYOUTSECTION_H

@class NSCollectionLayoutSection, NSString;
@protocol _UICollectionLayoutSectionCallback, NSCollectionLayoutEnvironment_Private;


#import "_UICollectionViewListLayoutSectionConfiguration.h"

@interface _UICollectionViewListLayoutSection : NSCollectionLayoutSection <_UICollectionLayoutSectionCallback>

 {
    _UICollectionViewListLayoutSectionConfiguration *_configuration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=_layoutEnvironment) NSObject<NSCollectionLayoutEnvironment_Private> *layoutEnvironment; // ivar: _layoutEnvironment
@property (readonly) Class superclass;


-(BOOL)__isLastItemInSection:(id)arg0 ;
-(BOOL)__isLastSection:(NSInteger)arg0 ;
-(BOOL)_adjustsLayoutToDrawTopSeparatorInSection:(NSInteger)arg0 interactionState:(id)arg1 ;
-(BOOL)_hasHeaderFooterBelowLastItemInSection:(NSInteger)arg0 interactionState:(id)arg1 ;
-(BOOL)_hasHorizontalInsets;
-(BOOL)_isRTL;
-(BOOL)_pinnedSupplementariesShouldOverlap;
-(BOOL)_shouldDrawSeparatorAtBottom:(BOOL)arg0 ofSection:(NSInteger)arg1 interactionState:(id)arg2 ;
-(BOOL)_shouldHideBottomSeparatorAtIndexPath:(id)arg0 forGrouping:(NSUInteger)arg1 considerNextCellGrouping:(BOOL)arg2 interactionState:(id)arg3 ;
-(BOOL)_shouldHideTopSeparatorAtIndexPath:(id)arg0 interactionState:(id)arg1 ;
-(BOOL)_shouldInvalidateForScrollViewLayoutAdjustmentsChange;
-(BOOL)_useRoundedSwipeActions;
-(BOOL)_wantsBandSelectionVisuals;
-(BOOL)_wantsSwipeActions;
-(BOOL)prefersListSolver;
-(BOOL)shouldRestrictOrthogonalAxisDuringInteractiveMovement;
-(CGFloat)_alignedContentMarginGivenMargin:(CGFloat)arg0 ;
-(CGFloat)_effectiveCornerRadius;
-(CGFloat)_paddingToBoundarySupplementaries;
-(NSInteger)_headerFooterPinningBehavior;
-(NSInteger)_separatorInsetBehaviorAtBottom:(BOOL)arg0 ofSection:(NSInteger)arg1 interactionState:(id)arg2 ;
-(NSUInteger)_maskedCornersForBackgroundOfItemWithSelectionGrouping:(NSUInteger)arg0 ;
-(id)_callback;
-(id)_constants;
-(id)_effectiveBackgroundColor;
-(id)_generateListSectionDataForLayoutAttributes:(id)arg0 interactionState:(id)arg1 ;
-(id)_invalidationContextForCellBackgroundOrBottomSeparatorChangeAtIndexPath:(id)arg0 interactionState:(id)arg1 separatorOnly:(BOOL)arg2 ;
-(id)_leadingSwipeActionsConfigurationForIndexPath:(id)arg0 ;
-(id)_preferredContainerBackgroundColor;
-(id)_separatorConfigurationForItemAtIndexPath:(id)arg0 withSelectionGrouping:(NSUInteger)arg1 considerNextCellGrouping:(BOOL)arg2 interactionState:(id)arg3 ;
-(id)_trailingSwipeActionsConfigurationForIndexPath:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 layoutEnvironment:(id)arg1 ;
-(struct NSDirectionalEdgeInsets )_defaultDirectionalLayoutMarginsInsideSection;
-(struct NSDirectionalEdgeInsets )_defaultSectionContentInsetsForAppearanceStyle:(NSInteger)arg0 ;
-(struct NSDirectionalEdgeInsets )_effectiveBoundarySeparatorInsets:(struct NSDirectionalEdgeInsets )arg0 ;
-(struct NSDirectionalEdgeInsets )_effectiveSectionHorizontalInsets;
-(struct NSDirectionalEdgeInsets )_effectiveSectionSupplementaryHorizontalInsets;
-(struct NSDirectionalEdgeInsets )_horizontalInsetsForInsetsReference:(NSInteger)arg0 ;
-(struct NSDirectionalEdgeInsets )_sectionPreferredBottomSeparatorInsetsForIndexPath:(id)arg0 ;
-(struct NSDirectionalEdgeInsets )_sectionPreferredTopSeparatorInsetsWithBottomInsets:(struct NSDirectionalEdgeInsets )arg0 hasCustomInsets:(*BOOL)arg1 ;
-(struct UIEdgeInsets )_defaultLayoutMarginsForSupplementaryViewWithLayoutAttributes:(id)arg0 ;
-(struct UIEdgeInsets )_defaultLayoutMarginsInsideSection;
-(struct UIEdgeInsets )_effectiveCollectionViewLayoutMarginsForAppearanceStyle:(NSInteger)arg0 forUseAsContentInsets:(BOOL)arg1 ;
-(void)_configureLayoutAttributes:(id)arg0 forSeparatorAtBottom:(BOOL)arg1 preferredConfiguration:(id)arg2 interactionState:(id)arg3 ;
-(void)_configureLayoutAttributesForBackgroundDecoration:(id)arg0 ;
-(void)_configureLayoutAttributesForPlainCell:(id)arg0 ;
-(void)_configureLayoutAttributesForPlainSupplementaryView:(id)arg0 ;
-(void)_configureLayoutAttributesForSidebarPlainCell:(id)arg0 ;
-(void)_configureLayoutAttributesForSwipeActionMasking:(id)arg0 ;
-(void)_configureLayoutAttributesWithDefaultMasking:(id)arg0 ;
-(void)_configureLayoutAttributesWithInsetGroupedMasking:(id)arg0 stylesFirstItemAsHeader:(BOOL)arg1 ;
-(void)_didEndSwiping;
-(void)_enrichLayoutAttributes:(id)arg0 interactionState:(id)arg1 ;
-(void)_transformFittingLayoutAttributes:(id)arg0 interactionState:(id)arg1 ;
-(void)_transformPreferredLayoutAttributes:(id)arg0 interactionState:(id)arg1 ;
-(void)_updateStyleForSwipeActionsConfiguration:(id)arg0 ;
-(void)_willBeginSwiping;


@end


#endif