// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XCTTARGETSESSION_H
#define XCTTARGETSESSION_H

@class NSXPCListener, NSXPCConnection, NSString;
@protocol NSXPCListenerDelegate, XCTMessagingChannel_DaemonToUIProcess, XCTInternalEntitlementChecking, XCTConnectionAccepting, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface XCTTargetSession : NSObject <NSXPCListenerDelegate, XCTMessagingChannel_DaemonToUIProcess, XCTInternalEntitlementChecking>



@property (retain) NSXPCListener *clientListener; // ivar: _clientListener
@property (retain) NSObject<XCTConnectionAccepting> *connectionHandler; // ivar: _connectionHandler
@property (retain) NSXPCConnection *daemonConnection; // ivar: _daemonConnection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) id *registrationHandler; // ivar: _registrationHandler
@property (readonly) Class superclass;
@property BOOL targetIsRegistering; // ivar: _targetIsRegistering


-(BOOL)_on_queue_loadAutomationSupportLibraryFromPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)isInternallyEntitledConnection:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithDaemonConnection:(id)arg0 registrationHandler:(id)arg1 ;
-(id)initWithServiceName:(id)arg0 registrationHandler:(id)arg1 ;
-(void)_XCT_requestEndpointWithAutomationSupportLibraryPath:(id)arg0 protocolVersion:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)connect;
-(void)registerForBootstrap;


@end


#endif