// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQDAEMONOFFERMANAGER_H
#define ICQDAEMONOFFERMANAGER_H

@class FLFollowUpController, NSURLSession, NSNumber;

#import <Foundation/Foundation.h>

#import "ICQNetworkThrottleController.h"
#import "_ICQAccountManager.h"
#import "_TtC11iCloudQuota15ICQTaskLimiters.h"

@interface ICQDaemonOfferManager : NSObject {
    FLFollowUpController *_followUpController;
    ICQNetworkThrottleController *_throttleController;
}


@property (readonly, nonatomic) _ICQAccountManager *accountManager; // ivar: _accountManager
@property (nonatomic, getter=isBuddyOfferEnabled) BOOL buddyOfferEnabled;
@property (nonatomic, getter=isLegacyDeviceStorageLevelNotificationEnabled) BOOL legacyDeviceStorageLevelNotificationEnabled;
@property (readonly, nonatomic) NSURLSession *sharedURLSession; // ivar: _sharedURLSession
@property (nonatomic) BOOL shouldDirectToStorageManagement;
@property (nonatomic, getter=isSimulatedDeviceStorageAlmostFull) BOOL simulatedDeviceStorageAlmostFull;
@property (retain, nonatomic) NSNumber *simulatedPhotosLibrarySize;
@property (retain, nonatomic) _TtC11iCloudQuota15ICQTaskLimiters *taskLimiters; // ivar: _taskLimiters


