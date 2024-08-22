// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRICLIENTTREATMENT_H
#define TRICLIENTTREATMENT_H

@class NSMutableArray, NSString;


#import "TRIPBMessage.h"

@interface TRIClientTreatment : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *factorLevelArray;
@property (readonly, nonatomic) NSUInteger factorLevelArray_Count;
@property (nonatomic) BOOL hasTreatmentId;
@property (copy, nonatomic) NSString *treatmentId;


+(id)descriptor;


@end


#endif