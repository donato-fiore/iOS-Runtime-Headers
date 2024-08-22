// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFREMOTEEXECUTIONOUTGOINGSTOPSESSION_H
#define WFREMOTEEXECUTIONOUTGOINGSTOPSESSION_H



#import "WFRemoteExecutionSession.h"

@interface WFRemoteExecutionOutgoingStopSession : WFRemoteExecutionSession



-(BOOL)sendToDestinations:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)initWithService:(id)arg0 request:(id)arg1 ;
-(void)finishWithError:(id)arg0 ;


@end


#endif