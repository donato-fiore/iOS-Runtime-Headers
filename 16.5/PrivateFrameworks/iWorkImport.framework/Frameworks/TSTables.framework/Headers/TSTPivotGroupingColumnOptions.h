// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTPIVOTGROUPINGCOLUMNOPTIONS_H
#define TSTPIVOTGROUPINGCOLUMNOPTIONS_H


#import <Foundation/Foundation.h>


@interface TSTPivotGroupingColumnOptions : NSObject

@property (readonly, nonatomic) NSInteger flags; // ivar: _flags
@property (readonly, nonatomic) BOOL hideTotals;
@property (readonly, nonatomic) BOOL isNotEmpty;
@property (readonly, nonatomic) BOOL repeatLabels;
@property (readonly, nonatomic) BOOL sortByGrandTotal;
@property (readonly, nonatomic) BOOL sortDescending;
@property (readonly, nonatomic) TSKUIDStruct sortingAggregateRuleUid; // ivar: _sortingAggregateRuleUid


+(id)emptyOptions;
-(id)initWithFlags:(NSInteger)arg0 sortingAggregateRuleUid:(struct TSKUIDStruct )arg1 ;


@end


#endif