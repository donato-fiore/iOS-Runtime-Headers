// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQUSAGESTORAGECONTROLLER_H
#define ICQUSAGESTORAGECONTROLLER_H

@class PSListController, NSDate, PSSpecifier, NSMutableArray, SUManagerClient, NSString;



@interface ICQUsageStorageController : PSListController {
    NSDate *_storageExpiry;
    CGFloat _timeoutLimit;
    BOOL _storageLookupInProgress;
    PSSpecifier *_appsStorageGroup;
    PSSpecifier *_photosSpecifier;
    NSMutableArray *_deferredUsageApps;
    SUManagerClient *_SUManager;
    NSString *_updateName;
    PSSpecifier *_storageUsedSpecifier;
    PSSpecifier *_storageAvailableSpecifier;
    NSUInteger _updateRequiredBytes;
}


@property (nonatomic) BOOL delayUsagePopulation; // ivar: _delayUsagePopulation
@property (nonatomic) BOOL openedFromSoftwareUpdate; // ivar: _openedFromSoftwareUpdate


+(id)storageAvailableSpecifier;
+(id)storageUsedSpecifier;
+(id)systemSizeAvailable:(id)arg0 ;
+(id)systemSizeUsed:(id)arg0 ;
-(BOOL)mediaCache:(id)arg0 hasGroups:(id)arg1 ;
-(BOOL)shouldDeferPushForSpecifierID:(id)arg0 ;
-(BOOL)storageExpired;
-(Class)usageDetailControllerForBundleID:(id)arg0 ;
-(id)_specifierForApp:(id)arg0 ;
-(id)_specifierForBundle:(id)arg0 ;
-(id)controllerForSpecifier:(id)arg0 ;
-(id)init;
-(id)specifiers;
-(id)stringWithAppSizeForSpecifier:(id)arg0 ;
-(id)tapToRadarURLForAttributes:(id)arg0 ;
-(void)addStorageSpecifiers:(id)arg0 completed:(BOOL)arg1 ;
-(void)appDeletionComplete;
-(void)checkForPendingUpdate;
-(void)dealloc;
-(void)didEnterForeground;
-(void)didUnlock;
-(void)handleURL:(id)arg0 ;
-(void)prepareForSnapshot;
-(void)refreshSoftwareUpdateRequiredSpace;
-(void)reloadSpecifiers;
-(void)reloadStorageSummary;
-(void)removeStorageSpecifier:(id)arg0 ;
-(void)sizeChangedForSpecifier:(id)arg0 ;
-(void)snapshotAndReportDiskSpace;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif