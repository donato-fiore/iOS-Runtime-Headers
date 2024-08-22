// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCCKSHORTCUTSYNCCOORDINATOR_H
#define VCCKSHORTCUTSYNCCOORDINATOR_H

@class NSString, CKContainer, CKRecordID;
@protocol WFDatabaseProvider, OS_nw_path_monitor, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VCCKApplicationStateObserver.h"
#import "VCCKShortcutSyncService.h"

@interface VCCKShortcutSyncCoordinator : NSObject

@property (readonly, nonatomic) NSString *accountForSyncToken;
@property (nonatomic) NSInteger accountStatus; // ivar: _accountStatus
@property (readonly, nonatomic) VCCKApplicationStateObserver *applicationObserver; // ivar: _applicationObserver
@property (readonly, nonatomic) CKContainer *container; // ivar: _container
@property (retain, nonatomic) VCCKShortcutSyncService *currentSyncService; // ivar: _currentSyncService
@property (readonly, nonatomic) NSObject<WFDatabaseProvider> *databaseProvider; // ivar: _databaseProvider
@property (readonly, nonatomic) NSObject<OS_nw_path_monitor> *pathMonitor; // ivar: _pathMonitor
@property (nonatomic, getter=isStarted) BOOL started; // ivar: _started
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateAccessQueue; // ivar: _stateAccessQueue
@property (nonatomic, getter=isSyncEnabled) BOOL syncEnabled; // ivar: _syncEnabled
@property (readonly, nonatomic) *__CTServerConnection telephonyConnection; // ivar: _telephonyConnection
@property (retain, nonatomic) CKRecordID *userRecordID; // ivar: _userRecordID


-(id)initWithDatabaseProvider:(id)arg0 ;
-(void)dealloc;
-(void)deleteLegacyShortcutsZoneSubscriptionIfNeeded;
-(void)handleAccountChangedNotification:(id)arg0 ;
-(void)handleCloudKitSyncEnabledChange;
-(void)handleCloudKitSyncZoneWasPurgedChange;
-(void)handleWalrusStatusDidChange;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setupPathMonitor;
-(void)start;
-(void)startObservingAccountChanges;
-(void)startObservingApplicationVisibility;
-(void)startObservingDataUsagePermission;
-(void)startObservingReachability;
-(void)startObservingUserDefaults;
-(void)stopObservingAccountChanges;
-(void)stopObservingApplicationVisibility;
-(void)stopObservingDataUsagePermission;
-(void)stopObservingReachability;
-(void)stopObservingUserDefaults;
-(void)updateAccountStatusAndUserRecordID;
-(void)updateCurrentSyncServiceIfNeeded;


@end


#endif