// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKASTATUSPUBLISHINGSERVICECLIENTCONNECTION_H
#define SKASTATUSPUBLISHINGSERVICECLIENTCONNECTION_H

@class NSXPCConnection;
@protocol SKAStatusPublishingServiceClientConnectionLifecycleDelegate;

#import <Foundation/Foundation.h>


@interface SKAStatusPublishingServiceClientConnection : NSObject

@property (weak, nonatomic) NSObject<SKAStatusPublishingServiceClientConnectionLifecycleDelegate> *connectionLifecycleDelegate; // ivar: _connectionLifecycleDelegate
@property (readonly) int processIdentifier;
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(BOOL)_connection:(id)arg0 isEntitledForPublishingWithStatusTypeIdentifier:(id)arg1 ;
+(BOOL)clientIsEntitledForAtLeastOnePublishingServiceType:(id)arg0 ;
+(id)logger;
-(BOOL)clientIsEntitledForPublishingWithStatusTypeIdentifier:(id)arg0 ;
-(id)asynchronousRemoteDaemonDelegateWithErrorHandler:(id)arg0 ;
-(id)description;
-(id)initWithXPCConnection:(id)arg0 queue:(id)arg1 daemonProtocolDelegate:(id)arg2 connectionLifecycleDelegate:(id)arg3 ;
-(id)synchronousRemoteDaemonDelegateWithErrorHandler:(id)arg0 ;
-(void)dealloc;


@end


#endif