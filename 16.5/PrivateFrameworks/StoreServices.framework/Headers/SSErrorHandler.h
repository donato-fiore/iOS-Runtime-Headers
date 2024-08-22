// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSERRORHANDLER_H
#define SSERRORHANDLER_H

@class NSArray;
@protocol SSErrorHandlerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSXPCConnection.h"

@interface SSErrorHandler : NSObject {
    SSXPCConnection *_controlConnection;
    id<SSErrorHandlerDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_failureTypes;
    SSXPCConnection *_observerConnection;
}


@property NSObject<SSErrorHandlerDelegate> *delegate;
@property (copy) NSArray *failureTypes;


-(id)init;
-(void)_dispatchToDelegate:(id)arg0 ;
-(void)_handleMessage:(id)arg0 fromServerConnection:(id)arg1 ;
-(void)_openSessionWithMessage:(id)arg0 ;
-(void)_reconnectToDaemonWithCompletionBlock:(id)arg0 ;
-(void)_sendDisconnectMessage;
-(void)_tearDownConnections;
-(void)dealloc;
-(void)startWithCompletionBlock:(id)arg0 ;
-(void)stopWithCompletionBlock:(id)arg0 ;


@end


#endif