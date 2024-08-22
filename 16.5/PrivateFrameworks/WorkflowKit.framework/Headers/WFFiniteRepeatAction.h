// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFFINITEREPEATACTION_H
#define WFFINITEREPEATACTION_H



#import "WFRepeatAction.h"

@interface WFFiniteRepeatAction : WFRepeatAction {
    NSUInteger _numberOfLoops;
}




-(BOOL)shouldRepeatWithVariableSource:(id)arg0 ;
-(NSInteger)repeatCountWithVariableSource:(id)arg0 ;
-(NSUInteger)numberOfLoops;
-(id)outputVariableWithVariableProvider:(id)arg0 UUIDProvider:(id)arg1 ;
-(id)repeatCountVariableName;
-(id)repeatInputVariableName;
-(id)repeatInputWithVariableSource:(id)arg0 ;
-(void)resetEvaluationCriteriaWithVariableSource:(id)arg0 ;
-(void)runWithInput:(id)arg0 error:(*id)arg1 ;
-(void)runWithInput:(id)arg0 userInterface:(id)arg1 runningDelegate:(id)arg2 variableSource:(id)arg3 workQueue:(id)arg4 completionHandler:(id)arg5 ;
-(void)setRepeatCount:(NSInteger)arg0 withVariableSource:(id)arg1 ;
-(void)setRepeatInput:(id)arg0 withVariableSource:(id)arg1 ;


@end


#endif