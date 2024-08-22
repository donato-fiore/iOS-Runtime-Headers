// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFDIALOGTRANSFORMER_H
#define WFDIALOGTRANSFORMER_H

@class NSArray, WFDialogAttribution, NSString, WFWorkflowRunningContext, WFSiriWorkflowRunnerClientOptions, WFSiriUIPresenter, NSDate;
@protocol WFSequentialParameterInputProviderDelegate, WFUserInterfaceHost, WFActionParameterInputProvider, WFDialogTransformerDelegate;

#import <Foundation/Foundation.h>

#import "WFChooseFromListDataStore.h"
#import "WFAction.h"
#import "WFSequentialParameterInputProvider.h"
#import "WFUIPresenter.h"
#import "WFWorkflow.h"

@interface WFDialogTransformer : NSObject <WFSequentialParameterInputProviderDelegate, WFUserInterfaceHost, WFActionParameterInputProvider>



@property (readonly, copy, nonatomic) NSArray *airPlayRouteIDs; // ivar: _airPlayRouteIDs
@property (retain, nonatomic) NSArray *allowedParameterClasses; // ivar: _allowedParameterClasses
@property (readonly, nonatomic) WFDialogAttribution *attribution;
@property (retain, nonatomic) WFChooseFromListDataStore *chooseFromListDataStore; // ivar: _chooseFromListDataStore
@property (retain, nonatomic) WFAction *currentAction; // ivar: _currentAction
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFDialogTransformerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger executionContext; // ivar: _executionContext
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger numberOfDialogsPresented; // ivar: _numberOfDialogsPresented
@property (copy, nonatomic) id *parameterInputCompletionHandler; // ivar: _parameterInputCompletionHandler
@property (retain, nonatomic) WFSequentialParameterInputProvider *parameterInputProvider; // ivar: _parameterInputProvider
@property (readonly, nonatomic) NSString *runSource; // ivar: _runSource
@property (readonly, nonatomic) WFWorkflowRunningContext *runningContext; // ivar: _runningContext
@property (retain, nonatomic) WFSiriWorkflowRunnerClientOptions *siriOptions; // ivar: _siriOptions
@property (retain, nonatomic) WFSiriUIPresenter *siriUIPresenter; // ivar: _siriUIPresenter
@property (readonly) Class superclass;
@property (retain, nonatomic) WFUIPresenter *userInterfacePresenter; // ivar: _userInterfacePresenter
@property (readonly, nonatomic) NSString *userInterfaceType;
@property (retain, nonatomic) WFWorkflow *workflow; // ivar: _workflow
@property (retain, nonatomic) NSDate *workflowStartTime; // ivar: _workflowStartTime


-(BOOL)action:(id)arg0 canProvideInputForParameter:(id)arg1 ;
-(BOOL)isRunningInSiri;
-(BOOL)performSiriRequest:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)shouldHandleAlertAsSiriDialog:(id)arg0 ;
-(BOOL)shouldNotHandoff;
-(id)actionForAttribution;
-(id)dialogTransformer;
-(id)initWithWorkflow:(id)arg0 userInterfacePresenter:(id)arg1 runSource:(id)arg2 runningContext:(id)arg3 ;
-(id)privacyAttribution;
-(id)shortcutsAppAttribution;
-(void)action:(id)arg0 provideInputForParameters:(id)arg1 withDefaultStates:(id)arg2 prompts:(id)arg3 completionHandler:(id)arg4 ;
-(void)cancel;
-(void)cleanupListDialogRequestIfNeeded:(id)arg0 ;
-(void)configureIntent:(id)arg0 ;
-(void)configureSmartPromptIntent:(id)arg0 withConfiguration:(id)arg1 ;
-(void)dismissPresentedContentWithCompletionHandler:(id)arg0 ;
-(void)executeSmartPromptIntentWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)getEnvironmentForLinkViewSnippetWithCompletion:(id)arg0 ;
-(void)getPreferredSizeForLinkViewSnippetWithCompletion:(id)arg0 ;
-(void)handleAlertAsSiriDialog:(id)arg0 ;
-(void)handleAlertWithDatePicker:(id)arg0 ;
-(void)handleAlertWithMultipleButtons:(id)arg0 ;
-(void)handleAlertWithTextField:(id)arg0 ;
-(void)handleSimpleAlert:(id)arg0 ;
-(void)openURL:(id)arg0 withBundleIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)prepareListDialogRequestIfNeeded:(*id)arg0 ;
-(void)presentAlert:(id)arg0 ;
-(void)requestActionInterfacePresentationForActionClassName:(id)arg0 classNamesByType:(id)arg1 completionHandler:(id)arg2 ;
-(void)requestAuthorizationWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestFileAccessForURLs:(id)arg0 workflowName:(id)arg1 workflowID:(id)arg2 completionHandler:(id)arg3 ;
-(void)resolveDescriptor:(id)arg0 completionHandler:(id)arg1 ;
-(void)sequentialParameterInputProvider:(id)arg0 didAdvanceToParameter:(id)arg1 action:(id)arg2 defaultState:(id)arg3 prompt:(id)arg4 completion:(id)arg5 ;
-(void)sequentialParameterInputProvider:(id)arg0 didFinishWithInputtedStates:(id)arg1 ;
-(void)sequentialParameterInputProviderDidCancel:(id)arg0 ;
-(void)showAskParameterDialogForParameter:(id)arg0 action:(id)arg1 defaultState:(id)arg2 prompt:(id)arg3 completion:(id)arg4 ;
-(void)showConfirmInteraction:(id)arg0 prompt:(id)arg1 requireAuthentication:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)showDialogRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)showHandleInteraction:(id)arg0 prompt:(id)arg1 completionHandler:(id)arg2 ;
-(void)showLinkActionConfirmationWithActionMetadata:(id)arg0 showPrompt:(BOOL)arg1 dialogString:(id)arg2 viewSnippet:(id)arg3 confirmationActionName:(id)arg4 completionHandler:(id)arg5 ;
-(void)showLinkParameterConfirmationWithActionMetadata:(id)arg0 dialogString:(id)arg1 viewSnippet:(id)arg2 completionHandler:(id)arg3 ;
-(void)showLinkResult:(id)arg0 completionHandler:(id)arg1 ;
-(void)showPreviewForContentCollection:(id)arg0 completionHandler:(id)arg1 ;
-(void)stopWithError:(id)arg0 ;
-(void)swapSiriUIPresenterWithPresenter:(id)arg0 ;
-(void)updateSmartPromptsWithConfiguration:(id)arg0 resultCode:(NSUInteger)arg1 error:(*id)arg2 ;
-(void)willBeginExecutingShortcutStep:(id)arg0 ;


@end


#endif