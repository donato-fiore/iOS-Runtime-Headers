// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIVIEWSERVICEINTERFACECONNECTIONREQUEST_H
#define _UIVIEWSERVICEINTERFACECONNECTIONREQUEST_H

@class NSString, NSError, BKSProcessAssertion, NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_UIRemoteViewService.h"
#import "_UIAsyncInvocation.h"

@interface _UIViewServiceInterfaceConnectionRequest : NSObject {
    id *_connectionHandler;
    NSString *_serviceBundleIdentifier;
    _UIRemoteViewService *_service;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isCancelled;
    NSError *_cancellationError;
    _UIAsyncInvocation *_cancellationInvocation;
    int _sessionRequestNotifyToken;
    BKSProcessAssertion *_serviceProcessAssertion;
    NSXPCConnection *_serviceSessionConnection;
    BOOL _serviceSessionConnectionResumed;
}




+(id)_connectToViewServiceWithBundleIdentifier:(id)arg0 service:(id)arg1 connectionHandler:(id)arg2 ;
+(id)connectToViewService:(id)arg0 connectionHandler:(id)arg1 ;
+(id)connectToViewServiceWithBundleIdentifier:(id)arg0 connectionHandler:(id)arg1 ;
+(void)initialize;
-(void)_cancelUnconditionallyThen:(id)arg0 ;
-(void)_cancelWithError:(id)arg0 ;
-(void)_createAndEstablishConnection;
-(void)_createPlugInProcessAssertion;
-(void)_createProcessAssertion;
-(void)_createProcessAssertionForPID:(int)arg0 orBundleIdentifier:(id)arg1 acquiredHandler:(id)arg2 ;
-(void)_didConnectToService;
-(void)_establishConnection;
-(void)_launchService;
-(void)_objc_initiateDealloc;
-(void)dealloc;


@end


#endif