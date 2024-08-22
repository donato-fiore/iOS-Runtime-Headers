// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRICELLULARPARAMETERMANAGER_H
#define TRICELLULARPARAMETERMANAGER_H

@class CTXPCServiceSubscriptionContext, CoreTelephonyClient, _PASLock, NSString;
@protocol CoreTelephonyClientDataDelegate, CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientCarrierBundleDelegate;

#import <Foundation/Foundation.h>


@interface TRICellularParameterManager : NSObject <CoreTelephonyClientDataDelegate, CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientCarrierBundleDelegate>

 {
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    CoreTelephonyClient *_telephonyClient;
    _PASLock *_lock;
}


@property (retain, nonatomic) NSString *carrierBundleIdentifier; // ivar: _carrierBundleIdentifier
@property (retain, nonatomic) NSString *carrierCountryIsoCode; // ivar: _carrierCountryIsoCode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_dispatchQueueForCarrierInfoGathering;
-(id)_fetchCarrierBundleIdentifier:(id)arg0 ;
-(id)_fetchCarrierCountryIsoCode:(id)arg0 ;
-(id)init;
-(void)carrierBundleChange:(id)arg0 ;
-(void)preferredDataSimChanged:(id)arg0 ;
-(void)subscriberCountryCodeDidChange:(id)arg0 ;


@end


#endif