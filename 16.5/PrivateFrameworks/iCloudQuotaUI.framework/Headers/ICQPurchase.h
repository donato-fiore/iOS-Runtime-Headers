// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQPURCHASE_H
#define ICQPURCHASE_H

@class NSDictionary, NSString, NSArray, ICQOffer, NSURLSession;
@protocol AMSPurchaseResponseProtocol, ICQPurchaseDelegate;

#import <Foundation/Foundation.h>


@interface ICQPurchase : NSObject <AMSPurchaseResponseProtocol>



@property (nonatomic) NSInteger amsServerErrorCode; // ivar: _amsServerErrorCode
@property (retain, nonatomic) NSDictionary *clientInfo; // ivar: _clientInfo
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ICQPurchaseDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *interruptedBuyErrorCodes; // ivar: _interruptedBuyErrorCodes
@property (nonatomic) BOOL isLegacyNativeFlow; // ivar: _isLegacyNativeFlow
@property (retain, nonatomic) ICQOffer *offer; // ivar: _offer
@property (copy, nonatomic) NSString *sceneIdentifier; // ivar: _sceneIdentifier
@property (retain, nonatomic) NSURLSession *session; // ivar: _session
@property (nonatomic) NSInteger statusCode; // ivar: _statusCode
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *userAgentSuffix; // ivar: _userAgentSuffix


+(id)clearCacheAndNotifyClientsWithCompletion:(SEL)arg0 ;
+(id)parseParameters:(id)arg0 action:(NSInteger)arg1 ;
+(id)upgradeStorageKeyBagForOffer:(id)arg0 buttonID:(id)arg1 ;
+(id)upgradeStorageQueryDictionaryForOffer:(id)arg0 buttonID:(id)arg1 ;
+(id)upgradeStorageQueryKeySet;
+(id)userAgentForBundleIdentifier:(id)arg0 appVersion:(id)arg1 attributionSuffix:(id)arg2 ;
+(void)clearCacheAndNotifyClients;
-(id)actionString;
-(id)initWithOffer:(id)arg0 clientInfo:(id)arg1 ;
-(void)beginPurchaseFlow;
-(void)handleAuthenticateRequest:(id)arg0 purchase:(id)arg1 purchaseQueue:(id)arg2 completion:(id)arg3 ;
-(void)handleDialogRequest:(id)arg0 purchase:(id)arg1 purchaseQueue:(id)arg2 completion:(id)arg3 ;
-(void)handleEngagementRequest:(id)arg0 purchase:(id)arg1 purchaseQueue:(id)arg2 completion:(id)arg3 ;
-(void)handlePurchaseCompletionWithError:(id)arg0 ;
-(void)preparePurchase;
-(void)startPurchaseWithCompletion:(id)arg0 ;


@end


#endif