// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UNSUSERNOTIFICATIONSERVERREMOTENOTIFICATIONCONNECTIONLISTENER_H
#define UNSUSERNOTIFICATIONSERVERREMOTENOTIFICATIONCONNECTIONLISTENER_H

@class NSXPCListener, NSMutableDictionary, NSMapTable, NSString;
@protocol NSXPCListenerDelegate, PKUserNotificationServerRemoteNotificationXPCServer, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "UNSRemoteNotificationServer.h"

@interface UNSUserNotificationServerRemoteNotificationConnectionListener : NSObject <NSXPCListenerDelegate, PKUserNotificationServerRemoteNotificationXPCServer>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    NSMutableDictionary *_connectionsByBundleIdentifier;
    NSMapTable *_bundleIdentifiersByConnection;
    UNSRemoteNotificationServer *_remoteNotificationService;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_allowsRemoteNotificationsForBundleIdentifier:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_currentConnection;
-(id)_queue_observerConnectionsForBundleIdentifier:(id)arg0 ;
-(id)initWithRemoteNotificationService:(id)arg0 ;
-(void)_invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)arg0 ;
-(void)_queue_addConnection:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)_queue_didReceiveDeviceToken:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)_queue_removeConnection:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)_queue_removeConnectionForAllBundleIdentifiers:(id)arg0 ;
-(void)_removeConnectionForAllBundleIdentifiers:(id)arg0 ;
-(void)_requestTokenForRemoteNotificationsForBundleIdentifier:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)dealloc;
-(void)didReceiveDeviceToken:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)getAllowsRemoteNotificationsForBundleIdentifier:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)arg0 ;
-(void)requestTokenForRemoteNotificationsForBundleIdentifier:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)resume;


@end


#endif