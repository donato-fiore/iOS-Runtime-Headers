// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFREPEATACTION_H
#define WFREPEATACTION_H



#import "WFControlFlowAction.h"

@interface WFRepeatAction : WFControlFlowAction

@property (readonly, nonatomic) NSInteger currentIndex; // ivar: _currentIndex
@property (readonly, nonatomic) NSUInteger numberOfLoops;


-(BOOL)displaysParameterSummary;
-(BOOL)ignoresOutputFromAction:(id)arg0 inWorkflow:(id)arg1 ;
-(BOOL)outputsMultipleItems;
-(BOOL)shouldRepeatWithVariableSource:(id)arg0 ;
-(id)createAccompanyingActions;
-(id)defaultOutputName;
-(id)indexVariableName;
-(id)indexVariableNameWithScopeLevel:(NSUInteger)arg0 ;
-(id)itemVariableNameWithScopeLevel:(NSUInteger)arg0 ;
-(id)name;
-(id)providedVariableNames;
-(void)resetEvaluationCriteriaWithVariableSource:(id)arg0 ;
-(void)runWithInput:(id)arg0 error:(*id)arg1 ;


@end


#endif