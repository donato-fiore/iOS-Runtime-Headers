// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTTABLEMODELCELLMODIFICATIONHELPER_H
#define TSTTABLEMODELCELLMODIFICATIONHELPER_H


#import <Foundation/Foundation.h>

#import "TSTConcurrentSparseCellList.h"

@interface TSTTableModelCellModificationHelper : NSObject

@property (nonatomic) NSUInteger emptyCellCount; // ivar: _emptyCellCount
@property (readonly, nonatomic) TSUCellCoord sourceRectOrigin; // ivar: _sourceRectOrigin
@property (readonly, nonatomic) TSTConcurrentSparseCellList *sparseCellList; // ivar: _sparseCellList


+(?)perChunkHelperWithSourceRectOrigincellUIDRange;
-(?)initWithSourceRectOrigincellUIDRange;


@end


#endif