// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTSUMMARYMODELGROUPBYCHANGESTATE_H
#define TSTSUMMARYMODELGROUPBYCHANGESTATE_H

@class TSKSosBase;


#import "TSTCellMap.h"

@interface TSTSummaryModelGroupByChangeState : TSKSosBase {
    BOOL _definedCellMap;
}


@property (retain, nonatomic) TSTCellMap *cellMap; // ivar: _cellMap
@property (readonly, nonatomic) *void labelRowHeightList; // ivar: _labelRowHeightList
@property (readonly, nonatomic) *void labelRowVisibilityList; // ivar: _labelRowVisibilityList
@property (readonly, nonatomic) *void summaryRowHeightList; // ivar: _summaryRowHeightList


-(id)initWithMessage:(*void)arg0 unarchiver:(id)arg1 ;
-(void)saveToMessage:(*void)arg0 archiver:(id)arg1 ;


@end


#endif