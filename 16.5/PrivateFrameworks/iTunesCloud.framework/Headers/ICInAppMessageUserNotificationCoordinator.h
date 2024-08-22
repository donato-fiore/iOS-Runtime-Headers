// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICINAPPMESSAGEUSERNOTIFICATIONCOORDINATOR_H
#define ICINAPPMESSAGEUSERNOTIFICATIONCOORDINATOR_H


#import <Foundation/Foundation.h>


@interface ICInAppMessageUserNotificationCoordinator : NSObject



+(BOOL)scheduleNotificationWithPayload:(id)arg0 forBundleIdentifier:(id)arg1 ;
+(id)_amsPushHandler;
+(id)_centerForBundleIdentifier:(id)arg0 ;
+(id)_musicCenter;
+(void)addBadgeIconForBundleIdentifier:(id)arg0 completion:(id)arg1 ;
+(void)removeBadgeIconForBundleIdentifier:(id)arg0 completion:(id)arg1 ;
+(void)removeNotificationWithIdentifier:(id)arg0 forBundleIdentifier:(id)arg1 ;


@end


#endif