// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIUIASSIGNMENT_H
#define TRIUIASSIGNMENT_H

@class NSString;


#import "TRIPBMessage.h"
#import "TRIUIAssignment_ExplicitBuckets.h"

@interface TRIUIAssignment : TRIPBMessage

@property (readonly, nonatomic) int bucketingOneOfCase;
@property (nonatomic) BOOL control;
@property (retain, nonatomic) TRIUIAssignment_ExplicitBuckets *explicitBuckets;
@property (nonatomic) BOOL hasControl;
@property (nonatomic) BOOL hasTreatmentId;
@property (nonatomic) unsigned int numBuckets;
@property (copy, nonatomic) NSString *treatmentId;


+(id)descriptor;


@end


#endif