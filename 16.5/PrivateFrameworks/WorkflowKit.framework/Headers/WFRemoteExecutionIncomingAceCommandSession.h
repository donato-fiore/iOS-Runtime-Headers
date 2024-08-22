// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFREMOTEEXECUTIONINCOMINGACECOMMANDSESSION_H
#define WFREMOTEEXECUTIONINCOMINGACECOMMANDSESSION_H



#import "WFRemoteExecutionSession.h"
#import "WFRemoteExecutionAceCommandRequestResponse.h"

@interface WFRemoteExecutionIncomingAceCommandSession : WFRemoteExecutionSession

@property (retain, nonatomic) WFRemoteExecutionAceCommandRequestResponse *response; // ivar: _response


-(void)handleIncomingProtobuf:(id)arg0 destinations:(id)arg1 options:(id)arg2 ;
-(void)sendResponseWithOriginatingRequestIdentifier:(id)arg0 aceCommandResponseDictionary:(id)arg1 error:(id)arg2 destinations:(id)arg3 options:(id)arg4 ;
-(void)sendToDestinations:(id)arg0 options:(id)arg1 ;


@end


#endif