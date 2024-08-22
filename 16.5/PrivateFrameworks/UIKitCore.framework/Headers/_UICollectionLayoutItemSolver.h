// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOLLECTIONLAYOUTITEMSOLVER_H
#define _UICOLLECTIONLAYOUTITEMSOLVER_H

@class NSCollectionLayoutItem, NSString;
@protocol NSCopying, _UICollectionLayoutAuxillaryHosting, NSCollectionLayoutContainer;

#import <Foundation/Foundation.h>

#import "UITraitCollection.h"
#import "_UICollectionLayoutItemSolverState.h"
#import "_UICollectionPreferredSizes.h"
#import "_UICollectionLayoutSupplementaryEnroller.h"

@interface _UICollectionLayoutItemSolver : NSObject <NSCopying, _UICollectionLayoutAuxillaryHosting>

 {
    BOOL _layoutRTL;
    BOOL _solvingConsumedDirtyPreferredSizes;
    NSCollectionLayoutItem *_item;
    id<NSCollectionLayoutContainer> *_container;
    UITraitCollection *_traitCollection;
    NSUInteger _containerSizeDependentLayoutAxes;
    _UICollectionLayoutItemSolverState *_solveResult;
    _UICollectionPreferredSizes *_preferredSizes;
    _UICollectionLayoutSupplementaryEnroller *_supplementaryEnroller;
    NSInteger _solutionRecursionDepth;
    NSInteger _maxFrameCount;
    NSUInteger _layoutAxis;
}


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
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(struct CGPoint )auxillaryHostAdditionalFrameOffset;
-(struct CGRect )auxillaryHostPinningRect;
-(struct CGSize )auxillaryHostContentSize;


@end


#endif