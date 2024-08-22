// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTELEPHONYCONTROLLER_H
#define ICTELEPHONYCONTROLLER_H

@class NSString, CoreTelephonyClient, CTXPCServiceSubscriptionContext;
@protocol CoreTelephonyClientDelegate, CoreTelephonyClientSuppServicesDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICTelephonyController : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientSuppServicesDelegate>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_telephonyCallbackQueue;
    NSString *_phoneNumber;
    CoreTelephonyClient *_telephonyClient;
    CTXPCServiceSubscriptionContext *_telephonySubscriptionContext;
}


@property (readonly, copy, nonatomic) NSString *IMEI;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *mobileSubscriberCountryCode;
@property (readonly, copy, nonatomic) NSString *mobileSubscriberNetworkCode;
@property (readonly, copy, nonatomic) NSString *phoneNumber;
@property (readonly, copy, nonatomic) NSString *providerName;
@property (readonly) Class superclass;


+(id)sharedController;
-(BOOL)_ensureTelephonyHandlesAreReady;
-(BOOL)sendSMSWithText:(id)arg0 toPhoneNumber:(id)arg1 error:(*id)arg2 ;
-(id)_init;
-(id)_telephonyClient;
-(id)_telephonySubscriptionContext;
-(void)_handleActiveSubscriptionsDidChange;
-(void)_updatePhoneNumberAllowingDidChangeNotification:(BOOL)arg0 ;
-(void)activeSubscriptionsDidChange;
-(void)dealloc;
-(void)phoneNumberAvailable:(id)arg0 ;
-(void)phoneNumberChanged:(id)arg0 ;


@end


#endif