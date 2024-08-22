// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIAPPLICATIONNOTIFICATIONMANAGER_H
#define VUIAPPLICATIONNOTIFICATIONMANAGER_H


#import <Foundation/Foundation.h>


@interface VUIApplicationNotificationManager : NSObject



+(id)sharedInstance;
-(void)_applicationDidBecomeActiveNotification:(id)arg0 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg0 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg0 ;
-(void)_applicationWillResignActiveNotification:(id)arg0 ;
-(void)_applicationWillTerminateNotification:(id)arg0 ;
-(void)dealloc;
-(void)listenForApplicationNotifications;


@end


#endif