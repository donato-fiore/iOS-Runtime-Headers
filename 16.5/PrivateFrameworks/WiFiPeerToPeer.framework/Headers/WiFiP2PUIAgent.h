// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIP2PUIAGENT_H
#define WIFIP2PUIAGENT_H

@class UNUserNotificationCenter, NSString;
@protocol UNUserNotificationCenterDelegate;

#import <Foundation/Foundation.h>

#import "WiFiP2PXPCConnection.h"

@interface WiFiP2PUIAgent : NSObject <UNUserNotificationCenterDelegate>

 {
    WiFiP2PXPCConnection *_xpcConnection;
    UNUserNotificationCenter *_notificationCenter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)exportedInterface;
-(id)exportedObject;
-(id)init;
-(void)activate;
-(void)addNotificationRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)configureNotificationsWithBundleIdentifier:(id)arg0 ;
-(void)invalidate;
-(void)removeNotificationsWithIdentifiers:(id)arg0 ;
-(void)showInfrastructureDisconnectOnRetroModeNotificationForService:(id)arg0 completionHandler:(id)arg1 ;
-(void)startConnectionUsingProxy:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif