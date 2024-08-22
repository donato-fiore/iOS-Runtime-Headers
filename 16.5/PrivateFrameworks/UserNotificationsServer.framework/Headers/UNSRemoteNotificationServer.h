// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UNSREMOTENOTIFICATIONSERVER_H
#define UNSREMOTENOTIFICATIONSERVER_H

@class BSPlatform, NSMutableSet, NSSet, NSMutableDictionary, NSString;
@protocol APSConnectionDelegate, UNSBlueListMonitorDelegate, _DASActivityScheduler, OS_dispatch_queue, UNSRemoteNotificationServerObserver;

#import <Foundation/Foundation.h>

#import "UNSNotificationRepository.h"
#import "UNSNotificationCategoryRepository.h"
#import "UNSAttachmentsService.h"
#import "UNSPushRegistrationRepository.h"
#import "UNSBlueListMonitor.h"
#import "UNSNotificationServiceExtensionManager.h"

@interface UNSRemoteNotificationServer : NSObject <APSConnectionDelegate, UNSBlueListMonitorDelegate>

 {
    UNSNotificationRepository *_notificationRepository;
    UNSNotificationCategoryRepository *_categoryRepository;
    UNSAttachmentsService *_attachmentsService;
    UNSPushRegistrationRepository *_pushRegistrationRepository;
    id<_DASActivityScheduler> *_duetActivityScheduler;
    UNSBlueListMonitor *_blueListMonitor;
    UNSNotificationServiceExtensionManager *_serviceExtensionManager;
    BSPlatform *_platform;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_apsQueue;
    NSMutableSet *_cloudKitBundleIdentifiers;
    NSMutableSet *_contentAvailableBundleIdentifiers;
    NSMutableSet *_quietServiceExtensionBundleIdentifiers;
    NSMutableSet *_foregroundBundleIdentifiers;
    NSMutableSet *_installedBundleIdentifiers;
    NSMutableSet *_restrictedBundleIdentifiers;
    NSMutableSet *_runningBundleIdentifiers;
    NSMutableSet *_userNotificationEnabledBundleIdentifiers;
    NSMutableSet *_visibleUserNotificationEnabledBundleIdentifiers;
    NSSet *_backgroundAppRefreshDisabledList;
    NSMutableDictionary *_bundleIdentifierToRegistration;
    NSMutableDictionary *_environmentsToConnections;
    NSMutableSet *_bundleIdentifiersNeedingToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSObject<UNSRemoteNotificationServerObserver> *observer; // ivar: _observer
@property (readonly) Class superclass;


+(id)_newPushServiceConnectionWithEnvironmentName:(id)arg0 namedDelegatePort:(id)arg1 queue:(id)arg2 ;
-(BOOL)_queue_allowServiceExtensionFilteringForMessage:(id)arg0 ;
-(BOOL)_queue_canDeliverMessageToBundle:(id)arg0 ;
-(BOOL)_queue_enforcePushTypeForMessage:(id)arg0 ;
-(BOOL)_queue_isApplicationForeground:(id)arg0 ;
-(BOOL)_queue_isApplicationRunning:(id)arg0 ;
-(BOOL)_queue_isBackgroundAppRefreshAllowedForBundleIdentifier:(id)arg0 ;
-(BOOL)_queue_isPushEnabledForApplication:(id)arg0 ;
-(BOOL)_queue_isUserNotificationEnabledForApplication:(id)arg0 ;
-(BOOL)_queue_isVisibleUserNotificationEnabledForApplication:(id)arg0 ;
-(BOOL)_queue_messageIsValidForDelivery:(id)arg0 ;
-(BOOL)_queue_shouldBoostTopicToEnabled:(id)arg0 ;
-(BOOL)allowsRemoteNotificationsForBundleIdentifier:(id)arg0 ;
-(id)_initWithNotificationRepository:(id)arg0 attachmentsService:(id)arg1 categoryRepository:(id)arg2 pushRegistrationRepository:(id)arg3 platform:(id)arg4 queue:(id)arg5 apsQueue:(id)arg6 duetActivityScheduler:(id)arg7 serviceExtensionManager:(id)arg8 ;
-(id)_portNameForEnvironmentName:(id)arg0 ;
-(id)_queue_allTopicsForApplication:(id)arg0 ;
-(id)initWithNotificationRepository:(id)arg0 attachmentsService:(id)arg1 categoryRepository:(id)arg2 pushRegistrationRepository:(id)arg3 platform:(id)arg4 ;
-(void)_extensionQueue_modifyNotificationRequest:(id)arg0 bundleIdentifier:(id)arg1 message:(id)arg2 extension:(id)arg3 enforcePushType:(BOOL)arg4 ;
-(void)_queue_applicationDidBecomeBackground:(id)arg0 ;
-(void)_queue_applicationDidBecomeForeground:(id)arg0 ;
-(void)_queue_applicationDidLaunch:(id)arg0 ;
-(void)_queue_applicationDidTerminate:(id)arg0 ;
-(void)_queue_backgroundRefreshApplicationsDidChange;
-(void)_queue_calculateTopics;
-(void)_queue_connection:(id)arg0 didReceivePublicToken:(id)arg1 ;
-(void)_queue_connection:(id)arg0 didReceiveToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3 ;
-(void)_queue_deliverNotificationRequest:(id)arg0 bundleIdentifier:(id)arg1 message:(id)arg2 enforcePushType:(BOOL)arg3 ;
-(void)_queue_deliverNotificationRequest:(id)arg0 bundleIdentifier:(id)arg1 message:(id)arg2 enforcePushType:(BOOL)arg3 extensionStart:(id)arg4 extensionEnd:(id)arg5 ;
-(void)_queue_didChangeApplicationState:(unsigned int)arg0 forBundleIdentifier:(id)arg1 ;
-(void)_queue_didChangeNotificationSettings:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)_queue_didCompleteInitialization;
-(void)_queue_didReceiveIncomingMessage:(id)arg0 ;
-(void)_queue_invalidateTokenForBundleIdentifier:(id)arg0 ;
-(void)_queue_moveTopicsForApplication:(id)arg0 fromList:(NSUInteger)arg1 toList:(NSUInteger)arg2 ;
-(void)_queue_performMigration;
-(void)_queue_registerApplicationWithBundleIdentifier:(id)arg0 forEnvironment:(id)arg1 ;
-(void)_queue_reloadBackgroundAppRefreshDisabledList;
-(void)_queue_reloadRegistrations;
-(void)_queue_removeRegistrationForBundleIdentifier:(id)arg0 ;
-(void)_queue_setPushRegistration:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)_queue_tryToModifyNotificationRequest:(id)arg0 bundleIdentifier:(id)arg1 message:(id)arg2 enforcePushType:(BOOL)arg3 ;
-(void)_scheduleContentAvailablePushActivityForMessage:(id)arg0 bundleIdentifier:(id)arg1 ;
-(void)backgroundRefreshApplicationsDidChange;
-(void)bluelistStatusChanged;
-(void)connection:(id)arg0 didReceiveIncomingMessage:(id)arg1 ;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3 ;
-(void)dealloc;
-(void)didChangeApplicationState:(unsigned int)arg0 forBundleIdentifier:(id)arg1 ;
-(void)didChangeNotificationSettings:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)didCompleteInitialization;
-(void)invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)arg0 ;
-(void)notificationSourcesDidInstall:(id)arg0 ;
-(void)notificationSourcesDidUninstall:(id)arg0 ;
-(void)performMigration;
-(void)requestRemoteNotificationTokenWithEnvironment:(id)arg0 forBundleIdentifier:(id)arg1 ;


@end


#endif