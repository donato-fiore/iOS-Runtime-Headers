// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBAPPNOTIFICATIONCENTERDELEGATE_H
#define WEBAPPNOTIFICATIONCENTERDELEGATE_H

@class NSMutableDictionary, NSString;
@protocol UNUserNotificationCenterDelegate;

#import <Foundation/Foundation.h>


@interface WebAppNotificationCenterDelegate : NSObject <UNUserNotificationCenterDelegate>

 {
    NSMutableDictionary *_webAppViewControllers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedDelegate;
-(id)init;
-(void)addWebAppViewController:(id)arg0 ;
-(void)removeWebAppViewController:(id)arg0 ;
-(void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif