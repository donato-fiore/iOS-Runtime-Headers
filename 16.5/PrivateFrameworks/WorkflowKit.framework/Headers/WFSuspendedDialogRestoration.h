// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSUSPENDEDDIALOGRESTORATION_H
#define WFSUSPENDEDDIALOGRESTORATION_H

@class NSString, FBSDisplayLayoutMonitor, WFDialogRequest, WFWorkflowRunningContext;
@protocol WFUIPresenterDelegate;

#import <Foundation/Foundation.h>

#import "WFUIPresenter.h"
#import "WFScreenOnObserver.h"

@interface WFSuspendedDialogRestoration : NSObject <WFUIPresenterDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) FBSDisplayLayoutMonitor *layoutMonitor; // ivar: _layoutMonitor
@property (retain, nonatomic) WFUIPresenter *presenter; // ivar: _presenter
@property (nonatomic) BOOL screenDidTurnOffDuringActiveRequest; // ivar: _screenDidTurnOffDuringActiveRequest
@property (retain, nonatomic) WFScreenOnObserver *screenOnObserver; // ivar: _screenOnObserver
@property (nonatomic) BOOL shortcutsAppDidBackgroundDuringActiveRequest; // ivar: _shortcutsAppDidBackgroundDuringActiveRequest
@property (readonly) Class superclass;
@property (retain, nonatomic) WFDialogRequest *suspendedRequest; // ivar: _suspendedRequest
@property (copy, nonatomic) id *suspendedRequestCompletion; // ivar: _suspendedRequestCompletion
@property (retain, nonatomic) WFWorkflowRunningContext *suspendedRunningContext; // ivar: _suspendedRunningContext


-(BOOL)presenterWillShowRequest:(id)arg0 runningContext:(id)arg1 withCompletionHandler:(id)arg2 ;
-(BOOL)shortcutsAppIsForegroundInLayout:(id)arg0 ;
-(id)initWithUserInterfacePresenter:(id)arg0 ;
-(void)beginObservingApplicationState;
-(void)presenterDidReceiveSuspendedResponseForRequest:(id)arg0 runningContext:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)reset;
-(void)stopObservingApplicationState;


@end


#endif