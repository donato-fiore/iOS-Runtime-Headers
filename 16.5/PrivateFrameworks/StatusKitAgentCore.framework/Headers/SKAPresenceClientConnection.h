// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKAPRESENCECLIENTCONNECTION_H
#define SKAPRESENCECLIENTCONNECTION_H

@class NSString, NSXPCConnection;
@protocol SKAPresenceClientConnectionLifecycleDelegate;

#import <Foundation/Foundation.h>


@interface SKAPresenceClientConnection : NSObject

@property (readonly) NSString *clientID;
@property (weak, nonatomic) NSObject<SKAPresenceClientConnectionLifecycleDelegate> *connectionLifecycleDelegate; // ivar: _connectionLifecycleDelegate
@property (readonly) int processIdentifier;
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)_clientIDForConnection:(id)arg0 ;
+(id)logger;
-(id)asynchronousRemoteDaemonDelegateWithErrorHandler:(id)arg0 ;
-(id)description;
-(id)initWithXPCConnection:(id)arg0 queue:(id)arg1 daemonProtocolDelegate:(id)arg2 connectionLifecycleDelegate:(id)arg3 ;
-(id)synchronousRemoteDaemonDelegateWithErrorHandler:(id)arg0 ;
-(void)dealloc;


@end


#endif