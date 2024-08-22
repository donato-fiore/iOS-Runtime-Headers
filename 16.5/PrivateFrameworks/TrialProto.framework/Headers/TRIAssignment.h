// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIASSIGNMENT_H
#define TRIASSIGNMENT_H



#import "TRIPBMessage.h"
#import "TRIBackgroundMLTaskAssignmentLanguage.h"
#import "TRICoreMLAssignmentLanguage.h"
#import "TRICustomTargetingPredicateLanguage.h"
#import "TRINSExpressionAssignmentLanguage.h"
#import "TRIPlanOutAssignmentLanguage.h"
#import "TRIRolloutAssignmentLanguage.h"
#import "TRIUIAssignmentLanguage.h"

@interface TRIAssignment : TRIPBMessage

@property (retain, nonatomic) TRIBackgroundMLTaskAssignmentLanguage *backgroundMlTaskLanguage;
@property (retain, nonatomic) TRICoreMLAssignmentLanguage *coremlLanguage;
@property (retain, nonatomic) TRICustomTargetingPredicateLanguage *customTargetingLanguage;
@property (readonly, nonatomic) int languageOneOfCase;
@property (retain, nonatomic) TRINSExpressionAssignmentLanguage *nsexpressionLanguage;
@property (retain, nonatomic) TRIPlanOutAssignmentLanguage *planoutLanguage;
@property (retain, nonatomic) TRIRolloutAssignmentLanguage *rolloutLanguage;
@property (retain, nonatomic) TRIUIAssignmentLanguage *uiLanguage;


+(id)descriptor;


@end


#endif