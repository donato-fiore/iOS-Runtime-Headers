// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFFOCUSCONFIGURATIONLINKACTION_H
#define WFFOCUSCONFIGURATIONLINKACTION_H

@class DNDModeConfigurationService;


#import "WFLinkAction.h"

@interface WFFocusConfigurationLinkAction : WFLinkAction

@property (retain, nonatomic) DNDModeConfigurationService *configurationService; // ivar: _configurationService


+(id)genericRuntimeError;
-(BOOL)isRunningInsideFocusConfigurationExtension;
-(BOOL)requiresRemoteExecution;
-(BOOL)shouldAskForValuesWhileProcessingParameterStates;
-(BOOL)shouldStripSensitiveContentFromParameterSerialization;
-(NSUInteger)parameterCollapsingBehavior;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)currentFocusConfiguration;
-(id)descriptionSummary;
-(id)dndApplicationIdentifier;
-(id)localizedAppName;
-(id)localizedSubcategoryForCategory:(id)arg0 ;
-(id)name;
-(id)parameterDefinitions;
-(id)parameterSummary;
-(id)selectedFocusIdentifier;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)clearFocusConfiguration;
-(void)createAndCommitFocusConfigurationToDND;
-(void)disableFocusConfiguration;
-(void)enableFocusConfiguration;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)setFocusConfigurationEnablementStatus:(BOOL)arg0 ;
-(void)toggleFocusConfiguration;
-(void)updateParameterStatesFromCurrentDNDConfiguration;
-(void)wasAddedToWorkflowByUser:(id)arg0 ;
-(void)willBeginProcessingParameterStates;


@end


#endif