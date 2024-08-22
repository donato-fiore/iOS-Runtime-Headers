// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIBACKGROUNDMLTASKASSIGNMENTLANGUAGE_H
#define TRIBACKGROUNDMLTASKASSIGNMENTLANGUAGE_H

@class NSString, NSMutableArray;


#import "TRIPBMessage.h"
#import "TRIPBUInt32Array.h"

@interface TRIBackgroundMLTaskAssignmentLanguage : TRIPBMessage

@property (retain, nonatomic) TRIPBUInt32Array *bucketArray;
@property (readonly, nonatomic) NSUInteger bucketArray_Count;
@property (copy, nonatomic) NSString *factorPackId;
@property (copy, nonatomic) NSString *factorPackSetId;
@property (nonatomic) BOOL hasFactorPackId;
@property (nonatomic) BOOL hasFactorPackSetId;
@property (retain, nonatomic) NSMutableArray *predicateArray;
@property (readonly, nonatomic) NSUInteger predicateArray_Count;


+(id)descriptor;


@end


#endif