// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFLINKACTIONWORKFLOWRUNNERCLIENT_H
#define WFLINKACTIONWORKFLOWRUNNERCLIENT_H

@class NSString;
@protocol LNActionExecutorDelegate;


#import "WFWorkflowRunnerClient.h"
#import "WFLinkActionWorkflowRunnerClient.h"

@interface WFLinkActionWorkflowRunnerClient : WFWorkflowRunnerClient <LNActionExecutorDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WFLinkActionWorkflowRunnerClient *retainedSelf; // ivar: _retainedSelf
@property (readonly) Class superclass;


-(id)initWithIdentifier:(id)arg0 action:(id)arg1 metadata:(id)arg2 ;
-(void)executor:(id)arg0 didFinishWithResult:(id)arg1 error:(id)arg2 ;
-(void)executor:(id)arg0 needsActionConfirmationWithRequest:(id)arg1 ;
-(void)executor:(id)arg0 needsConfirmationWithRequest:(id)arg1 ;
-(void)executor:(id)arg0 needsDisambiguationWithRequest:(id)arg1 ;
-(void)executor:(id)arg0 needsValueWithRequest:(id)arg1 ;
-(void)start;
-(void)stop;


@end


#endif