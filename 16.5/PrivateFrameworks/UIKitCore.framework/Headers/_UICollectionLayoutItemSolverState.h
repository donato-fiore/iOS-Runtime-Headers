// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOLLECTIONLAYOUTITEMSOLVERSTATE_H
#define _UICOLLECTIONLAYOUTITEMSOLVERSTATE_H

@class NSArray, NSDictionary, NSString;
@protocol _UICollectionLayoutAuxillaryOffsets;

#import <Foundation/Foundation.h>

#import "_UIRTree.h"

@interface _UICollectionLayoutItemSolverState : NSObject {
    NSArray *_itemFrames;
    NSArray *_auxillaryFrames;
    NSDictionary *_supplementaryDictByKindIndex;
    id<_UICollectionLayoutAuxillaryOffsets> *_supplementaryFrameOffsets;
    _UIRTree *_geometricIndexer;
    NSArray *_solutionFrames;
    NSInteger _itemFrameCount;
    NSInteger _supplementaryFrameCount;
    NSArray *_availableLayoutSpaces;
    NSString *_errorDescription;
    CGPoint _additionalOffsetForOutermostGroup;
    CGRect _solvedFittingFrame;
}






@end


#endif