// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSIRIWORKFLOWRUNNERCLIENT_H
#define WFSIRIWORKFLOWRUNNERCLIENT_H

@class NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, WFSiriUIPresenterInterface, WFSiriWorkflowRunnerClientDelegate;


#import "WFWorkflowRunnerClient.h"
#import "WFSiriExecutionMetrics.h"

@interface WFSiriWorkflowRunnerClient : WFWorkflowRunnerClient <NSXPCListenerDelegate, WFSiriUIPresenterInterface>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFSiriWorkflowRunnerClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSXPCListener *dialogRequestListener; // ivar: _dialogRequestListener
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WFSiriExecutionMetrics *siriExecutionMetrics; // ivar: _siriExecutionMetrics
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(NSInteger)deviceIdiomForCurrentDevice;
-(NSInteger)deviceIdiomFromRunSource:(NSInteger)arg0 ;
-(id)initWithAutoShortcutIdentifier:(id)arg0 action:(id)arg1 metadata:(id)arg2 ;
-(id)initWithAutoShortcutIdentifier:(id)arg0 phrase:(id)arg1 runSource:(NSInteger)arg2 action:(id)arg3 metadata:(id)arg4 ;
-(id)initWithAutoShortcutIdentifier:(id)arg0 runSource:(NSInteger)arg1 action:(id)arg2 metadata:(id)arg3 ;
-(id)initWithWorkflowName:(id)arg0 executionContext:(NSInteger)arg1 airPlayRouteIDs:(id)arg2 ;
-(id)initWithWorkflowName:(id)arg0 runSource:(NSInteger)arg1 executionContext:(NSInteger)arg2 airPlayRouteIDs:(id)arg3 ;
-(id)initWithWorkflowName:(id)arg0 runSource:(NSInteger)arg1 options:(id)arg2 ;
-(id)workflowRunSourceForSiriRunSource:(NSInteger)arg0 ;
-(void)executeIntent:(id)arg0 completionHandler:(id)arg1 ;
-(void)executeLinkAction:(id)arg0 inApplication:(id)arg1 completionHandler:(id)arg2 ;
-(void)executeLinkAction:(id)arg0 inApplication:(id)arg1 withNameOverride:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleUserActivity:(id)arg0 withBundleIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)handleUserActivityData:(id)arg0 withBundleIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)handleWorkflowRunResult:(id)arg0 completion:(id)arg1 ;
-(void)openApp:(id)arg0 completionHandler:(id)arg1 ;
-(void)openInteractionInApp:(id)arg0 completionHandler:(id)arg1 ;
-(void)openUrl:(id)arg0 withBundleIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)performSiriRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)punchOutRequestedWithCompletionHandler:(id)arg0 ;
-(void)showDialogRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)speakTextWithUtterance:(id)arg0 completionHandler:(id)arg1 ;
-(void)start;
-(void)stop;
-(void)willBeginExecutingShortcutStep:(id)arg0 ;
-(void)willBeginExecutingShortcutWithActionCount:(id)arg0 ;


@end


#endif