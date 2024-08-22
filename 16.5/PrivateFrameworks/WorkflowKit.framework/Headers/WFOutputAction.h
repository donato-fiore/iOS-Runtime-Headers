// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFOUTPUTACTION_H
#define WFOUTPUTACTION_H



#import "WFAction.h"

@interface WFOutputAction : WFAction



-(BOOL)getInputContentFromVariablesInParameterState:(id)arg0 context:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)hasOutputFallback;
-(BOOL)outputSurfaceIsAvailable;
-(BOOL)setParameterState:(id)arg0 forKey:(id)arg1 ;
-(NSUInteger)outputBehavior;
-(id)inheritedOutputContentClassesInWorkflow:(id)arg0 context:(id)arg1 ;
-(id)outputContentClasses;
-(id)outputVariableString;
-(id)runSource;
-(id)runningContext;
-(void)finishRunningWithOutput:(id)arg0 error:(id)arg1 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif