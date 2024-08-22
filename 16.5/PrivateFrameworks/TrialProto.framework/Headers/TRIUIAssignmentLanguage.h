// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIUIASSIGNMENTLANGUAGE_H
#define TRIUIASSIGNMENTLANGUAGE_H

@class NSMutableArray;


#import "TRIPBMessage.h"

@interface TRIUIAssignmentLanguage : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *assignmentArray;
@property (readonly, nonatomic) NSUInteger assignmentArray_Count;
@property (nonatomic) BOOL hasPreservePopulationDistribution;
@property (retain, nonatomic) NSMutableArray *predicateArray;
@property (readonly, nonatomic) NSUInteger predicateArray_Count;
@property (nonatomic) BOOL preservePopulationDistribution;


+(id)descriptor;


@end


#endif