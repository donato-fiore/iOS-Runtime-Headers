// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSVTELEPHONYCONTROLLER_H
#define SSVTELEPHONYCONTROLLER_H

@class NSString, CoreTelephonyClient, CTXPCServiceSubscriptionContext;
@protocol CoreTelephonyClientSuppServicesDelegate, CoreTelephonyClientDelegate, CoreTelephonyClientRegistrationDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SSVTelephonyController : NSObject <CoreTelephonyClientSuppServicesDelegate, CoreTelephonyClientDelegate, CoreTelephonyClientRegistrationDelegate>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_dispatch_queue> *_telephonyCallbackQueue;
    BOOL _isPhoneNumberAccessRestricted;
    BOOL _hasTelephonyCapability;
    NSString *_phoneNumber;
    NSString *_operatorName;
    NSString *_registrationStatus;
    CoreTelephonyClient *_telephonyClient;
    CTXPCServiceSubscriptionContext *_telephonySubscriptionContext;
}


@property (readonly, copy, nonatomic) NSString *IMEI;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *mobileSubscriberCountryCode;
@property (readonly, copy, nonatomic) NSString *mobileSubscriberNetworkCode;
@property (readonly, copy, nonatomic) NSString *operatorName;
@property (readonly, copy, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic, getter=isPhoneNumberAccessRestricted) BOOL phoneNumberAccessRestricted;
@property (readonly, copy, nonatomic) NSString *providerName;
@property (readonly, copy, nonatomic) NSString *registrationStatus;
@property (readonly) Class superclass;


+(BOOL)_hasRequiredTelephonyEntitlement;
+(id)sharedController;
-(BOOL)_ensureTelephonyHandlesAreReady;
-(BOOL)sendSMSWithText:(id)arg0 toPhoneNumber:(id)arg1 countryCode:(id)arg2 error:(*id)arg3 ;
-(id)_init;
-(id)_telephonyClient;
-(id)_telephonySubscriptionContext;
-(void)_updateOperatorName;
-(void)_updatePhoneNumber;
-(void)_updateRegistrationStatus;
-(void)activeSubscriptionsDidChange;
-(void)dealloc;
-(void)displayStatusChanged:(id)arg0 status:(id)arg1 ;
-(void)operatorNameChanged:(id)arg0 name:(id)arg1 ;
-(void)phoneNumberAvailable:(id)arg0 ;
-(void)phoneNumberChanged:(id)arg0 ;


@end


#endif