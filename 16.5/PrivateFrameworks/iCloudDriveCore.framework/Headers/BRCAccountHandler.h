// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCACCOUNTHANDLER_H
#define BRCACCOUNTHANDLER_H

@class NSString, BRDSIDString, NSMutableDictionary, NSError;
@protocol MCProfileConnectionObserver, OS_dispatch_queue, OS_dispatch_workloop;

#import <Foundation/Foundation.h>

#import "BRCAccountSessionFPFS.h"

@interface BRCAccountHandler : NSObject <MCProfileConnectionObserver>

 {
    NSString *_ubiquityTokenSalt;
    BRDSIDString *_dbAccountDSID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_migrationStatusSetterQueue;
    BOOL _hasSetMigrationComplete;
    NSMutableDictionary *_syncPolicyByFolderType;
}


@property (readonly, nonatomic) NSString *acAccountID; // ivar: _acAccountID
@property (readonly, nonatomic) NSString *accountPath; // ivar: _accountPath
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL doesNotHaveEnoughDiskSpaceToBeFunctional; // ivar: _doesNotHaveEnoughDiskSpaceToBeFunctional
@property (readonly, nonatomic) BOOL finishedLoading; // ivar: _finishedLoading
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSError *loggedOutError; // ivar: _loggedOutError
@property (readonly, nonatomic) NSObject<OS_dispatch_workloop> *pushWorkloop; // ivar: _pushWorkloop
@property (readonly, nonatomic) BRCAccountSessionFPFS *session; // ivar: _session
@property (readonly) Class superclass;


+(id)currentiCloudAccount;
+(id)currentiCloudAccountID;
+(void)_migrateAccountIfNecessaryForAccountDSID:(id)arg0 ;
-(BOOL)_cleanupAPFSSnapshotWhenNoSessionExists;
-(BOOL)_createCurrentAccountSessionWithID:(id)arg0 error:(*id)arg1 ;
-(BOOL)_loadOnDiskAccountSessionSecondTry:(id)arg0 prevError:(id)arg1 ;
-(BOOL)_loadOnDiskAccountSessionWithError:(*id)arg0 ;
-(BOOL)checkEnoughDiskSpaceToBeFunctional;
-(BOOL)createAccountSessionWithDSID:(id)arg0 error:(*id)arg1 ;
-(BOOL)destroyCurrentAccountSynchronously;
-(BOOL)destroySessionSynchronously;
-(BOOL)setDBAccountDSID:(id)arg0 ;
-(NSInteger)syncPolicyforSyncedFolderType:(NSUInteger)arg0 ;
-(id)initWithACAccountID:(id)arg0 ;
-(id)ubiquityTokenSalt;
-(void)__destroySession;
-(void)_cleanupPushAndActivitiesStatesWhenNoSessionExists;
-(void)_destroyCurrentSessionSynchronously;
-(void)_handleAccountDidChange;
-(void)_handleAccountWillChange;
-(void)_updateAccountToDSID:(id)arg0 ;
-(void)addFileProviderDomainForAccount:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;
-(void)jetsamCloudDocsApps;
-(void)markMigrationCompletedForDSID:(id)arg0 ;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)reloadSyncedFolderPolicies;
-(void)reloadSyncedFolderPoliciesDisableiCloudDesktop:(BOOL)arg0 ;
-(void)setMigrationStatus:(char)arg0 forDSID:(id)arg1 shouldUpdateAccount:(BOOL)arg2 completion:(id)arg3 ;
-(void)setMigrationStatus:(char)arg0 forDSID:(id)arg1 shouldUpdateAccount:(BOOL)arg2 shouldPostAccountChangedNotification:(BOOL)arg3 completion:(id)arg4 ;
-(void)setSyncPolicy:(NSInteger)arg0 forSyncedFolderType:(NSUInteger)arg1 ;
-(void)startAndLoadAccountSynchronously:(id)arg0 ;


@end


#endif