// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSWIFICALLINGCONTROLLER_H
#define TPSWIFICALLINGCONTROLLER_H

@class NSString, NSDictionary, TUSenderIdentityCapabilities, CTXPCServiceSubscriptionContext;
@protocol TUCallCapabilitiesDelegatePrivate;

#import <Foundation/Foundation.h>

#import "TPSCarrierBundleController.h"
#import "TPSCloudCallingEmergencyAddressURLController.h"
#import "TPSEncryptedIdentityClient.h"
#import "TPSCloudCallingThumperProvisioningURLController.h"

@interface TPSWiFiCallingController : NSObject <TUCallCapabilitiesDelegatePrivate>



@property (retain, nonatomic) TPSCarrierBundleController *carrierBundleController; // ivar: _carrierBundleController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TPSCloudCallingEmergencyAddressURLController *emergencyAddressURLController; // ivar: _emergencyAddressURLController
@property (retain, nonatomic) TPSEncryptedIdentityClient *encryptedIdentityClient; // ivar: _encryptedIdentityClient
@property (copy, nonatomic) NSDictionary *encryptedIdentityInfo; // ivar: _encryptedIdentityInfo
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *localizedCarrierName;
@property (retain, nonatomic) TUSenderIdentityCapabilities *subscriptionCapabilities; // ivar: _subscriptionCapabilities
@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext; // ivar: _subscriptionContext
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsEncryptedIdentity;
@property (readonly, nonatomic) BOOL supportsThumperCalling;
@property (readonly, nonatomic) BOOL supportsWiFiCalling;
@property (readonly, nonatomic) BOOL supportsWiFiEmergencyCalling;
@property (nonatomic, getter=isThumperCallingEnabled) BOOL thumperCallingEnabled;
@property (retain, nonatomic) TPSCloudCallingThumperProvisioningURLController *thumperProvisioningURLController; // ivar: _thumperProvisioningURLController
@property (nonatomic, getter=isWiFiCallingEnabled) BOOL wiFiCallingEnabled;
@property (nonatomic, getter=isWiFiCallingRoamingEnabled) BOOL wiFiCallingRoamingEnabled;


-(id)init;
-(id)initWithSubscriptionContext:(id)arg0 ;
-(id)subscriptionCapabilitiesForSubscriptionContextUUID:(id)arg0 ;
-(void)didChangeThumperCallingCapabilitiesForSenderIdentityWithUUID:(id)arg0 ;
-(void)didChangeWiFiCallingCapabilitiesForSenderIdentityWithUUID:(id)arg0 ;


@end


#endif