// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCONTROLFLOWACTION_H
#define WFCONTROLFLOWACTION_H



#import "WFAction.h"
#import "WFControlFlowAttributionTracker.h"

@interface WFControlFlowAction : WFAction

@property (nonatomic, getter=isCollapsed) BOOL collapsed;
@property (weak, nonatomic) WFControlFlowAttributionTracker *controlFlowTracker; // ivar: _controlFlowTracker
@property (readonly, nonatomic) NSInteger mode; // ivar: _mode


-(BOOL)displaysParameterSummary;
-(BOOL)hasChildren;
-(BOOL)inputPassthrough;
-(BOOL)inputTypePassthrough;
-(BOOL)isDeletable;
-(BOOL)snappingPassthrough;
-(id)createAccompanyingActionWithMode:(NSInteger)arg0 ;
-(id)groupedCloseAction;
-(id)groupedIntermediaryActions;
-(id)groupedOpenAction;
-(id)iconName;
-(id)inheritedOutputContentClassesInWorkflow:(id)arg0 context:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 definition:(id)arg1 serializedParameters:(id)arg2 ;
-(id)outputContentClasses;
-(id)serializedParameters;
-(id)shortName;
-(void)generateGroupingIdentifierIfNecessary;
-(void)resetEvaluationCriteriaWithVariableSource:(id)arg0 ;


@end


#endif