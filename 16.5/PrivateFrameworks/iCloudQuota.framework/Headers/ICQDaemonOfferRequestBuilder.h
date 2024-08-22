// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQDAEMONOFFERREQUESTBUILDER_H
#define ICQDAEMONOFFERREQUESTBUILDER_H

@class ACAccount;

#import <Foundation/Foundation.h>

#import "ICQRequestProvider.h"
#import "_ICQAccountManager.h"

@interface ICQDaemonOfferRequestBuilder : NSObject {
    ACAccount *_account;
    ICQRequestProvider *_requestProvider;
    _ICQAccountManager *_accountManager;
}




-(id)initWithAccount:(id)arg0 accountManager:(id)arg1 ;
-(id)requestWithQuotaKey:(id)arg0 reason:(id)arg1 offerStub:(id)arg2 notificationID:(id)arg3 contextDictionary:(id)arg4 mlDaemonExtraFields:(id)arg5 sourceIsServerSample:(BOOL)arg6 ;
-(void)addPremiumOffersHeaderIfNeededForRequest:(id)arg0 ;


@end


#endif