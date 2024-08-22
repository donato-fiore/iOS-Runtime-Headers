// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TLTONESTOREDOWNLOADSTORESERVICESCONTROLLER_H
#define TLTONESTOREDOWNLOADSTORESERVICESCONTROLLER_H

@class NSString, NSHashTable, NSMutableDictionary, SSDownloadManager, SSPurchaseManager;
@protocol SSDownloadManagerObserver, SSPurchaseManagerDelegate, TLToneStoreDownloadController, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TLToneStoreDownloadStoreServicesController : NSObject <SSDownloadManagerObserver, SSPurchaseManagerDelegate, TLToneStoreDownloadController>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    NSHashTable *_observers;
    NSString *_storeAccountName;
    NSMutableDictionary *_toneStoreDownloadsByStoreDownloadPersistentIdentifiers;
    SSDownloadManager *_storeDownloadManager;
    SSPurchaseManager *_storePurchaseManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *storeAccountName;
@property (readonly) Class superclass;


-(id)init;
-(void)_assertRunningOnAccessQueue;
-(void)_handleAccountStoreDidChangeNotification:(id)arg0 ;
-(void)_handleToneManagerContentsDidChangeNotification:(id)arg0 ;
-(void)_notifyObserversOfCheckingForDownloadsFinishedWithoutNeedToIssueAnyDownload;
-(void)_notifyObserversOfStartedToneStoreDownloads:(id)arg0 progressedToneStoreDownload:(id)arg1 finishedToneStoreDownloads:(id)arg2 ;
-(void)_notifyObserversOfUpdatedStoreAccountName:(id)arg0 ;
-(void)_openToneStoreWithStoreItemKind:(id)arg0 ;
-(void)_performBlockOnAccessQueue:(id)arg0 ;
-(void)_updateStoreAccountName;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)downloadManager:(id)arg0 downloadStatesDidChange:(id)arg1 ;
-(void)openAlertToneStore;
-(void)openRingtoneStore;
-(void)purchaseManager:(id)arg0 didFinishPurchasesWithResponses:(id)arg1 ;
-(void)redownloadAllTones;
-(void)removeObserver:(id)arg0 ;


@end


#endif