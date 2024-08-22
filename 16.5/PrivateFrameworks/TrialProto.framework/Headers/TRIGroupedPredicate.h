// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIGROUPEDPREDICATE_H
#define TRIGROUPEDPREDICATE_H

@class NSMutableArray;


#import "TRIPBMessage.h"

@interface TRIGroupedPredicate : TRIPBMessage

@property (nonatomic) BOOL hasLogicalOperator;
@property (nonatomic) int logicalOperator;
@property (retain, nonatomic) NSMutableArray *predicateGroupArray;
@property (readonly, nonatomic) NSUInteger predicateGroupArray_Count;
@property (retain, nonatomic) NSMutableArray *singlePredicateArray;
@property (readonly, nonatomic) NSUInteger singlePredicateArray_Count;


+(id)descriptor;


@end


#endif