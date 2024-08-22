// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBREMOTEALERTHANDLESERVER_H
#define SBREMOTEALERTHANDLESERVER_H

@class NSMutableArray, FBServiceClientAuthenticator, BSServiceConnectionListener, NSMapTable, NSString;
@protocol BSServiceConnectionListenerDelegate, SBSRemoteAlertHandleServiceServerInterface, SBRemoteTransientOverlaySessionObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SBRemoteTransientOverlaySessionManager.h"

@interface SBRemoteAlertHandleServer : NSObject <BSServiceConnectionListenerDelegate, SBSRemoteAlertHandleServiceServerInterface, SBRemoteTransientOverlaySessionObserver>

 {
    NSMutableArray *_activeConnections;
    FBServiceClientAuthenticator *_clientAuthenticator;
    BSServiceConnectionListener *_connectionListener;
    FBServiceClientAuthenticator *_legacyClientAuthenticator;
    NSObject<OS_dispatch_queue> *_queue;
    SBRemoteTransientOverlaySessionManager *_sessionManager;
    NSMapTable *_sessionToConnections;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldAllowAuditToken:(id)arg0 forDefinition:(id)arg1 ;
-(id)createRemoteAlertHandleContextWithDefinition:(id)arg0 configurationContext:(id)arg1 ;
-(id)initWithSessionManager:(id)arg0 ;
-(id)remoteAlertHandleContextsForDefinition:(id)arg0 allowsCreationValue:(id)arg1 configurationContext:(id)arg2 ;
-(void)_addConnection:(id)arg0 forSession:(id)arg1 ;
-(void)_handleDisconnectForServiceConnection:(id)arg0 ;
-(void)_removeConnection:(id)arg0 forSession:(id)arg1 ;
-(void)activate;
-(void)activateRemoteAlertHandleWithID:(id)arg0 activationContext:(id)arg1 ;
-(void)dealloc;
-(void)invalidateRemoteAlertHandleWithID:(id)arg0 ;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)remoteTransientOverlaySession:(id)arg0 didInvalidateWithReason:(NSInteger)arg1 error:(id)arg2 ;
-(void)remoteTransientOverlaySessionDidActivate:(id)arg0 ;
-(void)remoteTransientOverlaySessionDidDeactivate:(id)arg0 ;


@end


#endif