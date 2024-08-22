// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOLLECTIONCOMPOSITIONALLAYOUTSOLVER_H
#define _UICOLLECTIONCOMPOSITIONALLAYOUTSOLVER_H

@class NSIndexSet, NSArray, NSMutableDictionary, NSString;
@protocol _UICollectionLayoutAuxillaryHosting, _UIDynamicReferenceSystem;

#import <Foundation/Foundation.h>

#import "_UICollectionLayoutContainer.h"
#import "UITraitCollection.h"
#import "_UIDataSourceSnapshotter.h"
#import "_UICollectionCompositionalLayoutSolverOptions.h"
#import "_UICollectionCompositionalLayoutDynamicAnimator.h"
#import "_UICollectionLayoutDynamicsConfiguration.h"
#import "_UIRTree.h"
#import "_UICollectionLayoutSectionGeometryTranslator.h"
#import "_UICollectionLayoutAuxillaryItemSolver.h"
#import "_UICollectionPreferredSizes.h"

@interface _UICollectionCompositionalLayoutSolver : NSObject <_UICollectionLayoutAuxillaryHosting, _UIDynamicReferenceSystem>

 {
    BOOL _estimatesSizes;
    BOOL _hasOrthogonalScrollingSections;
    BOOL _hasSectionsWithCustomContainers;
    BOOL _shouldPerformPhysicalRTLTransforms;
    BOOL _roundsToScreenScale;
    BOOL _layoutRTL;
    id *_cellLayoutAttributesTransformer;
    id *_sectionDecorationLayoutAttributesTransformer;
    id *_sectionSupplementaryLayoutAttributesTransformer;
    _UICollectionLayoutContainer *_container;
    UITraitCollection *_traitCollection;
    NSUInteger _layoutAxis;
    _UIDataSourceSnapshotter *_dataSourceSnapshot;
    CGFloat _interSectionSpacing;
    NSIndexSet *_orthogonalScrollingSectionIndexes;
    NSIndexSet *_customContainerSectionIndexes;
    id *_dynamicsConfigurationHandler;
    _UICollectionCompositionalLayoutSolverOptions *_options;
    Class _layoutAttributeClass;
    Class _invalidationContextClass;
    id *_invalidationHandler;
    CGFloat _memoizedScreenScale;
    id *_sectionProvider;
    NSIndexSet *_solutionBookmarkIndexesWithPinnedSupplementaryItems;
    _UICollectionCompositionalLayoutDynamicAnimator *_dynamicAnimator;
    _UICollectionLayoutDynamicsConfiguration *_dynamicsConfiguration;
    NSArray *_solutionBookmarks;
    _UIRTree *_sectionIndexer;
    _UICollectionLayoutSectionGeometryTranslator *_sectionGeometryTranslator;
    NSMutableDictionary *_cachedItemAttributes;
    NSMutableDictionary *_cachedSupplementaryAttributes;
    NSMutableDictionary *_cachedDecorationAttributes;
    NSUInteger _preUpdateCachedItemCount;
    NSArray *_globalSupplementaryItems;
    _UICollectionLayoutAuxillaryItemSolver *_globalSupplementarySolver;
    _UICollectionPreferredSizes *_globalSupplementaryPreferredSizes;
    NSInteger _numberOfSectionsWithTransformVisibleItemsHandler;
    NSUInteger _containerSizeDependentAxes;
    CGSize _actualContentSize;
}


@property (readonly, nonatomic) CGRect bounds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)auxillaryHostShouldLayoutRTL;
-(BOOL)auxillaryHostWantsOverlapAdjustmentForMatchingAlignmentsOnly;
-(NSInteger)auxillaryHostAuxillaryKind;
-(NSUInteger)auxillaryHostLayoutAxis;
-(id)auxillaryHostAuxillaryItems;
-(id)auxillaryHostContainer;
-(id)auxillaryHostPreferredSizes;
-(id)auxillaryHostSupplementaryEnroller;
-(id)auxillaryHostTraitCollection;
-(struct CGRect )_dynamicReferenceBounds;
-(struct CGRect )auxillaryHostPinningRect;
-(struct CGSize )auxillaryHostContentSize;


@end


#endif