+(id)ckBackupDeviceID;
+(id)getCkBackupDeviceIDWithCompletionHandler:(id)arg0 ;
+(id)sharedDaemonOfferManager;
-(BOOL)_isCacheValidForRequestType:(NSInteger)arg0 offerStubs:(id)arg1 ;
-(BOOL)_isCachedDaemonOfferValid:(id)arg0 forAccount:(id)arg1 ;
-(BOOL)_useFetchOffersDataDirectly;
-(Class)_classForOfferStub:(id)arg0 ;
-(Class)_daemonOfferClassForRequestType:(NSInteger)arg0 ;
-(Class)daemonOfferClassFromBundleId:(id)arg0 options:(id)arg1 ;
-(NSUInteger)daemonOfferSource;
-(id)_getFetchOfferStubsFromStubs:(id)arg0 ;
-(id)_getHandlerForBundleId:(SEL)arg0 options:(id)arg1 ;
-(id)_getStubsForRequestType:(NSInteger)arg0 fromDaemonStubs:(id)arg1 ;
-(id)_placeholderOfferForAccount:(id)arg0 requestType:(NSInteger)arg1 error:(id)arg2 ;
-(id)_storageManagementFollowupActions;
-(id)_storageManagementFollowupItem;
-(id)_storageManagementFollowupNotification;
-(id)init;
-(id)initWithAccountManager:(id)arg0 ;
-(id)soonestOfferOrStubExpirationDate;
-(void)_clearCachedStubsIfOfferIDIsNew:(id)arg0 ;
-(void)_clearStorageManagementFollowup;
-(void)_coalescedDaemonOfferStubsDictionaryForAccount:(id)arg0 requestType:(NSInteger)arg1 quotaReason:(id)arg2 completion:(id)arg3 ;
-(void)_coalescedFetchDaemonOfferForAccount:(id)arg0 stub:(id)arg1 notificationID:(id)arg2 completion:(id)arg3 ;
// -(void)_coalescedReconsiderOffersForAccount:(id)arg0 isForBuddy:(BOOL)arg1 quotaReason:(id)arg2 options:(id)arg3 choiceHandler:(id)arg4 completion:(unk)arg5  ;
-(void)_daemonLocalOfferStubsDictionaryForAccount:(id)arg0 requestType:(NSInteger)arg1 completion:(id)arg2 ;
-(void)_daemonOfferStubsDictionaryForAccount:(id)arg0 requestType:(NSInteger)arg1 quotaReason:(id)arg2 completion:(id)arg3 ;
-(void)_fetchDaemonOfferForAccount:(id)arg0 stub:(id)arg1 notificationID:(id)arg2 completion:(id)arg3 ;
-(void)_fetchDaemonOfferStubsForAccount:(id)arg0 isForBuddy:(BOOL)arg1 quotaReason:(id)arg2 completion:(id)arg3 ;
-(void)_fetchDictionaryForAccount:(id)arg0 quotaKey:(id)arg1 quotaReason:(id)arg2 stub:(id)arg3 notificationID:(id)arg4 contextDictionary:(id)arg5 mlDaemonExtraFields:(id)arg6 completion:(id)arg7 ;
-(void)_handlerMultipleStubs:(id)arg0 forAccount:(id)arg1 requestType:(NSInteger)arg2 completion:(id)arg3 ;
-(void)_logErrorsForFetchOfferResultWithOffer:(id)arg0 error:(id)arg1 isForBuddy:(BOOL)arg2 ;
-(void)_mockFetchDictionaryForAccount:(id)arg0 quotaKey:(id)arg1 stub:(id)arg2 notificationID:(id)arg3 contextDictionary:(id)arg4 completion:(id)arg5 ;
-(void)_persistAndNotifyMissingPlaceholdersForRequestType:(NSInteger)arg0 account:(id)arg1 ;
-(void)_postDaemonOfferChangedDueToPushDarwinNotificationRequestType:(NSInteger)arg0 ;
-(void)_postFollowupForDaemonOffer:(id)arg0 replaceExisting:(BOOL)arg1 completion:(id)arg2 ;
-(void)_postOfferType:(id)arg0 isForBuddy:(BOOL)arg1 ;
-(void)_postStorageManagementFollowup;
-(void)_postUserNotification:(id)arg0 completion:(id)arg1 ;
-(void)_processOfferStub:(id)arg0 account:(id)arg1 isPremiumOffer:(BOOL)arg2 ;
-(void)_processPushNotificationCheckHardwareIDWithDictionary:(id)arg0 completion:(id)arg1 ;
-(void)_processPushNotificationDictionary:(id)arg0 completion:(id)arg1 ;
-(void)_reconsiderLocalOffersWithReason:(id)arg0 account:(id)arg1 completion:(id)arg2 ;
// -(void)_reconsiderOffersForAccount:(id)arg0 isForBuddy:(BOOL)arg1 quotaReason:(id)arg2 choiceHandler:(id)arg3 completion:(unk)arg4  ;
// -(void)_reconsiderOffersForAccount:(id)arg0 isForBuddy:(BOOL)arg1 quotaReason:(id)arg2 options:(id)arg3 choiceHandler:(id)arg4 completion:(unk)arg5  ;
-(void)_showDaemonAlertForOffer:(id)arg0 notificationDictionary:(id)arg1 store:(id)arg2 account:(id)arg3 completion:(id)arg4 ;
-(void)_subdDisplayDelayedOfferWithContext:(id)arg0 completion:(id)arg1 ;
-(void)_subdFetchDaemonOfferForAccount:(id)arg0 stub:(id)arg1 notificationID:(id)arg2 isoNewOfferResponse:(id)arg3 completion:(id)arg4 ;
-(void)_subdFetchNewOfferResponseWithContent:(id)arg0 andMaxDelaySecs:(id)arg1 completion:(id)arg2 ;
-(void)_subdHandleFetchOffersStub:(id)arg0 account:(id)arg1 requestType:(NSInteger)arg2 group:(id)arg3 completion:(id)arg4 ;
// -(void)_subdRefreshOfferDetailsAndDisplay:(id)arg0 completion:(id)arg1 account:(unk)arg2 accountStore:(id)arg3 notificationID:(id)arg4 isoNewOfferResponse:(id)arg5  ;
-(void)_subdStopFailsafeActivity;
-(void)_subdTearDown;
-(void)_teardownCachedBuddyOffer;
-(void)_teardownCachedDefaultOfferAndNotify:(BOOL)arg0 ;
-(void)_teardownCachedOfferAndNotify:(BOOL)arg0 ;
-(void)_teardownCachedOffersAndNotify:(BOOL)arg0 ;
-(void)_teardownCachedPremiumOfferAndNotify:(BOOL)arg0 ;
-(void)_updateOffer:(id)arg0 buttonId:(id)arg1 info:(id)arg2 account:(id)arg3 accountStore:(id)arg4 completion:(id)arg5 ;
-(void)_updateQuotaForAccount:(id)arg0 withServerDictionary:(id)arg1 ;
-(void)addCommonHeadersToRequest:(id)arg0 ;
-(void)addPremiumOffersHeaderIfNeededForRequest:(id)arg0 ;
-(void)clearAllFollowupsWithCompletion:(id)arg0 ;
-(void)clearFollowupsIsPremiumOffer:(BOOL)arg0 completion:(id)arg1 ;
-(void)clearLegacyFollowups;
-(void)daemonBuddyOfferDictionaryForAccount:(id)arg0 completion:(id)arg1 ;
-(void)daemonOfferDictionaryForAccount:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)displayDelayedOfferWithContext:(id)arg0 completion:(id)arg1 ;
-(void)forcePostFollowup;
-(void)postBuddyOfferType:(id)arg0 ;
-(void)postOfferType:(id)arg0 ;
-(void)processPushNotificationDictionary:(id)arg0 completion:(id)arg1 ;
-(void)reconsiderOffersWithCompletion:(id)arg0 ;
-(void)reconsiderOffersWithReason:(id)arg0 reuseLocalOffers:(BOOL)arg1 completion:(id)arg2 ;
-(void)renewCredentialsWithCompletion:(id)arg0 ;
-(void)startDirectingToStorageManagement;
-(void)stopDirectingToStorageManagement;
-(void)tearDownCachedPremiumOffer;
-(void)teardownCachedBuddyOffer;
-(void)teardownCachedOffer;
-(void)teardownCachedOffers;
-(void)teardownOffersForAccount:(id)arg0 completion:(id)arg1 ;
-(void)updateOfferForAccount:(id)arg0 offerId:(id)arg1 buttonId:(id)arg2 info:(id)arg3 completion:(id)arg4 ;


@end


#endif