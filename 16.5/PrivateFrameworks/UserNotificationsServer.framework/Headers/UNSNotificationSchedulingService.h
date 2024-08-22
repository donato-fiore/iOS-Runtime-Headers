// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UNSNOTIFICATIONSCHEDULINGSERVICE_H
#define UNSNOTIFICATIONSCHEDULINGSERVICE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "UNSNotificationRepository.h"
#import "UNSPendingNotificationRepository.h"
#import "UNSNotificationScheduleRepository.h"
#import "UNSLocationMonitor.h"

@interface UNSNotificationSchedulingService : NSObject {
    UNSNotificationRepository *_notificationRepository;
    UNSPendingNotificationRepository *_pendingNotificationRepository;
    UNSNotificationScheduleRepository *_notificationScheduleRepository;
    UNSLocationMonitor *_locationMonitor;
    NSMutableDictionary *_clients;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)_queue_addClientForBundleIdentifier:(id)arg0 ;
-(id)_queue_clientForBundleIdentifier:(id)arg0 ;
-(id)_queue_pendingNotificationRecordsForBundleIdentifier:(id)arg0 ;
-(id)_queue_undeliveredNotificationRequestsForBundleIdentifier:(id)arg0 ;
-(id)initWithNotificationRepository:(id)arg0 pendingNotificationRepository:(id)arg1 notificationScheduleRepository:(id)arg2 locationMonitor:(id)arg3 ;
-(id)pendingNotificationRecordsForBundleIdentifier:(id)arg0 ;
-(id)undeliveredNotificationRecordsForBundleIdentifier:(id)arg0 ;
-(void)_queue_addPendingNotificationRecords:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)_queue_applicationStateDidRestore;
-(void)_queue_didChangeNotificationSettings:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)_queue_localeDidChange;
-(void)_queue_notificationSourcesDidUninstall:(id)arg0 ;
-(void)_queue_removeAllPendingNotificationRecordsForBundleIdentifier:(id)arg0 ;
-(void)_queue_removeClientForBundleIdentifier:(id)arg0 ;
-(void)_queue_removePendingNotificationRecordsWithIdentifiers:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)_queue_removeSimilarPendingNotificationRecords:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)_queue_setPendingNotificationRecords:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)_queue_timeDidChangeSignificantly;
-(void)addPendingNotificationRecords:(id)arg0 forBundleIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)applicationStateDidRestore;
-(void)didChangeNotificationSettings:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)localeDidChange;
-(void)notificationSourcesDidUninstall:(id)arg0 ;
-(void)removeAllPendingNotificationRecordsForBundleIdentifier:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)removePendingNotificationRecordsWithIdentifiers:(id)arg0 forBundleIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)removeSimilarPendingNotificationRecords:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)setPendingNotificationRecords:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)timeDidChangeSignificantly;


@end


#endif