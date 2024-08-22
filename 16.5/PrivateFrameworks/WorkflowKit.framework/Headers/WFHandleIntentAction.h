// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFHANDLEINTENTACTION_H
#define WFHANDLEINTENTACTION_H

@class NSString, INCExtensionConnection, INIntentDescription, INIntentDescriptor, INIntent, NSArray, INStringLocalizer;
@protocol WFAppInstalledResourceDelegate, WFIntentExecutorDelegate, WFStandaloneShortcutAction;


#import "WFAction.h"
#import "WFAppInstalledResource.h"
#import "WFIntentExecutor.h"

@interface WFHandleIntentAction : WFAction <WFAppInstalledResourceDelegate, WFIntentExecutorDelegate, WFStandaloneShortcutAction>

 {
    WFAppInstalledResource *_appResource;
}


@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, nonatomic) INCExtensionConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) WFIntentExecutor *executor; // ivar: _executor
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger intentCategory;
@property (readonly, nonatomic) INIntentDescription *intentDescription;
@property (retain, nonatomic) INIntentDescriptor *intentDescriptor; // ivar: _intentDescriptor
@property (copy, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, copy, nonatomic) INIntent *runningIntent; // ivar: _runningIntent
@property (readonly, nonatomic) NSArray *slots;
@property (readonly, nonatomic) INStringLocalizer *stringLocalizer; // ivar: _stringLocalizer
@property (readonly) Class superclass;


-(BOOL)allowsContinueInAppWhenRunningRemotely;
-(BOOL)attemptRecoveryFromError:(id)arg0 optionIndex:(NSUInteger)arg1 ;
-(BOOL)inputPassthrough;
-(BOOL)intentIsHandledBySiri:(id)arg0 ;
-(BOOL)isHandledBySiri;
-(BOOL)isProgressIndeterminate;
-(BOOL)isWorkflowInDatabase;
-(BOOL)opensInApp;
-(BOOL)parameterCombinationForIntentSupportsBackgroundExecution:(id)arg0 ;
-(BOOL)prefersActionAttribution;
-(BOOL)requiresRemoteExecution;
-(BOOL)requiresShowsWhenRun;
-(BOOL)runInProcess;
-(BOOL)shouldDonateIntent:(id)arg0 ;
-(BOOL)shouldForceHandleInSiri:(id)arg0 ;
-(BOOL)shouldOpenAppThroughSiriForIntent:(id)arg0 intentResponse:(id)arg1 ;
-(BOOL)showsWhenRun;
-(BOOL)skipSiriExecution;
-(BOOL)skipsProcessingHiddenParameters;
-(NSUInteger)allowsInteractiveSlotResolution;
-(id)appDescriptor;
-(id)appForDisplay;
-(id)appResource;
-(id)confirmationAlertForInteraction:(id)arg0 completionHandler:(id)arg1 ;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)createResourceManager;
-(id)displayableAppDescriptor;
-(id)errorAttributedToApp:(id)arg0 ;
-(id)errorFromConfirmResponse:(id)arg0 intent:(id)arg1 ;
-(id)errorFromHandleResponse:(id)arg0 intent:(id)arg1 ;
-(id)errorFromResolutionResult:(id)arg0 forSlot:(id)arg1 onIntent:(id)arg2 ;
-(id)errorThatLaunchesApp:(id)arg0 ;
-(id)executorWithIntent:(id)arg0 groupIdentifier:(id)arg1 ;
-(id)generatedIntentWithIdentifier:(id)arg0 input:(id)arg1 processedParameters:(id)arg2 error:(*id)arg3 ;
-(id)generatedIntentWithInput:(id)arg0 processedParameters:(id)arg1 error:(*id)arg2 ;
-(id)initWithIdentifier:(id)arg0 definition:(id)arg1 serializedParameters:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 definition:(id)arg1 serializedParameters:(id)arg2 stringLocalizer:(id)arg3 ;
-(id)parameterForSlot:(id)arg0 ;
-(id)rootCauseErrorFromError:(id)arg0 ;
-(id)showsWhenRunIfApplicable;
-(id)titleForINShortcut:(id)arg0 ;
-(id)unknownErrorWithCode:(NSInteger)arg0 localizedDescription:(id)arg1 userInfo:(id)arg2 ;
-(void)accessBundleContentWithBlock:(id)arg0 ;
-(void)actuallyStartExecutingIntent:(id)arg0 ;
-(void)appInstalledResource:(id)arg0 didUpdateAppDescriptor:(id)arg1 ;
-(void)cancel;
-(void)finishRunningByContinuingInApp;
-(void)finishRunningWithError:(id)arg0 ;
-(void)generatePopulatedIntentFromInput:(id)arg0 processedParameters:(id)arg1 completion:(id)arg2 ;
-(void)generatePopulatedIntentWithIdentifier:(id)arg0 fromInput:(id)arg1 processedParameters:(id)arg2 completion:(id)arg3 ;
-(void)generateShortcutRepresentation:(id)arg0 ;
-(void)generateStandaloneShortcutRepresentation:(id)arg0 ;
-(void)getErrorFromExtensionError:(id)arg0 completionHandler:(id)arg1 ;
-(void)getOutputFromIntentResponse:(id)arg0 completionHandler:(id)arg1 ;
-(void)handleExecutionCompletionWithInteraction:(id)arg0 error:(id)arg1 ;
-(void)handleExecutorError:(id)arg0 ;
-(void)handleResolutionResult:(id)arg0 forSlot:(id)arg1 onIntent:(id)arg2 ;
-(void)initializeParameters;
-(void)intentExecutor:(id)arg0 showConfirmationForInteraction:(id)arg1 confirmationRequired:(BOOL)arg2 authenticationRequired:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)intentExecutor:(id)arg0 showConfirmationForSlot:(id)arg1 item:(id)arg2 intent:(id)arg3 completion:(id)arg4 ;
-(void)intentExecutorRequestsContinueInApp:(id)arg0 ;
-(void)launchAppInBackground:(BOOL)arg0 ;
-(void)localizedConfirmationPromptForAttribute:(id)arg0 intent:(id)arg1 completion:(id)arg2 ;
-(void)localizedDisambiguationPromptForAttribute:(id)arg0 intent:(id)arg1 disambiguationItems:(id)arg2 completion:(id)arg3 ;
-(void)populateIntent:(id)arg0 withInput:(id)arg1 processedParameters:(id)arg2 completionHandler:(id)arg3 ;
-(void)resolveSlot:(id)arg0 withProcessedValue:(id)arg1 parameter:(id)arg2 input:(id)arg3 completion:(id)arg4 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)setAppResource:(id)arg0 ;
-(void)showAskForValueAndRetryForSlot:(id)arg0 onIntent:(id)arg1 ;
-(void)showConfirmationAndRetryForSlot:(id)arg0 item:(id)arg1 onIntent:(id)arg2 completionHandler:(id)arg3 ;
-(void)showDisambiguationAndRetryForSlot:(id)arg0 items:(id)arg1 onIntent:(id)arg2 ;
-(void)showInteractionIfNeeded:(id)arg0 inUserInterface:(id)arg1 requiringConfirmation:(BOOL)arg2 requiringAuthentication:(BOOL)arg3 executionStage:(NSInteger)arg4 completionHandler:(id)arg5 ;
-(void)startExecutingIntent:(id)arg0 ;
-(void)updateAppDescriptorInDatabaseWithSelectedApp:(id)arg0 ;
-(void)updateAppDescriptorWithSelectedApp:(id)arg0 ;
-(void)wasAddedToWorkflowByUser:(id)arg0 ;


@end


#endif