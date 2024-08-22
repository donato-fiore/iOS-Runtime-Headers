// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFREMOTEEXECUTIONINCOMINGDIALOGREQUESTSESSION_H
#define WFREMOTEEXECUTIONINCOMINGDIALOGREQUESTSESSION_H



#import "WFRemoteExecutionSession.h"
#import "WFRemoteExecutionDialogRequestResponse.h"

@interface WFRemoteExecutionIncomingDialogRequestSession : WFRemoteExecutionSession

@property (retain, nonatomic) WFRemoteExecutionDialogRequestResponse *response; // ivar: _response


-(CGFloat)timeoutLimitInSeconds;
-(void)finishWithError:(id)arg0 ;
-(void)handleIncomingProtobuf:(id)arg0 currentlyActiveSessions:(id)arg1 destinations:(id)arg2 options:(id)arg3 ;
-(void)handleTimeout;
-(void)sendResponseWithOriginatingRequestIdentifier:(id)arg0 dialogResponse:(id)arg1 error:(id)arg2 destinations:(id)arg3 options:(id)arg4 ;
-(void)sendToDestinations:(id)arg0 options:(id)arg1 ;


@end


#endif