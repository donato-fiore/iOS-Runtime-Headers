// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOLLECTIONESTIMATEDSOLUTIONBOOKMARK_H
#define _UICOLLECTIONESTIMATEDSOLUTIONBOOKMARK_H

@protocol _UICollectionLayoutAuxillaryOffsets;

#import <Foundation/Foundation.h>

#import "_UICollectionLayoutItemSolver.h"

@interface _UICollectionEstimatedSolutionBookmark : NSObject {
    _UICollectionLayoutItemSolver *_solution;
    id<_UICollectionLayoutAuxillaryOffsets> *_supplementaryOffsets;
    _NSRange _itemRange;
    CGRect _solutionFrame;
}




-(id)description;


@end


#endif