// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSVSUBSCRIPTIONENTITLEMENTSSUBSCRIPTION_H
#define SSVSUBSCRIPTIONENTITLEMENTSSUBSCRIPTION_H

@class NSNumber, NSString, NSDate;

#import <Foundation/Foundation.h>


@interface SSVSubscriptionEntitlementsSubscription : NSObject

@property (copy, nonatomic) NSNumber *appAdamId; // ivar: _appAdamId
@property (copy, nonatomic) NSNumber *appVersion; // ivar: _appVersion
@property (copy, nonatomic) NSString *chargeCountryCode; // ivar: _chargeCountryCode
@property (copy, nonatomic) NSString *chargeCurrencyCode; // ivar: _chargeCurrencyCode
@property (copy, nonatomic) NSNumber *chargeStoreFrontIdentifier; // ivar: _chargeStoreFrontIdentifier
@property (copy, nonatomic) NSDate *expireDate; // ivar: _expireDate
@property (copy, nonatomic) NSNumber *familyId; // ivar: _familyId
@property (copy, nonatomic) NSNumber *inAppAdamId; // ivar: _inAppAdamId
@property (copy, nonatomic) NSString *inAppVersion; // ivar: _inAppVersion
@property (nonatomic, getter=isNewsAppPurchase) BOOL newsAppPurchase; // ivar: _newsAppPurchase
@property (copy, nonatomic) NSString *offerIdentifier; // ivar: _offerIdentifier
@property (copy, nonatomic) NSNumber *originalPurchaseDownloadId; // ivar: _originalPurchaseDownloadId
@property (copy, nonatomic) NSNumber *purchasabilityType; // ivar: _purchasabilityType
@property (copy, nonatomic) NSNumber *purchaseDownloadId; // ivar: _purchaseDownloadId
@property (copy, nonatomic) NSNumber *quantity; // ivar: _quantity
@property (copy, nonatomic) NSString *vendorIdentifier; // ivar: _vendorIdentifier


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg0 ;


@end


#endif