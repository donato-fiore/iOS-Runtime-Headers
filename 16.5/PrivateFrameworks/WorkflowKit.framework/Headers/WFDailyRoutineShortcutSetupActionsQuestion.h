// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFDAILYROUTINESHORTCUTSETUPACTIONSQUESTION_H
#define WFDAILYROUTINESHORTCUTSETUPACTIONSQUESTION_H

@class NSArray, NSString, WFImage;


#import "WFDailyRoutineShortcutSetupQuestion.h"
#import "WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion.h"

@interface WFDailyRoutineShortcutSetupActionsQuestion : WFDailyRoutineShortcutSetupQuestion

@property (readonly, copy, nonatomic) NSArray *actions; // ivar: _actions
@property (copy, nonatomic) NSString *addButtonTitle; // ivar: _addButtonTitle
@property (retain, nonatomic) WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion *followUpQuestion; // ivar: _followUpQuestion
@property (retain, nonatomic) WFImage *icon; // ivar: _icon
@property (copy, nonatomic) NSString *skipButtonTitle; // ivar: _skipButtonTitle


-(id)initWithPrompt:(id)arg0 subtitle:(id)arg1 actions:(id)arg2 ;


@end


#endif