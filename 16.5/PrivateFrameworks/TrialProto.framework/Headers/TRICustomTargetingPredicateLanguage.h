// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRICUSTOMTARGETINGPREDICATELANGUAGE_H
#define TRICUSTOMTARGETINGPREDICATELANGUAGE_H



#import "TRIPBMessage.h"
#import "TRIGroupedPredicate.h"

@interface TRICustomTargetingPredicateLanguage : TRIPBMessage

@property (nonatomic) BOOL hasPredicateGroup;
@property (retain, nonatomic) TRIGroupedPredicate *predicateGroup;


+(id)descriptor;


@end


#endif