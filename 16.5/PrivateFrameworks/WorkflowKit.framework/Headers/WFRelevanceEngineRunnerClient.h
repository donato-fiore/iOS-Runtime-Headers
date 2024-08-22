// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFRELEVANCEENGINERUNNERCLIENT_H
#define WFRELEVANCEENGINERUNNERCLIENT_H

@class WFWorkflowRunnerClient, NSString, NSXPCListener, INIntent;
@protocol NSXPCListenerDelegate, WFUIPresenterInterface, WFRelevanceEngineRunnerClientDelegate;



@interface WFRelevanceEngineRunnerClient : WFWorkflowRunnerClient <NSXPCListenerDelegate, WFUIPresenterInterface>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFRelevanceEngineRunnerClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSXPCListener *dialogRequestListener; // ivar: _dialogRequestListener
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) INIntent *intent; // ivar: _intent
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithIntent:(id)arg0 delegateQueue:(id)arg1 ;
-(id)intentExecutorIntentResponseFromError:(id)arg0 ;
-(void)dismissPresentedContentForRunningContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)handleWorkflowRunResult:(id)arg0 completion:(id)arg1 ;
-(void)openURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)showDialogRequest:(id)arg0 runningContext:(id)arg1 completionHandler:(id)arg2 ;
-(void)start;
-(void)stop;


@end


#endif