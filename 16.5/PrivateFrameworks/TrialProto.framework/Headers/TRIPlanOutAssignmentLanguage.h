// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIPLANOUTASSIGNMENTLANGUAGE_H
#define TRIPLANOUTASSIGNMENTLANGUAGE_H

@class NSMutableArray, NSString;


#import "TRIPBMessage.h"

@interface TRIPlanOutAssignmentLanguage : TRIPBMessage

@property (nonatomic) BOOL hasYaml;
@property (retain, nonatomic) NSMutableArray *treatmentIdArray;
@property (readonly, nonatomic) NSUInteger treatmentIdArray_Count;
@property (copy, nonatomic) NSString *yaml;


+(id)descriptor;


@end


#endif