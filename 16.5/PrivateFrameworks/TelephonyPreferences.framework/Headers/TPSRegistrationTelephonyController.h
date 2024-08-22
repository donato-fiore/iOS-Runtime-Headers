// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSREGISTRATIONTELEPHONYCONTROLLER_H
#define TPSREGISTRATIONTELEPHONYCONTROLLER_H

@class NSString, CTNetworkSelectionInfo, NSArray, CTXPCServiceSubscriptionContext;
@protocol CoreTelephonyClientRegistrationDelegate;


#import "TPSTelephonyController.h"

@interface TPSRegistrationTelephonyController : TPSTelephonyController <CoreTelephonyClientRegistrationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CTNetworkSelectionInfo *networkSelectionInfo; // ivar: _networkSelectionInfo
@property (copy, nonatomic) NSArray *networks; // ivar: _networks
@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext; // ivar: _subscriptionContext
@property (readonly) Class superclass;


-(id)copyNetworkSelectionInfo;
-(id)init;
-(id)initWithSubscriptionContext:(id)arg0 ;
-(void)automaticallySelectNetwork;
-(void)automaticallySelectNetworkWithCompletion:(id)arg0 ;
-(void)fetchNetworkList;
-(void)fetchNetworkListWithCompletion:(id)arg0 ;
-(void)networkListAvailable:(id)arg0 list:(id)arg1 ;
-(void)networkSelected:(id)arg0 success:(BOOL)arg1 mode:(id)arg2 ;
-(void)networksWithCompletionHandler:(id)arg0 ;
-(void)performDelegateSelector:(SEL)arg0 ;
-(void)selectNetwork:(id)arg0 ;
-(void)selectNetwork:(id)arg0 completion:(id)arg1 ;


@end


#endif