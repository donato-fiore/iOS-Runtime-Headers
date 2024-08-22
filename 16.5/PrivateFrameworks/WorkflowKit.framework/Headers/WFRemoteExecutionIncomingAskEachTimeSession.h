// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFREMOTEEXECUTIONINCOMINGASKEACHTIMESESSION_H
#define WFREMOTEEXECUTIONINCOMINGASKEACHTIMESESSION_H

@class NSSet, NSDictionary;


#import "WFRemoteExecutionSession.h"

@interface WFRemoteExecutionIncomingAskEachTimeSession : WFRemoteExecutionSession

@property (retain, nonatomic) NSSet *lastKnownDestinations; // ivar: _lastKnownDestinations
@property (retain, nonatomic) NSDictionary *lastKnownOptions; // ivar: _lastKnownOptions


-(id)missingParameterError;
-(void)finishWithError:(id)arg0 ;
-(void)handleIncomingProtobuf:(id)arg0 currentlyActiveSessions:(id)arg1 responseDestinations:(id)arg2 responseOptions:(id)arg3 ;
-(void)handleTimeout;
-(void)sendResponse:(id)arg0 destinations:(id)arg1 options:(id)arg2 ;


@end


#endif