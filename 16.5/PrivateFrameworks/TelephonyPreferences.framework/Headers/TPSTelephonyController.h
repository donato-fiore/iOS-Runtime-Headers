// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSTELEPHONYCONTROLLER_H
#define TPSTELEPHONYCONTROLLER_H

@class NSOrderedSet, NSString, NSDictionary, CoreTelephonyClient;
@protocol CoreTelephonyClientDelegate, OS_dispatch_queue;


#import "TPSController.h"

@interface TPSTelephonyController : TPSController <CoreTelephonyClientDelegate>



@property (nonatomic) os_unfair_lock_s accessorLock; // ivar: _accessorLock
@property (copy, nonatomic) NSOrderedSet *activeSubscriptions; // ivar: _activeSubscriptions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialDispatchQueue; // ivar: _serialDispatchQueue
@property (copy, nonatomic) NSOrderedSet *subscriptions; // ivar: _subscriptions
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *systemCapabilities; // ivar: _systemCapabilities
@property (readonly, nonatomic) CoreTelephonyClient *telephonyClient; // ivar: _telephonyClient


-(BOOL)isSubscriptionOrderedSet:(id)arg0 equivalentToSubscriptionOrderedSet:(id)arg1 ;
-(BOOL)supportsCellularNetworkSelectionForSubscriptionContext:(id)arg0 ;
-(BOOL)supportsSystemCapabilityCallForwardingForSubscriptionContext:(id)arg0 ;
-(BOOL)supportsSystemCapabilityCallWaitingForSubscriptionContext:(id)arg0 ;
-(BOOL)supportsSystemCapabilityCallerIDForSubscriptionContext:(id)arg0 ;
-(BOOL)supportsSystemCapabilityWithName:(id)arg0 subscriptionContext:(id)arg1 ;
-(id)fetchSubscriptions;
-(id)fetchSubscriptionsInUse;
-(id)fetchSystemCapabilitiesForSubscriptions:(id)arg0 ;
-(id)init;
-(id)systemCapabilitiesForSubscriptionContext:(id)arg0 ;
-(id)systemCapabilitiesForSubscriptionContext:(id)arg0 error:(*id)arg1 ;
-(void)context:(id)arg0 capabilitiesChanged:(id)arg1 ;
-(void)performAtomicAccessorBlock:(id)arg0 ;


@end


#endif