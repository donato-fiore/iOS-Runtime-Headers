// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UNSNOTIFICATIONSETTINGSSERVICE_H
#define UNSNOTIFICATIONSETTINGSSERVICE_H

@class NSMutableArray, NSString;
@protocol UNSSettingsGatewayObserver, UNSNotificationRepositorySettingsProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "UNSSettingsGateway.h"
#import "UNSCriticalAlertAuthorizationAlertController.h"
#import "UNSNotificationAuthorizationAlertController.h"

@interface UNSNotificationSettingsService : NSObject <UNSSettingsGatewayObserver, UNSNotificationRepositorySettingsProvider>

 {
    NSMutableArray *_observers;
    UNSSettingsGateway *_settingsGateway;
    UNSCriticalAlertAuthorizationAlertController *_criticalAlertAuthorizationAlertController;
    UNSNotificationAuthorizationAlertController *_notificationAuthorizationAlertController;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)allNotificationSources;
-(id)initWithSettingsGateway:(id)arg0 ;
-(id)notificationSettingsForBundleIdentifier:(id)arg0 ;
-(id)notificationSettingsForTopicsWithBundleIdentifier:(id)arg0 ;
-(id)notificationSourceForBundleIdentifier:(id)arg0 ;
-(id)notificationSourcesForBundleIdentifiers:(id)arg0 ;
-(id)notificationSystemSettings;
-(void)_queue_addObserver:(id)arg0 ;
-(void)_queue_removeObserver:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)authorizationWithOptions:(NSUInteger)arg0 forNotificationSourceIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;
-(void)replaceNotificationSettings:(id)arg0 forNotificationSourceIdentifier:(id)arg1 ;
-(void)replaceNotificationTopicSettings:(id)arg0 forNotificationSourceIdentifier:(id)arg1 topicIdentifier:(id)arg2 ;
-(void)resetScheduledDeliverySetting;
-(void)setNotificationSystemSettings:(id)arg0 ;
-(void)settingsGateway:(id)arg0 didUpdateGlobalSettings:(id)arg1 ;
-(void)settingsGateway:(id)arg0 didUpdateSectionInfoForSectionIDs:(id)arg1 ;


@end


#endif