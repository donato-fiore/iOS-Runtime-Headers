// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFHANDLEDONATEDINTENTACTION_H
#define WFHANDLEDONATEDINTENTACTION_H

@class INIntentDescriptor, NSString, INIntent;


#import "WFHandleIntentAction.h"

@interface WFHandleDonatedIntentAction : WFHandleIntentAction {
    INIntentDescriptor *_intentDescriptor;
}


@property (readonly, nonatomic) BOOL forceExecutionOnPhone; // ivar: _forceExecutionOnPhone
@property (readonly, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier
@property (retain, nonatomic) INIntent *intent; // ivar: _intent
@property (readonly, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(id)intentActionWithShortcut:(id)arg0 forceExecutionOnPhone:(BOOL)arg1 groupIdentifier:(id)arg2 error:(*id)arg3 ;
-(id)appIdentifier;
-(id)executorWithIntent:(id)arg0 groupIdentifier:(id)arg1 ;
-(id)generatedIntentWithIdentifier:(id)arg0 input:(id)arg1 processedParameters:(id)arg2 error:(*id)arg3 ;
-(id)initWithIdentifier:(id)arg0 definition:(id)arg1 serializedParameters:(id)arg2 stringLocalizer:(id)arg3 ;
-(id)initWithIntent:(id)arg0 ;
-(id)initWithIntent:(id)arg0 forceExecutionOnPhone:(BOOL)arg1 ;
-(id)initWithInteraction:(id)arg0 forceExecutionOnPhone:(BOOL)arg1 ;
-(id)localizedDescriptionSummary;
-(id)localizedKeyParameterDisplayName;
-(id)localizedName;
-(id)metricsIdentifier;
-(id)name;
-(id)parameterSummaryDefinition;
-(id)serializedParameters;
-(id)slots;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)continueInAppWithCompletionHandler:(id)arg0 ;
-(void)initializeParameters;


@end


#endif