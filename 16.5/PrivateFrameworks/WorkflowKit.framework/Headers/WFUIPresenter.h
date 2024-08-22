// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFUIPRESENTER_H
#define WFUIPRESENTER_H

@class NSString, NSXPCListenerEndpoint, NSMutableSet;
@protocol WFUIPresenterHostInterface, WFUIPresenterConnection, WFUIPresenterDelegate;

#import <Foundation/Foundation.h>


@interface WFUIPresenter : NSObject <WFUIPresenterHostInterface>



@property (readonly, nonatomic) NSObject<WFUIPresenterConnection> *auxiliaryConnection; // ivar: _auxiliaryConnection
@property (readonly, nonatomic) NSObject<WFUIPresenterConnection> *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFUIPresenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint; // ivar: _endpoint
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableSet *runningContextsUsingAuxiliaryConnection; // ivar: _runningContextsUsingAuxiliaryConnection
@property (readonly) Class superclass;


+(id)defaultPresenter;
-(BOOL)requestShouldUseAuxiliaryConnection:(id)arg0 ;
-(BOOL)showWebPage:(id)arg0 completionHandler:(id)arg1 ;
-(id)initWithConnection:(id)arg0 ;
-(id)initWithConnection:(id)arg0 auxiliaryConnection:(id)arg1 ;
-(void)beginPersistentModeWithRunningContext:(id)arg0 attribution:(id)arg1 completionHandler:(id)arg2 ;
-(void)completePersistentModeWithSuccess:(id)arg0 runningContext:(id)arg1 completionHandler:(id)arg2 ;
-(void)dismissPresentedContentForRunningContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)pauseDialogPresentationForDuration:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)presenterDidResumeDialogPresentationWithQueuedDialogs:(id)arg0 completionHandler:(id)arg1 ;
-(void)presenterRequestedWorkflowPauseForContext:(id)arg0 dialogRequest:(id)arg1 completionHandler:(id)arg2 ;
-(void)resumeDialogPresentationWithCompletionHandler:(id)arg0 ;
-(void)showDialogRequest:(id)arg0 runningContext:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif