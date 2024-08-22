// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STTELEPHONYSUBSCRIPTIONCONTEXT_H
#define STTELEPHONYSUBSCRIPTIONCONTEXT_H

@class NSString, NSArray;
@protocol BSDebugDescriptionProviding;

#import <Foundation/Foundation.h>

#import "STMutableTelephonyCarrierBundleInfo.h"
#import "STMutableTelephonyMobileEquipmentInfo.h"
#import "STMutableTelephonySubscriptionInfo.h"

@interface STTelephonySubscriptionContext : NSObject <BSDebugDescriptionProviding>



@property (copy, nonatomic) NSString *cachedCTOperatorName; // ivar: _cachedCTOperatorName
@property (copy, nonatomic) NSString *cachedCTRegistrationCellularStatus; // ivar: _cachedCTRegistrationCellularStatus
@property (copy, nonatomic) NSString *cachedCTRegistrationDisplayStatus; // ivar: _cachedCTRegistrationDisplayStatus
@property (retain, nonatomic) STMutableTelephonyCarrierBundleInfo *carrierBundleInfo; // ivar: _carrierBundleInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) *BOOL fakeCellularRegistrationCanceled; // ivar: _fakeCellularRegistrationCanceled
@property (nonatomic) *BOOL fakeRegistrationCanceled; // ivar: _fakeRegistrationCanceled
@property (nonatomic) *BOOL fakeServiceCanceled; // ivar: _fakeServiceCanceled
@property (readonly, nonatomic, getter=isFakingCellularRegistration) BOOL fakingCellularRegistration;
@property (readonly, nonatomic, getter=isFakingRegistration) BOOL fakingRegistration;
@property (readonly, nonatomic, getter=isFakingService) BOOL fakingService;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) STMutableTelephonyMobileEquipmentInfo *mobileEquipmentInfo; // ivar: _mobileEquipmentInfo
@property (nonatomic) NSUInteger modemDataConnectionType; // ivar: _modemDataConnectionType
@property (nonatomic, getter=isPretendingToSearch) BOOL pretendingToSearch; // ivar: _pretendingToSearch
@property (copy, nonatomic) NSArray *statusBarImages; // ivar: _statusBarImages
@property (retain, nonatomic) STMutableTelephonySubscriptionInfo *subscriptionInfo; // ivar: _subscriptionInfo
@property (readonly) Class superclass;


-(id)debugDescriptionWithMultilinePrefix:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif