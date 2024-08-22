// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIXPCSTATUSREQUESTHANDLER_H
#define TRIXPCSTATUSREQUESTHANDLER_H

@protocol TRIXPCStatusServiceProtocol;

#import <Foundation/Foundation.h>

#import "TRIXPCServerContextPromise.h"

@interface TRIXPCStatusRequestHandler : NSObject <TRIXPCStatusServiceProtocol>

 {
    TRIXPCServerContextPromise *_promise;
    ? _auditToken;
}




-(id)initWithPromise:(id)arg0 auditToken:(struct ? )arg1 ;
-(void)activeEvaluationsForBMLTWithCompletion:(id)arg0 ;
-(void)activeEvaluationsForMLRuntimeWithCompletion:(id)arg0 ;
-(void)evaluationHistoryRecordsForMLRuntimeWithLimit:(NSUInteger)arg0 newerThanDate:(id)arg1 completion:(id)arg2 ;
-(void)experimentHistoryRecordsWithLimit:(NSUInteger)arg0 newerThanDate:(id)arg1 privacyFilterPolicy:(unsigned char)arg2 deploymentEnvironment:(int)arg3 completion:(id)arg4 ;
-(void)experimentRecordsWithDeploymentEnvironments:(id)arg0 privacyFilterPolicy:(unsigned char)arg1 completion:(id)arg2 ;
-(void)rolloutAllocationStatusWithPrivacyFilterPolicy:(unsigned char)arg0 completion:(id)arg1 ;
-(void)rolloutRecordsWithCompletion:(id)arg0 ;


@end


#endif