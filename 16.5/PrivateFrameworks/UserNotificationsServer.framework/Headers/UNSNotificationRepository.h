// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UNSNOTIFICATIONREPOSITORY_H
#define UNSNOTIFICATIONREPOSITORY_H

@class NSMutableSet;
@protocol OS_dispatch_queue, UNSNotificationRepositoryDelegate, UNSNotificationRepositorySettingsProvider;

#import <Foundation/Foundation.h>

#import "UNSKeyedDataStoreRepository.h"
#import "UNSKeyedObservable.h"
#import "UNSBundleLibrarian.h"

@interface UNSNotificationRepository : NSObject {
    UNSKeyedDataStoreRepository *_repository;
    UNSKeyedObservable *_observable;
    NSMutableSet *_unlimitedBodyBundleIdentifiers;
    NSObject<OS_dispatch_queue> *_queue;
    UNSBundleLibrarian *_librarian;
}


@property (nonatomic) NSObject<UNSNotificationRepositoryDelegate> *delegate; // ivar: _delegate
@property (weak, nonatomic) NSObject<UNSNotificationRepositorySettingsProvider> *settingsProvider; // ivar: _settingsProvider


-(BOOL)_shouldPersistNotificationRecord:(id)arg0 forBundleSettings:(id)arg1 perTopicSettings:(id)arg2 ;
-(NSInteger)_maxObjectsPerKey;
-(id)_notificationsForObjects:(id)arg0 ;
-(id)_queue_badgeNumberForBundleIdentifier:(id)arg0 ;
-(id)_queue_notificationRecordForForIdentifier:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(id)_queue_notificationRecordsForBundleIdentifier:(id)arg0 ;
-(id)allBundleIdentifiers;
-(id)badgeNumberForBundleIdentifier:(id)arg0 ;
-(id)initWithDataStoreRepository:(id)arg0 observable:(id)arg1 librarian:(id)arg2 ;
-(id)initWithDirectory:(id)arg0 librarian:(id)arg1 repositoryProtectionStrategy:(id)arg2 ;
-(id)notificationRecordForForIdentifier:(id)arg0 bundleIdentifier:(id)arg1 ;
-(id)notificationRecordsForBundleIdentifier:(id)arg0 ;
-(void)_logNotification:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)_queue_notifyObserversNotificationsDidAddNotifications:(id)arg0 replaceNotifications:(id)arg1 replacementNotifications:(id)arg2 removedNotifications:(id)arg3 shouldRepost:(BOOL)arg4 forBundleIdentifier:(id)arg5 ;
-(void)_queue_performMigration;
-(void)_queue_performMigrationForBundleIdentifier:(id)arg0 ;
-(void)_queue_performMigrationForPushStore;
-(void)_queue_performMigrationForPushStoreAtPath:(id)arg0 ;
-(void)_queue_performMigrationForUserNotificationsStore;
-(void)_queue_performValidation;
-(void)_queue_removeAllNotificationRecordsForBundleIdentifier:(id)arg0 ;
-(void)_queue_removeInvalidNotificationRecordsForBundleIdentifier:(id)arg0 ;
// -(void)_queue_removeNotificationRecordsPassingTest:(id)arg0 forBundleIdentifier:(unk)arg1  ;
-(void)_queue_saveNotificationRecord:(id)arg0 shouldRepost:(BOOL)arg1 withOptions:(NSUInteger)arg2 forBundleIdentifier:(id)arg3 ;
-(void)_queue_setBadgeCount:(NSInteger)arg0 forBundleIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)_queue_setBadgeNumber:(id)arg0 forBundleIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)_queue_setBadgeString:(id)arg0 forBundleIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)_queue_setBadgeValue:(id)arg0 forBundleIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)_queue_triggerInvalidationForFirstUnlock;
-(void)addObserver:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)contentProtectionStateChangedForFirstUnlock:(BOOL)arg0 ;
-(void)notificationSourcesDidInstall:(id)arg0 ;
-(void)notificationSourcesDidUninstall:(id)arg0 ;
-(void)performMigration;
-(void)performValidation;
-(void)removeAllNotificationRecordsForBundleIdentifier:(id)arg0 ;
-(void)removeInvalidNotificationRecordsForBundleIdentifier:(id)arg0 ;
// -(void)removeNotificationRecordsPassingTest:(id)arg0 forBundleIdentifier:(unk)arg1  ;
-(void)removeNotificationRepository;
-(void)removeObserver:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)removeStoreForBundleIdentifier:(id)arg0 ;
-(void)saveNotificationRecord:(id)arg0 shouldRepost:(BOOL)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id)arg3 ;
-(void)setBadgeCount:(NSInteger)arg0 forBundleIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)setBadgeNumber:(id)arg0 forBundleIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)setBadgeString:(id)arg0 forBundleIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif