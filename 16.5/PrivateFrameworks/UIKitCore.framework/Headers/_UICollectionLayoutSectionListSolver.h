// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOLLECTIONLAYOUTSECTIONLISTSOLVER_H
#define _UICOLLECTIONLAYOUTSECTIONLISTSOLVER_H

@class NSString, NSCollectionLayoutSection, NSIndexSet;
@protocol _UICollectionLayoutSectionSolver, _UICollectionLayoutAuxillaryHosting, NSCollectionLayoutContainer;

#import <Foundation/Foundation.h>

#import "_UICollectionLayoutItemSolver.h"
#import "_UICollectionLayoutAuxillaryItemSolver.h"
#import "_UICollectionLayoutSupplementaryEnroller.h"
#import "_UICollectionLayoutSectionGeometryTranslator.h"
#import "_UICollectionPreferredSizes.h"
#import "UITraitCollection.h"

@interface _UICollectionLayoutSectionListSolver : NSObject <_UICollectionLayoutSectionSolver, _UICollectionLayoutAuxillaryHosting>

 {
    vector<_UIRegionSolveResult, std::allocator<_UIRegionSolveResult>> _regions;
    unique_ptr<_UIItemSolveResult, std::default_delete<_UIItemSolveResult>> _templateItemSolveResult;
    _UICollectionLayoutItemSolver *_solution;
    _UICollectionLayoutAuxillaryItemSolver *_sectionAuxillarySolution;
    _UICollectionLayoutSupplementaryEnroller *_sectionSupplementaryEnroller;
    _UICollectionLayoutSectionGeometryTranslator *_sectionGeometryTranslator;
    id<NSCollectionLayoutContainer> *_memoizedAuxillaryHostContainer;
    _UICollectionPreferredSizes *_preferredSizes;
    CGRect _overrideContentRectForPinning;
}


@property (retain, nonatomic) NSObject<NSCollectionLayoutContainer> *container; // ivar: _container
@property (nonatomic) NSUInteger containerLayoutAxis; // ivar: _containerLayoutAxis
@property (readonly, nonatomic) NSUInteger containerSizeDependentAxes;
@property (readonly, nonatomic) CGSize contentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGRect effectiveContentFrame;
@property (readonly, nonatomic) NSString *errorDescription; // ivar: _errorDescription
@property (nonatomic) NSInteger frameCount; // ivar: _frameCount
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger layoutAxis; // ivar: _layoutAxis
@property (nonatomic) BOOL layoutRTL; // ivar: _layoutRTL
@property (retain, nonatomic) NSCollectionLayoutSection *layoutSection; // ivar: _layoutSection
@property (nonatomic) CGPoint orthogonalOffset; // ivar: _orthogonalOffset
@property (nonatomic) CGVector orthogonalScrollingPrefetchingUnitVector; // ivar: _orthogonalScrollingPrefetchingUnitVector
@property (readonly, nonatomic) NSIndexSet *pinnedSupplementaryIndexes;
@property (nonatomic) BOOL shouldAdjustContentSizeForPartialLastGroupSolution; // ivar: _shouldAdjustContentSizeForPartialLastGroupSolution
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<NSCollectionLayoutContainer> *supplementaryContainer; // ivar: _supplementaryContainer
@property (retain, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection


-(BOOL)auxillaryHostShouldLayoutRTL;
-(BOOL)auxillaryHostWantsOverlapAdjustmentForMatchingAlignmentsOnly;
-(CGFloat)_dimensionForRootGroupAlongAxis:(NSUInteger)arg0 ;
-(CGFloat)auxillaryHostPaddingBeforeBoundarySupplementaries;
-(NSInteger)auxillaryHostAuxillaryKind;
-(NSInteger)sectionSupplementaryKindIndexForEnrollmentIdentifier:(id)arg0 ;
-(NSUInteger)auxillaryHostLayoutAxis;
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
-(struct CGRect )auxillaryHostPinningRect;
-(struct CGSize )auxillaryHostContentSize;
-(void)solveForContainer:(id)arg0 supplementaryContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(NSUInteger)arg3 frameCount:(NSInteger)arg4 preferredSizes:(id)arg5 layoutRTL:(BOOL)arg6 ;
-(void)solveForContainer:(id)arg0 traitCollection:(id)arg1 layoutAxis:(NSUInteger)arg2 frameCount:(NSInteger)arg3 ;
-(void)solveForContainer:(id)arg0 traitCollection:(id)arg1 layoutAxis:(NSUInteger)arg2 frameCount:(NSInteger)arg3 preferredSizes:(id)arg4 ;
-(void)updatePinnedSupplementaryItemsWithVisibleBounds:(struct CGRect )arg0 ;
-(void)updatePinnedSupplementaryItemsWithVisibleBounds:(struct CGRect )arg0 overrideContentRectForPinning:(struct CGRect )arg1 ;


@end


#endif