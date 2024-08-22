// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFREMOTEEXECUTIONOUTGOINGRUNREQUESTSESSION_H
#define WFREMOTEEXECUTIONOUTGOINGRUNREQUESTSESSION_H

@protocol WFActionParameterInputProvider, WFUserInterfaceHost;


#import "WFRemoteExecutionSession.h"
#import "WFRemoteExecutionCoordinator.h"
#import "WFRemoteExecutionFileCoordinator.h"
#import "WFRemoteExecutionRunRequest.h"

@interface WFRemoteExecutionOutgoingRunRequestSession : WFRemoteExecutionSession

@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, weak, nonatomic) WFRemoteExecutionCoordinator *coordinator; // ivar: _coordinator
@property (retain, nonatomic) WFRemoteExecutionFileCoordinator *fileCoordinator; // ivar: _fileCoordinator
@property (readonly, nonatomic) NSObject<WFActionParameterInputProvider> *parameterInputProvider; // ivar: _parameterInputProvider
@property (retain, nonatomic) WFRemoteExecutionRunRequest *request;
@property (readonly, nonatomic) NSObject<WFUserInterfaceHost> *userInterface; // ivar: _userInterface


-(CGFloat)timeoutLimitInSeconds;
-(id)initWithService:(id)arg0 request:(id)arg1 userInterface:(id)arg2 parameterInputProvider:(id)arg3 coordinator:(id)arg4 completion:(id)arg5 ;
-(void)finish;
-(void)finishWithError:(id)arg0 ;
-(void)handleIncomingFileForRemoteExecutionWithURL:(id)arg0 withIdentifier:(id)arg1 metadata:(id)arg2 ;
-(void)handleIncomingProtobuf:(id)arg0 ;
-(void)handleTimeout;
-(void)sendToDestinations:(id)arg0 options:(id)arg1 ;


@end


#endif