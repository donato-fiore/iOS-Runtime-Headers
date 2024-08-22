// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUPURCHASEMANAGER_H
#define SUPURCHASEMANAGER_H

@class SSEventMonitor, NSMutableSet, NSMutableArray, NSNumber, NSString, NSSet, NSDictionary;
@protocol SSPurchaseRequestDelegatePrivate, SSEventMonitorDelegate, SUContinuationDelegate, SSDownloadManagerObserver, SSPurchaseRequestDelegate, SUPurchaseManagerDelegate;

#import <Foundation/Foundation.h>

#import "SUQueueSessionManager.h"

@interface SUPurchaseManager : NSObject <SSPurchaseRequestDelegatePrivate, SSEventMonitorDelegate, SUContinuationDelegate, SSDownloadManagerObserver, SSPurchaseRequestDelegate>

 {
    SSEventMonitor *_eventMonitor;
    NSMutableSet *_inflightContinuations;
    NSMutableArray *_observedDownloadManagers;
    NSMutableArray *_pendingContinuations;
    NSMutableArray *_pendingPurchases;
    NSMutableArray *_purchaseRequests;
    BOOL _showingErrorDialogs;
    NSInteger _updatesCount;
    BOOL _waitingForAuthentication;
}


@property (copy, nonatomic) NSNumber *accountDSID; // ivar: _accountDSID
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<SUPurchaseManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSSet *futurePurchases; // ivar: _futurePurchases
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger numberOfPendingPurchases;
@property (readonly, nonatomic) NSSet *purchasedItemIdentifiers; // ivar: _purchasedIdentifiers
@property (retain, nonatomic) SUQueueSessionManager *queueSessionManager; // ivar: _queueSessionManager
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *tidHeaders; // ivar: _tidHeaders
@property (copy, nonatomic) NSString *userAgent; // ivar: _userAgent


-(BOOL)_issuePurchaseRequestForPurchases:(id)arg0 ;
-(BOOL)_needsAuthenticationForPurchases:(id)arg0 ;
-(BOOL)addPurchaseBatch:(id)arg0 ;
-(BOOL)itemIdentifierIsPurchased:(NSUInteger)arg0 ;
-(BOOL)itemIdentifierIsPurchasing:(NSUInteger)arg0 ;
-(id)_accountDSIDForPurchase:(id)arg0 ;
-(id)_downloadManagerForDownloadKind:(id)arg0 ;
-(id)_newDictionaryForWebScriptValue:(id)arg0 inContext:(struct OpaqueJSContext *)arg1 ;
-(id)_newExternalDownloadWithDictionary:(id)arg0 ;
-(id)_newExternalDownloadWithDownloadDictionary:(id)arg0 ;
-(id)_newExternalDownloadWithItemDictionary:(id)arg0 ;
-(id)_newPurchaseBatchForPurchases:(id)arg0 ;
-(id)copyPurchaseForScriptObject:(id)arg0 ;
-(id)copyPurchaseForScriptObject:(id)arg0 inContext:(struct OpaqueJSContext *)arg1 ;
-(id)init;
-(id)newPurchaseBatchForItems:(id)arg0 offers:(id)arg1 ;
-(void)_addBatchForPurchases:(id)arg0 options:(id)arg1 ;
-(void)_dialogDidFinish:(id)arg0 ;
-(void)_enqueueContinuations:(id)arg0 ;
-(void)_enqueueExternalDownload:(id)arg0 ;
-(void)_enqueuePurchases:(id)arg0 ;
-(void)_performNextAction;
-(void)_removePlaceholdersForPurchase:(id)arg0 ;
-(void)_removePurchaseRequest:(id)arg0 ;
-(void)_schedulePurchaseCallback:(id)arg0 forPurchases:(id)arg1 ;
-(void)_showDialogsForErrors:(id)arg0 ;
-(void)_startContinuations:(id)arg0 ;
-(void)_startPurchases:(id)arg0 ;
-(void)addExternalDownloads:(id)arg0 inContext:(struct OpaqueJSContext *)arg1 ;
-(void)addExternalDownloads:(id)arg0 withOptions:(id)arg1 inContext:(struct OpaqueJSContext *)arg2 ;
-(void)addFuturePurchase:(id)arg0 ;
-(void)addPurchasedItemIdentifier:(NSUInteger)arg0 ;
-(void)addPurchasedItemIdentifiers:(id)arg0 ;
-(void)beginUpdates;
-(void)cancelFuturePurchase:(id)arg0 ;
-(void)continuation:(id)arg0 failedWithError:(id)arg1 ;
-(void)continuationFinished:(id)arg0 ;
-(void)dealloc;
-(void)endUpdates;
-(void)enqueueScriptPurchases:(id)arg0 ;
-(void)eventMonitor:(id)arg0 receivedEventWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)purchaseRequest:(id)arg0 purchaseDidFail:(id)arg1 withError:(id)arg2 ;
-(void)purchaseRequest:(id)arg0 purchaseDidSucceed:(id)arg1 ;
-(void)purchaseRequest:(id)arg0 purchaseDidSucceedWithResponse:(id)arg1 ;
-(void)purchaseScriptObject:(id)arg0 ;
-(void)purchaseScriptObject:(id)arg0 withOptions:(id)arg1 inContext:(struct OpaqueJSContext *)arg2 ;
-(void)removePurchasedItemIdentifier:(NSUInteger)arg0 ;
-(void)request:(id)arg0 didFailWithError:(id)arg1 ;
-(void)requestDidFinish:(id)arg0 ;


@end


#endif