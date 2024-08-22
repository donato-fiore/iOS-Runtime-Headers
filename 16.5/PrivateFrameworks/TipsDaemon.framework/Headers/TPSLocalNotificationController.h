// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSLOCALNOTIFICATIONCONTROLLER_H
#define TPSLOCALNOTIFICATIONCONTROLLER_H


#import <Foundation/Foundation.h>


@interface TPSLocalNotificationController : NSObject

@property (readonly, nonatomic, getter=isNotificationSettingValid) BOOL notificationSettingValid;


-(id)initWithBundleIdentifier:(id)arg0 ;
-(void)notificationCompletedForIdentifier:(id)arg0 collectionID:(id)arg1 correlationID:(id)arg2 error:(id)arg3 ;
-(void)removeAllNotifications;
-(void)removeNotificationWithIdentifier:(id)arg0 ;
-(void)sendNotificationWithIdentifier:(id)arg0 collectionID:(id)arg1 correlationID:(id)arg2 title:(id)arg3 text:(id)arg4 attachmentURL:(id)arg5 extensionPayload:(id)arg6 ;
-(void)showNotificationForNotificationCache:(id)arg0 attachmentURL:(id)arg1 ;


@end


#endif