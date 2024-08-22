// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQLOCALBACKUPCONTROLLER_H
#define ICQLOCALBACKUPCONTROLLER_H

@class PSListController, MBManager, NSMutableArray, PSSpecifier, MBBackup, NSDate, NSString, ACAccount, NSURL;
@protocol MBManagerDelegate, DelayedPushDelegate;


#import "ICQDeviceIdentificationView.h"
#import "ICQSpinnerBezel.h"
#import "ICQPreferencesRemoteUIDelegate.h"

@interface ICQLocalBackupController : PSListController <MBManagerDelegate, DelayedPushDelegate>

 {
    MBManager *_backupManager;
    NSMutableArray *_appSpecifiers;
    NSMutableArray *_visibleAppSpecifiers;
    BOOL _showAllPressed;
    PSSpecifier *_showAllSpecifier;
    PSSpecifier *_nextBackupSizeSpecifier;
    ICQDeviceIdentificationView *_deviceIdentificationView;
    MBBackup *_deviceBackup;
    NSDate *_dateOfLastBackup;
    BOOL _doneLoadingDeviceBackup;
    NSString *_nextBackupSizeString;
    ICQSpinnerBezel *_deletionBezel;
    BOOL _shouldCancelScanOnExit;
    BOOL _manageStorageReloadNeeded;
}


@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) NSString *additionalSpaceRequiredString; // ivar: _additionalSpaceRequiredString
@property (nonatomic) NSUInteger backupSize; // ivar: _backupSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (retain, nonatomic) NSURL *deviceImageURL; // ivar: _deviceImageURL
@property (retain, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ICQPreferencesRemoteUIDelegate *remoteDelegate; // ivar: _remoteDelegate
@property (nonatomic) BOOL scanInProgress; // ivar: _scanInProgress
@property (readonly) Class superclass;


+(BOOL)isiCloudPhotosEnabled;
+(id)cellValueStyleDateStringForDate:(id)arg0 ;
+(id)currentDeviceBackupWithMBManager:(id)arg0 filtering:(BOOL)arg1 error:(*id)arg2 ;
+(id)dateStringForSnapshot:(id)arg0 ;
+(id)deviceImageURLFromAttributes:(id)arg0 ;
+(id)specifier;
+(id)specifierForAccount:(id)arg0 ;
-(BOOL)beginScan;
-(BOOL)isDomainWhitelisted:(id)arg0 ;
-(id)appSpecifierForBundleID:(id)arg0 ;
-(id)backupDomainEnabledForSpecifier:(id)arg0 ;
-(id)currentDeviceBackup;
-(id)dateStringOfLatestBackup;
-(id)init;
-(id)loadAppSpecifiersWithDomainInfo:(id)arg0 ;
-(id)nextBackupSizeStringWithSpecifier:(id)arg0 ;
-(id)specifiers;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)_backupDeletionSuccess;
-(void)_updateTable:(id)arg0 toMatchArray:(id)arg1 withVisibleArray:(id)arg2 maxVisible:(NSUInteger)arg3 inSection:(NSInteger)arg4 withRowOffset:(NSInteger)arg5 ;
-(void)animateAppSpecifierChanges;
-(void)assignDisableBackupsConfirmationToSpecifier:(id)arg0 ;
-(void)confirmDelete:(id)arg0 ;
-(void)dealloc;
-(void)deleteBackupConfirmed;
-(void)didEnterBackground:(id)arg0 ;
-(void)endDeletionBezel;
-(void)insertDeleteBackupButtonIfNeeded;
-(void)loadFailed:(id)arg0 withError:(id)arg1 ;
-(void)loadFinished:(id)arg0 ;
-(void)loadPropertyValuesFromDictionary:(id)arg0 ;
-(void)loadQuotaInfo;
-(void)loadStarted:(id)arg0 ;
-(void)loadView;
-(void)manager:(id)arg0 didFailScanWithError:(id)arg1 ;
-(void)managerDidFinishScan:(id)arg0 ;
-(void)reloadAfterFetch;
-(void)reloadBackupInfoWithDeleteButton:(BOOL)arg0 ;
-(void)reloadQuotaInfo;
-(void)setBackupDomainEnabled:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setSpecifier:(id)arg0 ;
-(void)showAllApps:(id)arg0 ;
-(void)startDeletionBezel;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)turnOffAppBackupCancelled:(id)arg0 ;
-(void)turnOffAppBackupConfirmed:(id)arg0 ;
-(void)updateAppSpecifiersScanWhenComplete:(BOOL)arg0 ;
-(void)updateNextBackupSize;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif