// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWORKFLOWRUNCOORDINATOR_H
#define WFWORKFLOWRUNCOORDINATOR_H

@class WFLSApplicationStateObserver, NSString, NSMutableDictionary, NSHashTable, NSMutableSet, WFUIPresenter;
@protocol WFDialogPresentationManagerDelegate, WFUIPresenterDelegate, WFToastManagerDelegate, WFOutOfProcessWorkflowControllerDelegate, UNUserNotificationCenterDelegate, WFDatabaseProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WFDialogPresentationManager.h"
#import "WFRunnerPrewarmManager.h"
#import "WFWorkflowRunQueue.h"
#import "WFApplicationTerminationMonitor.h"
#import "WFToastManager.h"
#import "WFUserNotificationManager.h"

@interface WFWorkflowRunCoordinator : NSObject <WFDialogPresentationManagerDelegate, WFUIPresenterDelegate, WFToastManagerDelegate, WFOutOfProcessWorkflowControllerDelegate, UNUserNotificationCenterDelegate>



@property (readonly, nonatomic) WFLSApplicationStateObserver *applicationStateObserver; // ivar: _applicationStateObserver
@property (readonly, nonatomic) NSObject<WFDatabaseProvider> *databaseProvider; // ivar: _databaseProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableDictionary *descriptors; // ivar: _descriptors
@property (readonly, nonatomic) WFDialogPresentationManager *dialogPresentationManager; // ivar: _dialogPresentationManager
@property (nonatomic) BOOL hasInitializedToastManager; // ivar: _hasInitializedToastManager
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly, nonatomic) NSMutableDictionary *parentRunningContexts; // ivar: _parentRunningContexts
@property (readonly, nonatomic) WFRunnerPrewarmManager *prewarmManager; // ivar: _prewarmManager
@property (readonly, nonatomic) NSMutableSet *progressPresentingRuns; // ivar: _progressPresentingRuns
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSMutableDictionary *runEvents; // ivar: _runEvents
@property (readonly, nonatomic) WFWorkflowRunQueue *runRequestQueue; // ivar: _runRequestQueue
@property (readonly, nonatomic) NSMutableDictionary *runRequests; // ivar: _runRequests
@property (readonly, nonatomic) NSMutableDictionary *runningWorkflowCompletionHandlers; // ivar: _runningWorkflowCompletionHandlers
@property (readonly, nonatomic) NSMutableDictionary *runningWorkflowControllers; // ivar: _runningWorkflowControllers
@property (readonly) Class superclass;
@property (readonly, nonatomic) WFApplicationTerminationMonitor *terminationMonitor; // ivar: _terminationMonitor
@property (readonly, nonatomic) WFToastManager *toastManager; // ivar: _toastManager
@property (readonly, nonatomic) WFUIPresenter *userInterfacePresenter; // ivar: _userInterfacePresenter
@property (readonly, nonatomic) WFUserNotificationManager *userNotificationManager; // ivar: _userNotificationManager


+(NSInteger)outOfProcessWorkflowControllerPresentationModeFromVCShortcutPresentationMode:(NSUInteger)arg0 ;
+(id)errorCategory;
+(id)errorWithActionCategory;
-(BOOL)presentationManager:(id)arg0 shouldPresentDialogRequest:(id)arg1 withContext:(id)arg2 ;
-(BOOL)queue_callWorkflowCompletionForContext:(id)arg0 withResult:(id)arg1 ;
-(BOOL)queue_shouldQueueDescriptor:(id)arg0 runRequest:(id)arg1 queueType:(*NSUInteger)arg2 ;
-(BOOL)shortcutShouldShowRunningProgress:(id)arg0 ;
-(BOOL)shortcutWithIdentifierIsRunning:(id)arg0 ;
-(NSUInteger)presentationManager:(id)arg0 dialogPresentationModeForRequest:(id)arg1 withContext:(id)arg2 ;
-(NSUInteger)queueTypeForDescriptor:(id)arg0 runRequest:(id)arg1 ;
-(id)allRunningWorkflows;
-(id)contextForDialogPresentationForContext:(id)arg0 ;
-(id)initWithUserNotificationManager:(id)arg0 databaseProvider:(id)arg1 prewarmManager:(id)arg2 ;
-(id)presentationManager:(id)arg0 responseForDialogRequest:(id)arg1 withContext:(id)arg2 ;
-(id)presentationManager:(id)arg0 runningContextForContext:(id)arg1 ;
-(id)queue_workflowControllerWithContext:(id)arg0 ;
-(id)unsupportedDialogResponseWithRequest:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)getCurrentProgressCompletedForContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)outOfProcessWorkflowController:(id)arg0 didDecideRunningProgressIsAllowed:(BOOL)arg1 dialogAttribution:(id)arg2 ;
-(void)outOfProcessWorkflowController:(id)arg0 didFinishWithResult:(id)arg1 dialogAttribution:(id)arg2 ;
-(void)outOfProcessWorkflowController:(id)arg0 didStartFromWorkflowReference:(id)arg1 dialogAttribution:(id)arg2 ;
-(void)outOfProcessWorkflowController:(id)arg0 presenterRequestedWorkflowPauseWithContext:(id)arg1 dialogRequest:(id)arg2 ;
-(void)outOfProcessWorkflowController:(id)arg0 wantsToToastSessionKitSessionWithIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)postNotificationAboutFailure:(id)arg0 inWorkflow:(id)arg1 dialogAttribution:(id)arg2 ;
-(void)presentationManager:(id)arg0 cancelExecutionOfWorkflowWithContext:(id)arg1 ;
-(void)presentationManager:(id)arg0 didEnqueueDialogRequest:(id)arg1 withContext:(id)arg2 ;
-(void)presentationManager:(id)arg0 pauseExecutionOfWorkflowWithContext:(id)arg1 ;
-(void)presentationManager:(id)arg0 updateSmartPromptStateData:(id)arg1 actionUUID:(id)arg2 context:(id)arg3 reference:(id)arg4 ;
-(void)presenterDidResumeDialogPresentationWithQueuedDialogs:(id)arg0 ;
-(void)queue_finishWorkflowWithContext:(id)arg0 result:(id)arg1 ;
-(void)queue_notifyObserversWorkflowDidFinishRunningWithResult:(id)arg0 context:(id)arg1 ;
-(void)queue_runNextQueuedRequestWithType:(NSUInteger)arg0 inQueue:(id)arg1 ;
-(void)queue_runWorkflowWithDescriptor:(id)arg0 request:(id)arg1 context:(id)arg2 error:(*id)arg3 completion:(id)arg4 ;
-(void)removeObserver:(id)arg0 ;
-(void)removeStaleNotifications;
-(void)resumeWorkflowFromContext:(id)arg0 withRequest:(id)arg1 presentationMode:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)runWorkflowWithDescriptor:(id)arg0 request:(id)arg1 context:(id)arg2 ;
-(void)runWorkflowWithDescriptor:(id)arg0 request:(id)arg1 context:(id)arg2 completion:(id)arg3 ;
-(void)showSingleStepCompletionWithWebClipMetadata:(id)arg0 completion:(id)arg1 ;
-(void)stopAllRunningWorkflows;
-(void)stopRunningWorkflowWithRunningContext:(id)arg0 ;
-(void)toastManager:(id)arg0 didDismissToastedSessionWithIdentifier:(id)arg1 ;
-(void)toastManager:(id)arg0 didFailToToastSessionWithIdentifier:(id)arg1 error:(id)arg2 ;
-(void)toastManager:(id)arg0 didToastSessionWithIdentifier:(id)arg1 ;
-(void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif