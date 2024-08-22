// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOLLECTIONLAYOUTSECTIONESTIMATEDSOLVER_H
#define _UICOLLECTIONLAYOUTSECTIONESTIMATEDSOLVER_H

@class NSString, NSCollectionLayoutSection, NSIndexSet;
@protocol _UICollectionLayoutSectionSolver, _UICollectionLayoutAuxillaryHosting, NSCollectionLayoutContainer;

#import <Foundation/Foundation.h>

#import "_UICollectionPreferredSizes.h"
#import "_UICollectionLayoutAuxillaryItemSolver.h"
#import "_UICollectionLayoutSupplementaryEnroller.h"
#import "_UICollectionLayoutSolutionState.h"
#import "UITraitCollection.h"

@interface _UICollectionLayoutSectionEstimatedSolver : NSObject <_UICollectionLayoutSectionSolver, _UICollectionLayoutAuxillaryHosting>

 {
    _UICollectionPreferredSizes *_preferredSizes;
    _UICollectionLayoutAuxillaryItemSolver *_sectionSupplementarySolution;
    _UICollectionLayoutSupplementaryEnroller *_sectionSupplementaryEnroller;
    id<NSCollectionLayoutContainer> *_memoizedSupplementaryHostContainer;
    _UICollectionLayoutSolutionState *_solutionState;
    NSUInteger _containerLayoutAxis;
    CGRect _overrideContentRectForPinning;
}


@property (readonly, nonatomic) NSObject<NSCollectionLayoutContainer> *container; // ivar: _container
@property (readonly, nonatomic) NSUInteger containerSizeDependentAxes; // ivar: _containerSizeDependentAxes
@property (readonly, nonatomic) CGSize contentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGRect effectiveContentFrame;
@property (readonly, nonatomic) NSString *errorDescription; // ivar: _errorDescription
@property (readonly, nonatomic) NSInteger frameCount; // ivar: _frameCount
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger layoutAxis; // ivar: _layoutAxis
@property (readonly, nonatomic) BOOL layoutRTL; // ivar: _layoutRTL
@property (readonly, nonatomic) NSCollectionLayoutSection *layoutSection; // ivar: _layoutSection
@property (nonatomic) CGPoint orthogonalOffset; // ivar: _orthogonalOffset
@property (nonatomic) CGVector orthogonalScrollingPrefetchingUnitVector; // ivar: _orthogonalScrollingPrefetchingUnitVector
@property (readonly, nonatomic) NSIndexSet *pinnedSupplementaryIndexes;
@property (nonatomic) BOOL shouldAdjustContentSizeForPartialLastGroupSolution; // ivar: _shouldAdjustContentSizeForPartialLastGroupSolution
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<NSCollectionLayoutContainer> *supplementaryContainer; // ivar: _supplementaryContainer
@property (readonly, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection


-(BOOL)auxillaryHostShouldLayoutRTL;
-(BOOL)auxillaryHostWantsOverlapAdjustmentForMatchingAlignmentsOnly;
-(CGFloat)_dimensionForRootGroupAlongAxis:(NSUInteger)arg0 ;
-(CGFloat)auxillaryHostPaddingBeforeBoundarySupplementaries;
-(NSInteger)auxillaryHostAuxillaryKind;
-(NSInteger)sectionSupplementaryKindIndexForEnrollmentIdentifier:(id)arg0 ;
-(NSUInteger)auxillaryHostLayoutAxis;
-(id)_indexesOfBookmarksAffectedByResolveItems:(id)arg0 ;
-(id)_sectionContainer;
-(id)_solveWithParameters:(id)arg0 ;
-(id)auxillaryHostAuxillaryItems;
-(id)auxillaryHostContainer;
-(id)auxillaryHostPreferredSizes;
-(id)auxillaryHostSupplementaryEnroller;
-(id)auxillaryHostTraitCollection;
-(id)frameForIndex:(NSInteger)arg0 ;
-(id)queryFramesIntersectingRect:(struct CGRect )arg0 ;
-(id)queryFramesIntersectingRect:(struct CGRect )arg0 frameOffset:(struct CGPoint )arg1 ;
-(id)resolveWithParameters:(id)arg0 preferredSizes:(id)arg1 ;
-(id)sectionSupplementaryFrameForIndex:(NSInteger)arg0 ;
-(id)sectionSupplementaryFrameWithKind:(id)arg0 index:(NSInteger)arg1 ;
-(id)supplementaryFrameWithKind:(id)arg0 index:(NSInteger)arg1 ;
-(id)unpinnedSectionSupplementaryFrameForIndex:(NSInteger)arg0 ;
-(id)visualDescription;
-(struct CGRect )_adjustContentFrameForLastPartialSolutionIfNeededForContentFrame:(struct CGRect )arg0 bookmarks:(id)arg1 ;
-(struct CGRect )_rectWithContentInsetTrailingLayoutDimensionAddedToToRect:(struct CGRect )arg0 insets:(struct NSDirectionalEdgeInsets )arg1 layoutAxis:(NSUInteger)arg2 ;
-(struct CGRect )auxillaryHostPinningRect;
-(struct CGSize )auxillaryHostContentSize;
-(void)_configureInitialOrthogonalPrefetchingUnitVector;
-(void)_updateSolutionAuxillaryRangeIndexerKindDict:(id)arg0 fromBookmark:(id)arg1 ;
-(void)solveForContainer:(id)arg0 supplementaryContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(NSUInteger)arg3 frameCount:(NSInteger)arg4 preferredSizes:(id)arg5 layoutRTL:(BOOL)arg6 ;
-(void)solveForContainer:(id)arg0 traitCollection:(id)arg1 layoutAxis:(NSUInteger)arg2 frameCount:(NSInteger)arg3 ;
-(void)solveForContainer:(id)arg0 traitCollection:(id)arg1 layoutAxis:(NSUInteger)arg2 frameCount:(NSInteger)arg3 preferredSizes:(id)arg4 ;
-(void)updatePinnedSupplementaryItemsWithVisibleBounds:(struct CGRect )arg0 ;
-(void)updatePinnedSupplementaryItemsWithVisibleBounds:(struct CGRect )arg0 overrideContentRectForPinning:(struct CGRect )arg1 ;


@end


#endif