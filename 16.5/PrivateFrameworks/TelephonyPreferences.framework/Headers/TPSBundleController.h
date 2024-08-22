// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSBUNDLECONTROLLER_H
#define TPSBUNDLECONTROLLER_H

@class PSBundleController, PSListController, NSArray, CTXPCServiceSubscriptionContext, NSOrderedSet;


#import "TPSTelephonyController.h"

@interface TPSBundleController : PSBundleController

@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, weak, nonatomic) PSListController *parentListController;
@property (copy, nonatomic) NSArray *specifiers; // ivar: _specifiers
@property (retain, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext; // ivar: _subscriptionContext
@property (readonly, nonatomic, getter=isSubscriptionListHidden) BOOL subscriptionListHidden;
@property (readonly, copy, nonatomic) NSOrderedSet *subscriptions;
@property (readonly, copy, nonatomic) NSOrderedSet *supportedSubscriptions;
@property (readonly, nonatomic) BOOL supportsDisabledSubscriptions; // ivar: _supportsDisabledSubscriptions
@property (readonly, nonatomic) TPSTelephonyController *telephonyController; // ivar: _telephonyController


-(id)initWithParentListController:(id)arg0 ;
-(id)specifiersWithSpecifier:(id)arg0 ;
-(id)subscriptionContextForSpecifier:(id)arg0 ;
-(void)telephonyController:(id)arg0 didChangeActiveSubscriptions:(id)arg1 ;
-(void)telephonyController:(id)arg0 didChangeSubscriptions:(id)arg1 ;


@end


#endif